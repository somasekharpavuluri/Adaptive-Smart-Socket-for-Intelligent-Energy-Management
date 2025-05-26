#include <ESP8266WiFi.h>

// Pin where the LED is connected
const int ledPin = 2;  // GPIO2

// Set up your own SSID and password for the Access Point
const char *ssid = "ESP01_LED_AP";  // Wi-Fi name
const char *password = "12345678";  // Password for the Wi-Fi

WiFiServer server(80);  // Create a server on port 80

void setup() {
  pinMode(ledPin, OUTPUT);  // Set LED pin as output
  digitalWrite(ledPin, LOW);  // Initialize the LED to OFF

  // Start the Access Point
  WiFi.softAP(ssid, password);
  Serial.begin(115200);
  Serial.println("Access Point started");

  // Get the IP address of the ESP-01
  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);

  // Start the server
  server.begin();
}

void loop() {
  WiFiClient client = server.available();   // Check if a client has connected
  if (!client) {
    return;
  }

  // Wait for data from the client
  while (!client.available()) {
    delay(1);
  }

  // Read the request
  String request = client.readStringUntil('\r');
  client.flush();

  // Check if the "Turn ON" or "Turn OFF" button was pressed
  if (request.indexOf("/LED=ON") != -1) {
    digitalWrite(ledPin, HIGH);  // Turn the LED ON
  }
  if (request.indexOf("/LED=OFF") != -1) {
    digitalWrite(ledPin, LOW);  // Turn the LED OFF
  }

  // Send the response to the client
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println("");
  
  // Start of HTML
  client.println("<!DOCTYPE HTML><html><head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
  client.println("<title>Smart Socket Control</title>");

  // Add your CSS styles
  client.println("<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center; background-color: black; color: white;}");
  client.println(".button { background-color: #195B6A; border: none; color: white; padding: 20px 60px; text-decoration: none; font-size: 40px; margin: 2px; cursor: pointer; border-radius: 10px; width: 80%; }");
  client.println(".footer {font-size: 20px; background: -webkit-linear-gradient(left, red, blue); -webkit-background-clip: text; color: transparent; margin-top: 20px;}");
  client.println("</style></head><body>");
  
  // Page content
  client.println("<h1 align=center>SMART SOCKET</h1>");

  // Momentary button using JavaScript
  client.println("<button id=\"relayBtn\" class=\"button\" onmousedown=\"sendData('ON')\" onmouseup=\"sendData('OFF')\" ");
  client.println("ontouchstart=\"sendData('ON')\" ontouchend=\"sendData('OFF')\">Press and Hold</button>");
  
  // Footer
  client.println("<div class=\"footer\">Made By @Electron XYZ</div>");

  // JavaScript for momentary button control
  client.println("<script>");
  client.println("function sendData(state) {");
  client.println("  var xhttp = new XMLHttpRequest();");
  client.println("  xhttp.open('GET', '/LED=' + state, true);");
  client.println("  xhttp.send();");
  client.println("}");
  client.println("</script>");

  client.println("</body></html>");
  
  delay(1);
  client.stop();  // Disconnect the client
}