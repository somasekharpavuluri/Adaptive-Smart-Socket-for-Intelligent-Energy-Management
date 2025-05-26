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
![image](https://github.com/user-attachments/assets/a7b2fefb-e7dd-4627-849a-d7e788778982)

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

![Flowchart](./) ![image](https://github.com/user-attachments/assets/7fb02189-f0d6-4182-b00b-26ef606e2522)

*Fig 3: Operational Flowchart*

---

## 🧩 Hardware Design and Component Selection

- **ESP-8266 (ESP-12F)**: WiFi-enabled MCU
- **Relay Module**: Appliance control
- **AC to DC power module**: Voltage regulation
- **OLED Display**: Visual feedback
- **Manual Switch + Reset Button**: Local fallback

### 📐 Circuit Schematic

![Schematic](./images/schematic_diagram.png) ![image](https://github.com/user-attachments/assets/5202a092-fb1e-4031-8b4a-10ad29800b43)

*Fig 4: Full Circuit Schematic*

---

### 🧱 PCB Layout & Footprint

Designed using EasyEDA for compact, modular layout. Includes:
- SMD components
- Isolated AC/DC regions
- Efficient trace routing

![PCB Layout](./images/pcb_layout.png)  ![image](https://github.com/user-attachments/assets/cf754095-96b7-4abb-9773-2ad0fb118681)

*Fig 5: PCB Layout*

---![image](https://github.com/user-attachments/assets/72adf7f5-b4a2-4dbb-941b-952fe7a74dfb)
![image](https://github.com/user-attachments/assets/0f5a0cdd-67b1-4355-b313-8fd15adf23b4)



### 🔧 Hardware Setup

Final setup includes:
- Socket enclosure
- Relay module
- ESP-8266 board
- OLED display
- Wiring and insulation for safety

![Hardware Setup](./images/hardware_setup.jpg)
*Fig 6: Hardware Integration*

--- ![image](https://github.com/user-attachments/assets/0c6218cd-33ff-4788-b165-ebc968763d0b)


## 💻 Software Configuration
![image](https://github.com/user-attachments/assets/7df15d46-8cb6-4ec6-97a8-f63fcaff7d75)

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

---![image](https://github.com/user-attachments/assets/4e96ed65-0abc-4e50-ad57-01174a205e69)


## 🧪 Results and Analysis

- OTA updates performed without interruption
- Real-time switching via mobile app
- MQTT latency < 300ms
- OLED display updated without lag
- Scheduled switching executed accurately ![image](https://github.com/user-attachments/assets/ca10fe9b-583f-41cd-872b-49610be2b9dd)

- 15–25% reduction in power consumption validated

![Mobile App Control](./images/mobile_control.png)
*Fig 8: MQTT-Based Control Interface*

---![Uploading image.png…]()


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
