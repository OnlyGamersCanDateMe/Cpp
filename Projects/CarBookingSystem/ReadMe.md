# 🚗 Car Booking System (Qt5)

A modern desktop-based **Car Booking System** built using **Qt5 (C++ GUI Framework)**. This application allows users to book, cancel, and manage car rentals efficiently through a smooth and intuitive interface.

---

## 🛠️ Features

- 🔍 **Search Cars** by type, availability, or price
- 🧾 **Book Cars** with customer details and date ranges
- 🗂️ **View All Bookings** in a clean table view
- 🛡️ Basic **admin authentication**
- 💾 **File-based data storage** using `.txt` or `.csv`

---

## 📷 Screenshots

 <img width="793" height="633" alt="Login" src="https://github.com/user-attachments/assets/9b16ed1c-fb68-4fb8-8606-04c1686bb305" />
<img width="711" height="613" alt="Book" src="https://github.com/user-attachments/assets/94c13c07-7626-4bd5-93ff-88e0cf5efce1" />
<img width="678" height="624" alt="Add" src="https://github.com/user-attachments/assets/e1e15ee8-a52e-4c2b-bb68-05128e10665c" />
<img width="673" height="551" alt="Menu" src="https://github.com/user-attachments/assets/aab467f3-4904-4d65-8d36-ca5deee3f216" />




---

## 🧰 Tech Stack

| Layer | Technology |
|-------|------------|
| GUI   | **Qt5 (Widgets)** |
| Language | **C++** |
| Build System | **qmake** (`.pro` file) |
| Data Storage | **Flat files** (`.txt`) or basic CSV |

---

## 📂 Project Structure
```text
CarBookingSystem/
├── addcar.cpp / .h / .ui      # Add car module
├── bookcar.cpp / .h / .ui     # Booking module
├── login.cpp / .h / .ui       # Login window
├── mainmenu.cpp / .h / .ui    # Dashboard
├── main.cpp                   # App entry point
├── CarBookingSystem.pro       # Qt project file
├── ReadMe.md                  # This file
└── build/                     # Build artifacts (ignored)
```

---

## ✨ Features

- 👤 **Login System** (basic credential check)
- 🚘 **Add Car** to inventory (admin side)
- 📆 **Book a Car** with user details
- 📋 **Booking summary** screen (optional if implemented)
- 🧹 Clean UI design with multiple windows
- 📁 **Local file-based storage** (if used for booking data)

---

## 🧰 Built With

- **Qt5 (Widgets)**
- **C++**
- **qmake**
- **UI Designer** (`.ui` files)

---

## 🚀 How to Run

### 📦 Requirements

- Qt5 and Qt Creator (or any IDE with Qt5 support)

### 🛠️ Build & Run

1. Open project in Qt Creator:
```bash
qtcreator CarBookingSystem.pro

🧑‍💻 Author
Shivam
BTech AI | Qt Developer | System Builder

📜 License
This project is licensed under the MIT License.
