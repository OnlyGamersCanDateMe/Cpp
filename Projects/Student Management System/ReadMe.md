# 📘 Student Management System (C++)

This is a simple console-based **Student Record Management System** written in **C++** using object-oriented programming and binary file handling.

It allows you to manage student records — including adding, viewing, deleting, and recovering data — all stored in local binary files.

---

## 🚀 Features

- ✅ Add new student records
- 📄 Display all saved records
- ❌ Delete a student record (moves it to a trash file)
- ♻️ View deleted (trashed) records
- 💾 Binary file-based storage (fast & efficient)
- 🎯 Menu-driven interface

---

## 🛠 Technologies Used

- **C++**
- **Object-Oriented Programming (OOP)**
- **File I/O (ifstream, ofstream)**
- **Binary file handling**

---

## 📂 File Structure
StudentManagement.cpp     // Main source code
Stu.txt                   // Stores active student records
Trash.txt                 // Stores deleted student records
Temp.txt                  // Temporary file used during deletion

---

## 📌 How to Use

### 🧱 Requirements
- A C++ compiler (g++, clang, or Code::Blocks)
- OS: Linux / macOS (or update `system("clear")` to `system("cls")` for Windows)

### ▶️ Run Instructions

1. **Compile the code**:
   ```bash
   g++ StudentManagement.cpp -o student
   
2.    Run the executable:   
   ./student

3.    Use the menu:
    1. Write Student Record
    2. Read Student Record
    3. Delete Student Record
    4. Get Deleted Records
    0. Exit
    
    
🧠 Key Concepts Covered
    •    Classes and Objects in C++
    •    File input/output (ifstream, ofstream)
    •    Binary file operations using write() and read()
    •    Pointer casting: (char*)&object
    •    Basic menu loops with do-while and switch-case
    •    Modular programming

⸻

📎 Notes
    •    Binary files are used to preserve object structure.
    •    Deleted records are moved to Trash.txt, not permanently deleted.
    •    This version is for Linux/macOS. On Windows, replace system("clear") with system("cls").

⸻

🙋‍♂️ Author
    •    Created by Shivam

📄 License

This project is free to use for learning and educational purposes.
