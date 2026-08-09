# 8-Note Electronic Piano - Embedded Systems Project

An 8-note electronic piano built with an Arduino UNO and a piezo buzzer. Each push button triggers a specific tone frequency ranging from 500 Hz to 4000 Hz. This project was developed as part of the **Embedded Systems** university course to demonstrate digital input reading, PWM audio generation, and hardware interfacing.

---

## 🛠️ Hardware Components
* **Microcontroller:** Arduino UNO
* **Output:** 1 x Piezo Buzzer
* **Inputs:** 8 x Push Buttons
* **Passives:** 8 x 10kΩ Resistors
* **Prototyping:** Breadboard & Jumper Wires

---

## 🔌 Pin Mapping & Tone Frequencies

| Component | Arduino Pin | Frequency (Hz) |
| :--- | :--- | :--- |
| **Buzzer** | Pin 3 | Output |
| **Button 1** | Pin 12 | 500 Hz |
| **Button 2** | Pin 11 | 1000 Hz |
| **Button 3** | Pin 10 | 1500 Hz |
| **Button 4** | Pin 9 | 2000 Hz |
| **Button 5** | Pin 8 | 2500 Hz |
| **Button 6** | Pin 7 | 3000 Hz |
| **Button 7** | Pin 6 | 3500 Hz |
| **Button 8** | Pin 5 | 4000 Hz |

---

## 📐 Circuit Diagram
Designed and simulated using **Tinkercad**:

![Circuit Diagram](<Mini Piano Circuit.png>)

---

## 💻 How It Works
1. The Arduino constantly monitors the digital state of pins 5 through 12.
2. When a button is pressed, the digital pin reads `LOW`.
3. The microcontroller triggers the `tone()` function to play the corresponding frequency on pin 3 for 300 milliseconds.
