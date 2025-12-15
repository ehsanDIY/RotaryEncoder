# 🌀 Rotary Encoder + TM1637 Counter on ESP8266

A simple yet powerful Arduino project that uses a **rotary encoder** to increment/decrement a counter and displays the value in real-time on a **4-digit 7-segment TM1637 display** — all running on an **ESP8266 (NodeMCU)**.  
✅ **Single-click the encoder button to reset the counter to 0!**

![Demo GIF or photo – e.g., encoder turning, display updating, reset on press](https://via.placeholder.com/600x300/0A2E5A/FFFFFF?text=Rotary+Encoder+%2B+TM1637+Demo)  
*(Replace with actual image/GIF in your repo)*

➡️ **[Watch the Tutorial on YouTube](https://youtube.com/@YourChannel)** *(update with your link)*

---

## 🛠️ Features

- Real-time counter display (supports negative values, e.g., `-12`)
- Direction detection: **Clockwise (CW)** ↗️ / **Counter-Clockwise (CCW)** ↖️
- Hardware-debounced push-button using `ezButton` library
- Reset counter to `0` with a single **click** of the encoder shaft
- Minimal wiring, breadboard-friendly

---

## 🔌 Hardware Used

| Component              | Notes |
|------------------------|-------|
| ESP8266 (NodeMCU)      | Any dev board (e.g., ESP-12E module) |
| Rotary Encoder (with push-button) | Standard KY-040 or similar |
| TM1637 4-Digit 7-Segment Display | Common-anode, 0.36" or 0.56" |
| Jumper Wires & Breadboard | — |

### 🔌 Wiring Diagram

| ESP8266 (NodeMCU) | TM1637 | Rotary Encoder |
|-------------------|--------|----------------|
| `D1`              | `CLK`  | — |
| `D2`              | `DIO`  | — |
| `D7`              | —      | `CLK` |
| `D6`              | —      | `DT` |
| `D5`              | —      | `SW` |
| `3.3V`            | `VCC`  | `VCC` |
| `GND`             | `GND`  | `GND` |

> ⚠️ **Important**: TM1637 and rotary encoder **share power (3.3V/GND)** but use **separate GPIOs** — don’t mix up CLK/DIO pins!

---

## 📦 Libraries

Install via **Arduino IDE → Tools → Manage Libraries**:

| Library | Author | Purpose |
|--------|--------|---------|
| [`TM1637Display`](https://github.com/avishorp/TM1637) | Avishay Orpaz | Drive 7-segment TM1637 display |
| [`ezButton`](https://github.com/thinhpt1994/ezButton) | Thinh Pham | Debounce rotary encoder button |

---

## 🚀 Quick Start

1. Clone or download this repo  
   ```bash
   git clone https://github.com/your-username/rotary-encoder-tm1637.git
2. Open rotary_encoder_counter.ino in Arduino IDE
3. Select board: NodeMCU 1.0 (ESP-12E Module)
4. Upload! ✅
  📝 Tested on:
  Arduino IDE 2.3+
  ESP8266 Core v3.1.2
🎥 Video Tutorial
📌 Rotary Encoder + TM1637 Counter on ESP8266 — Reset on Click!
(Replace with your real video URL)


Qwen3-Max
12:46 AM
Absolutely! Here's the complete README.md in proper Markdown (.md) format, ready to copy-paste directly into your GitHub repository:

markdown
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263
# 🌀 Rotary Encoder + TM1637 Counter on ESP8266

A simple yet powerful Arduino project that uses a **rotary encoder** to increment/decrement a counter and displays the value in real-time on a **4-digit 7-segment TM1637 display** — all running on an **ESP8266 (NodeMCU)**.  
✅ **Single-click the encoder button to reset the counter to 0!**

![Demo GIF or photo – e.g., encoder turning, display updating, reset on press](https://via.placeholder.com/600x300/0A2E5A/FFFFFF?text=Rotary+Encoder+%2B+TM1637+
Open rotary_encoder_counter.ino in Arduino IDE
Select board: NodeMCU 1.0 (ESP-12E Module)
Upload! ✅
📝 Tested on:

Arduino IDE 2.3+
ESP8266 Core v3.1.2
🎥 Video Tutorial
📌 Rotary Encoder + TM1637 Counter on ESP8266 — Reset on Click!
(Replace with your real video URL)

📝 License
This project is open-source under the MIT License — feel free to use, modify, and share! 🙌
See LICENSE for details.

🙌 Support & Contribution
⭐ Star this repo if you find it useful!
🐞 Found a bug? Open an Issue.
💡 Idea for improvement? Submit a Pull Request!
📩 Questions? DM me on YouTube.
Made with ❤️ for the DIY electronics & maker community.
