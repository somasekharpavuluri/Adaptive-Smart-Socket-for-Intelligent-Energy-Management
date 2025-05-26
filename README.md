# Adaptive-Smart-Socket-for-Intelligent-Energy-Management
Traditional electrical sockets come with major limitations in energy efficiency and smart control, especially in industrial and domestic environments. These sockets often cause unnecessary energy drain, even when appliances are on standby, leading to increased power loss, operational costs, and shorter appliance lifespans.
# 🔌 Adaptive Smart Socket for Intelligent Energy Management

## 📚 Table of Contents

- [📄 Abstract](#-abstract)
- [🧭 Introduction](#-introduction)
- [🔬 Methodology](#-methodology)
  - [🔲 Block Diagram](#-block-diagram)
  - [🔄 Flowchart](#-flowchart)
- [🧩 Hardware Design and Component Selection](#-hardware-design-and-component-selection)
  - [📐 Circuit Schematic](#-circuit-schematic)
  - [🧱 PCB Layout & Footprint](#-pcb-layout--footprint)
  - [🔧 Hardware Setup](#-hardware-setup)
- [💻 Software Configuration](#-software-configuration)
- [🧪 Results and Analysis](#-results-and-analysis)
- [📈 Future Enhancements](#-future-enhancements)
- [🧑‍💻 Authors](#-authors)
- [📜 License](#-license)

---

## 📄 Abstract

Traditional electrical sockets come with major limitations in energy efficiency and smart control, especially in industrial and domestic environments. These sockets often cause unnecessary energy drain, even when appliances are on standby, leading to increased power loss, operational costs, and shorter appliance lifespans.

This project introduces the **Adaptive Smart Socket**, a cost-effective and user-friendly embedded system designed to tackle these inefficiencies. Built around the **ESP-8266 microcontroller**, the smart socket enables:

- **Wireless control**
- **Real-time energy monitoring**
- **Scheduling capabilities**
- **Over-the-Air (OTA) firmware updates**
- **Web View Configuration for easy access**

The system was designed and simulated using **EasyEDA**, fabricated in a laboratory setting, and tested in real-world conditions to validate performance. Results showed significant reductions in energy waste, improved power distribution, and enhanced user control.

---

## 🧭 Introduction

Conventional sockets operate on simple ON/OFF logic, lacking smart capabilities. This leads to:
- Power waste during standby mode
- No remote accessibility
- Inability to schedule or monitor usage

Smart sockets do exist, but are often complex, unreliable, or unaffordable. This project introduces an **ESP8266-based Adaptive Smart Socket** that addresses these limitations with:

- MQTT-based communication
- Web-based configuration
- OTA firmware updates
- OLED-based real-time feedback

![Smart vs Traditional Socket Comparison](./![image](https://github.com/user-attachments/assets/3e9cb086-3fe7-4782-aa38-cfd1fc297405)
) ![Uploading Screenshot 2025-05-26 214924.png…]()

*Fig 1: Traditional vs Smart Socket Capabilities*

---

## 🔬 Methodology

The Adaptive Smart Socket is designed to intelligently manage energy with minimal complexity and cost.

- ESP8266 controls Wi-Fi and MQTT logic
- Relay controls appliance switching
- OLED provides feedback
- Manual button ensures fallback
- Web configuration allows easy setup

### 🔲 Block Diagram

![Block Diagram](./![image](https://github.com/user-attachments/assets/cfcbdbef-f266-41e9-92f6-10e165daea87)
)
*Fig 2: System Block Diagram*

---

### 🔄 Flowchart

![Flowchart](./)
*Fig 3: Operational Flowchart*

---

## 🧩 Hardware Design and Component Selection

- **ESP-8266 (ESP-12F)**: WiFi-enabled MCU
- **Relay Module**: Appliance control
- **AC to DC power module**: Voltage regulation
- **OLED Display**: Visual feedback
- **Manual Switch + Reset Button**: Local fallback

### 📐 Circuit Schematic

![Schematic](./images/schematic_diagram.png)
*Fig 4: Full Circuit Schematic*

---

### 🧱 PCB Layout & Footprint

Designed using EasyEDA for compact, modular layout. Includes:
- SMD components
- Isolated AC/DC regions
- Efficient trace routing

![PCB Layout](./images/pcb_layout.png)
*Fig 5: PCB Layout*

---

### 🔧 Hardware Setup

Final setup includes:
- Socket enclosure
- Relay module
- ESP-8266 board
- OLED display
- Wiring and insulation for safety

![Hardware Setup](./images/hardware_setup.jpg)
*Fig 6: Hardware Integration*

---

## 💻 Software Configuration

The ESP8266 firmware uses:
- `WiFiManager` for dynamic Wi-Fi config
- `PubSubClient` for MQTT communication
- `ArduinoOTA` for wireless updates
- NTP for real-time clock sync

### 🌐 Setup Flow

1. Device boots into AP mode
2. User connects to `ESP_AP`
3. Web page loads for Wi-Fi & MQTT configuration
4. Upon setup, it reboots into operational mode

![WiFi Config](./images/wifi_setup.png)
*Fig 7: Wi-Fi and MQTT Setup Interface*

---

## 🧪 Results and Analysis

- OTA updates performed without interruption
- Real-time switching via mobile app
- MQTT latency < 300ms
- OLED display updated without lag
- Scheduled switching executed accurately
- 15–25% reduction in power consumption validated

![Mobile App Control](./images/mobile_control.png)
*Fig 8: MQTT-Based Control Interface*

---

## 📈 Future Enhancements

- 🔋 Battery backup for uninterrupted operation
- 🧠 AI/ML for predictive load switching
- ☀️ Solar power integration
- 🧰 RTOS support for real-time tasks
- 🛠️ Deep-sleep mode for 0 power usage when idle

---

## 🧑‍💻 Authors

- **Soma Sekhar Pavuluri** – Electrical and Electronics Engineering  
- **Lanka Arun Karthik** – ECE  
- **Sai Sreenivas Kunda** – EEE  
- **Dusarlapudi Kalyan** – EEE  
- **N. Prabakaran** – ECE, KL University  
- **Ravi Ponnala** – EEE, Vasavi College of Engineering

---

## 📜 License

This project is licensed under the MIT License – see the [LICENSE](./LICENSE) file for details.
