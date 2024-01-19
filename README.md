
# Firefly Safety Application

## About The Project

Firefly is an award-winning safety application recognized in the Congressional App Challenge. This sophisticated application leverages modern sensor technology and real-time data processing to provide a comprehensive fire detection and alert system.

### Built With

- **Arduino Uno & Wi-Fi Module (ESP8266)**: Forms the core of the hardware, responsible for collecting sensor data and communicating with the cloud.
- **MQ-5 Gas Sensor**: Monitors gas concentrations in parts per million (PPM), providing critical data for detecting potential gas leaks and fire hazards.
- **Infrared Flame Sensor**: Detects the presence of flames based on infrared light, offering an additional layer of safety by identifying fires that may not be immediately visible or producing smoke.
- **Google Firebase**: A realtime database that updates with low latency, ensuring data is processed and available to users without delay.
- **Flutter**: Creates the mobile application ecosystem, enabling background alerts, live gas PPM tracking, and live flame detection.

Firefly's technology stack ensures a robust and responsive system, crucial for early fire detection and rapid response in emergency situations.

## Key Components

### Sensor Technology

- **MQ-5 Gas Sensor**: Detects combustible gas concentrations, providing early warnings and precise measurements of gas levels in the air.
- **Infrared Flame Sensor**: Offers quick detection of flames by sensing the infrared wavelengths emitted by a fire, allowing for immediate action.

These sensors, in conjunction with the ESP8266 Wi-Fi module, form a powerful detection unit that interfaces seamlessly with the Firefly app for optimal safety management.

## Getting Started

### Prerequisites

To run Firefly, you will need:

- Arduino IDE
- Flutter SDK
- Access to Google Firebase
- ESP8266 NodeMCU module

### Installation

1. Clone the repository:
```sh
git clone https://github.com/Satvikmatta18/Firefly.git
```
2. Set up the Arduino and sensors, then upload the provided code to the ESP8266 NodeMCU module.
3. Navigate to the `Flutter/firefly` directory, run:
```sh
flutter pub get
flutter run
```
4. Configure your Firebase project according to the setup instructions provided.

## Usage

With Firefly, you can actively monitor your environment for gas leaks and fire outbreaks. The system sends real-time updates and alerts to your mobile device, ensuring you're always informed and prepared to act in case of an emergency.

## Roadmap

- [ ] Integrate additional environmental sensors for comprehensive monitoring.
- [ ] Enhance user interface and experience in the mobile app.
- [ ] Extend database functionalities for long-term trend analysis and insights.
- [ ] Implement support for multiple languages to serve a global user base.


Certainly! To include the video overview link in the README file, you can add a section dedicated to it, usually under "Usage" or as a separate "Demo" section. Here's how you could include it:

---

# Firefly Safety Application

## About The Project

Firefly is an award-winning safety application recognized in the Congressional App Challenge. This sophisticated application leverages modern sensor technology and real-time data processing to provide a comprehensive fire detection and alert system.

### Built With

- **Arduino Uno & Wi-Fi Module (ESP8266)**: Forms the core of the hardware, responsible for collecting sensor data and communicating with the cloud.
- **MQ-5 Gas Sensor**: Monitors gas concentrations in parts per million (PPM), providing critical data for detecting potential gas leaks and fire hazards.
- **Infrared Flame Sensor**: Detects the presence of flames based on infrared light, offering an additional layer of safety by identifying fires that may not be immediately visible or producing smoke.
- **Google Firebase**: A realtime database that updates with low latency, ensuring data is processed and available to users without delay.
- **Flutter**: Creates the mobile application ecosystem, enabling background alerts, live gas PPM tracking, and live flame detection.

Firefly's technology stack ensures a robust and responsive system, crucial for early fire detection and rapid response in emergency situations.

## Key Components

### Sensor Technology

- **MQ-5 Gas Sensor**: Detects combustible gas concentrations, providing early warnings and precise measurements of gas levels in the air.
- **Infrared Flame Sensor**: Offers quick detection of flames by sensing the infrared wavelengths emitted by a fire, allowing for immediate action.

These sensors, in conjunction with the ESP8266 Wi-Fi module, form a powerful detection unit that interfaces seamlessly with the Firefly app for optimal safety management.


## Video Overview

For a comprehensive overview of the Firefly application in action, watch our video here:

[Firefly Overview Video](https://drive.google.com/file/d/1IOAvxmiFp7mES0Rf8_wqkLmSr3s0t8oe/view?usp=sharing)


Replace the placeholder sections like `[Installation instructions]`, `[Usage instructions]`, `[Roadmap details]`, and `[Contribution guidelines]` with the appropriate content from your project. This addition will guide users to a visual representation of how Firefly works, potentially increasing understanding and engagement with your project.


## License

The project is distributed under the MIT License. See `LICENSE` for more information.

## Contact

Project Link: [https://github.com/Satvikmatta18/Firefly](https://github.com/Satvikmatta18/Firefly)

## Acknowledgments

- Congressional App Challenge organizers for the opportunity to showcase Firefly.
- The dedicated contributors and community for their ongoing support.

