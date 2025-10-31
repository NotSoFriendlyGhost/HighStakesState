# 🎯 VEX Robotics Team 38535A — *“High Stakes”* State Championship Code

This repository contains the **complete C/C++ source code** for Team 38535A’s robot from the **2024–2025 VRC game: *“High Stakes”*** — optimized for the Illinois State Championship.  
The code is built using the **PROS** framework and incorporates the **LemLib** library for advanced odometry and autonomous movement.

---

## 🏁 About the Game: *“High Stakes”*

The 2024‑25 VEX Robotics Competition “High Stakes” challenges teams in a 2v2 match format where robots score rings onto stakes, maneuver mobile goals into scoring zones, and climb for bonus points.  
This codebase was developed to deliver **precision**, **speed**, and **reliability** in every phase: from autonomous to driver‑control to end‑game.

---

## ⚙️ Key Features

### 🔁 Multi‑Routine Autonomous  
- Several selectable autonomous routines tailored to different starting positions and alliance strategies.  
- Built on LemLib’s motion library for **odometry**, **pure‑pursuit path following**, and **field‑aware navigation**.

### 📍 Odometry & Navigation (via LemLib)  
- Utilizes LemLib’s odometry support (tracking wheels or IMU) to maintain accurate robot pose on the field. :contentReference[oaicite:2]{index=2}  
- Enables motion algorithms like path following and swing/turn to face commands, delivering consistent autonomous paths.  
- Tuned for the High Stakes field layout to reliably hit scoring zones and end in climb position.

### 🎮 Driver Control Enhancements  
- Custom button mappings for all major subsystems: drivetrain, intake, ring scoring, mobile‑goal manipulator, climb.  
- Responsive controls and ergonomic design ensure the drive team can compete at their best.

### 🧩 Clean Subsystem Architecture  
- Modular code structure managing the drivetrain, scoring mechanism, mobile goal handling, and climb.  
- Designed for maintainability, debugging between matches, and extensibility for future seasons.

---

## 🛠️ Tech Stack

| Component       | Details                                                                            |
|------------------|-------------------------------------------------------------------------------------|
| **Language**     | C / C++                                                                            |
| **Framework**    | [PROS](https://pros.cs.purdue.edu/)                                               |
| **Library**      | [LemLib](https://github.com/LemLib/LemLib) — for odometry, path following, motion algorithms :contentReference[oaicite:3]{index=3} |
| **Hardware**     | VEX V5 Electronics                                                                  |

---

## 🧠 How It Works

1. **Autonomous Phase**  
   - At match start, the driver selects an autonomous routine based on starting side/alliance.  
   - The robot uses LemLib’s odometry to track its position and follow pre‑defined paths and pose transitions.  
   - Scoring actions, mobile goal placements, and climb zone positioning are executed with precision.

2. **Driver Control Phase**  
   - After autonomous, the robot seamlessly transitions into driver control.  
   - The driver uses mapped controls to operate drivetrain, scoring mechanisms, mobile goal manipulator, and climb system.

3. **End‑Game Climb**  
   - The climb subsystem is triggered near end of match for bonus points.  
   - Reliability and safety features ensure the climb executes consistently under competition stress.

4. **Safety & Fallback**  
   - Code includes subsystem resets, sensor checks, and fallback behavior for any unexpected states or interruptions.

---

## 📁 Repository Structure

```text
HighStakesState/
├── src/
│   ├── main.cpp                   # Entry point for PROS project
│   ├── autonomous/                # Autonomous routines & selection logic
│   ├── driver_control/            # Driver control logic, mappings, subsystem calls
│   ├── subsystems/                # Modules: drivetrain, intake, mobile goal manipulator, climb
│   └── utilities/                 # Helpers: LemLib configuration, sensors, PID, logging
├── include/                       # Header files for subsystems and utilities
├── pros.json                      # PROS configuration file
└── README.md                      # Project documentation
