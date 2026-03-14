# C++ Project Management System

This Project Management System is a C++ console-based application that allows users to manage projects, tasks (including sub-tasks), team members, vendors, and clients through a structured menu-driven interface. 

It is developed using object-oriented programming principles such as encapsulation, inheritance, and polymorphism, and leverages the Standard Template Library (STL) for efficient data handling. Each entity supports add, update, delete, and display operations, while additional functions like task filtering by status and input validation enhance usability. Data persistence is achieved through file input/output in CSV format, and the program includes static functions and modular class design to ensure scalability and maintainability.

##  Features

* **Comprehensive Entity Management:** Full CRUD (Create, Read, Update, Delete) support for Projects, Tasks, Team Members, Vendors, and Clients.
* **Advanced Task Tracking:** Manage sub-tasks, assign tasks to specific team members, and filter tasks by their current status (e.g., Not Started, In Progress, Completed).
* **Data Persistence:** Automatically saves and loads all system data using local text files formatted as CSVs, ensuring no data loss between sessions.
* **OOP & STL:** Built with a modular architecture using inheritance, polymorphism, and C++ STL containers like `std::vector` for memory-safe data management.

##  Folder Structure

The project follows a standard C++ modular structure, separating class declarations and implementations.

```text
cppFinal/
│
├── Headers (.hpp)
│   ├── Client.hpp                 # Client entity declaration
│   ├── Entity.hpp                 # Abstract base class interface
│   ├── FileManager.hpp            # Static file I/O operations
│   ├── Person.hpp                 # Base class for human entities
│   ├── Project.hpp                # Project entity declaration
│   ├── ProjectManagementSystem.hpp# Core controller class
│   ├── Task.hpp                   # Task and sub-task declaration
│   ├── TeamMember.hpp             # Inherits from Person
│   └── Vendor.hpp                 # Vendor entity declaration
│
├── Source Files (.cpp)
│   ├── main.cpp                   # Application entry point and CLI menu
│   ├── Client.cpp
│   ├── FileManager.cpp
│   ├── Person.cpp
│   ├── Project.cpp
│   ├── ProjectManagementSystem.cpp
│   ├── Task.cpp
│   ├── TeamMember.cpp
│   └── Vendor.cpp
│
├── Data Files (Generated automatically)
│   ├── projects.txt               # CSV storage for projects
│   ├── tasks.txt                  # CSV storage for tasks
│   ├── team.txt                   # CSV storage for team members
│   ├── vendors.txt                # CSV storage for vendors
│   └── clients.txt                # CSV storage for clients
│
└── cppFinal.cbp                   # Code::Blocks project configuration file
```

##  Configuration and Setup

Configuration and Setup
You can compile and run this project using either an IDE (like Code::Blocks) or directly via the command line.

### Option 1: Using Code::Blocks
Open the cppFinal.cbp file in Code::Blocks.

Select Build > Build from the top menu (or press Ctrl + F9).

Select Build > Run (or press Ctrl + F10) to launch the console application.

### Option 2: Using the Command Line (GCC/G++)
Ensure you have a C++ compiler (like MinGW on Windows or GCC on Linux/macOS) installed and added to your system's PATH.

Open your terminal or command prompt.

Navigate to the directory containing the source files:

Bash:


cd path/to/cppFinal


Compile all .cpp files together into a single executable:

Bash:


g++ -std=c++11 *.cpp -o ProjectManagementSystem.exe


Run the compiled program:

Bash:


./ProjectManagementSystem.exe

### Option3 : Directly run the program (Built already)
Just double-click ProjectManagementSystem.exe

## Copyright
Copyright reserved by UluruMao.
