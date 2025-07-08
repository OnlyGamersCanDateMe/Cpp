# 🛡️ C++ Keylogger (Windows Only)

A hidden keylogger tool written in C++ using Windows API for educational system-level learning.

---

## ⚙️ Features

- 🧠 Monitors keystrokes using `GetAsyncKeyState()`  
- 🧾 Saves all keys to `Data.txt` in real time  
- 🔐 Supports special keys like `Shift`, `Enter`, arrow keys, etc.  
- 💡 Handles ASCII/character conversions (e.g., Shift + 1 → `!`)  
- 👻 Hides console window using Windows API (`ShowWindow()`)

---
📁 File Structure
<pre>
📁 KEYLOGGER/
├── keylogger.cpp
├── Data.txt               ← (auto-generated after run)
└── README.md              ← (use this file here)
</pre>


## ▶️ Run Instructions

1. **Compile the code** using g++ or MinGW:
   ```bash
   g++ keylogger.cpp -o keylogger.exe

2.    Run the executable:
    ./keylogger.exe
    
3.    Check Output:
    -    Logs will be saved in Data.txt in the same folder.

✅ This program runs silently in the background.

🧠 Key Concepts Covered
    -    Windows system programming with <Windows.h> and <Winuser.h>
    -    File writing in C++ with ofstream
    -    ASCII keycode interpretation and virtual key mapping
    -    Console manipulation via ShowWindow() and FindWindowA()
    -    Infinite loops for real-time key detection

📎 Notes
    -    ⚠️ Works only on Windows — not supported on macOS/Linux
    -    🚫 Use for educational purposes only
    -    🧱 May require Admin privileges
    -    🛡️ May be flagged by antivirus software
    -    🔍 Tested on Windows 10/11

🙋‍♂️ Author
    •    Created by Shivam

⸻

📄 License

This project is licensed for learning and non-commercial use only.

