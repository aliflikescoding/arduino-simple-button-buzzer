# Arduino - Simple Buzzer
![buzzer-thumbnail](https://github.com/user-attachments/assets/7abec451-1939-410a-b3e0-4071b6c32efb)

This is a simple buzzer arduino button trigger, if you press the button the buzzer will turn on, there is also a button to toggle the modes, more information below
## 📖 Live Preview

👀 You can view the live preview via [this youtube video](https://youtu.be/-5EuVW0vIUA)

## 🖥️ Technologies

In this project we used technologies such as:

- [Arduino uno R3](https://docs.arduino.cc/hardware/uno-rev3/) for the main controller
- Seeveral [jumper wires](https://en.wikipedia.org/wiki/Jump_wire)
- A [breadboard](https://en.wikipedia.org/wiki/Breadboard)
- A buzzer
- 2 Buttons

## 📋 Additional information

### 🖥️ Code Logic
This program controls a buzzer using two push buttons:

- On Button (Pin 2) — in normal mode, the buzzer only sounds while the button is held; in constant mode, pressing the button toggles the buzzer on/off.

- Mode Switch Button (Pin 4) — toggles between normal mode and constant mode.

Each button is debounced with a short delay to prevent multiple triggers from a single press. The isModeSwitched and isConstantOn booleans keep track of the current mode and buzzer state.

### 🔌 Circuit Logic
- Power Rails: Arduino 5 V is connected to the breadboard’s positive rail, and Arduino GND is connected to the negative rail to provide power and reference for all components.
- Buzzer Circuit (Pin 12 → 220 Ω resistor → Buzzer → GND):
The 220 Ω resistor limits current to protect the buzzer (though active buzzers don’t always require it, it’s safe practice).
Button Circuits:
- Each button has one side connected to 5 V.
- The other side is connected to its Arduino input pin (Pin 2 for On Button, Pin 4 for Mode Switch).
- A 10 kΩ resistor connects each button’s input side to GND (pull-down resistor). This ensures the pin reads LOW when the button isn’t pressed, and HIGH when pressed.
Ground: All grounds (buzzer, resistors, Arduino GND) are tied together to complete the circuit.
