# 🎯 VEX Robotics Team 38535A — *“High Stakes”* State Championship Code

This repository contains the complete **C/C++ source code** for VEX Robotics Team 38535A’s robot from the **2024–2025 VRC game: *“High Stakes”***.  
This code was developed for and used at the Illinois State Championship.

---

## 🏁 About the Game: *“High Stakes”*

The game is played on a 12′ × 12′ field with two-team alliances (2v2) and consists of a **15-second Autonomous Period** followed by a **1 minute 45 seconds Driver Control Period**. 

The objective: score as many rings on stakes, place mobile goals in scoring zones, and climb the ladder at the end of the match for bonus points.

Key field elements include mobile goal stakes (some placed in *positive* or *negative* corners), wall stakes, and a central ladder that yields additional climb points.

---

## ⚙️ Key Features

### 🔁 Multi-Routine Autonomous  
- Several selectable autonomous routines to support different starting positions and alliance strategies.  
- Integration with odometry and field-aware positioning to ensure accurate pathing.

### 📍 Odometry & Field Awareness  
- Implements odometry tracking to navigate the field, handle mobile goals and coordinate climbs.  
- Utilizes sensor feedback for consistent repeatable movements and match-ready performance.

### 🎮 Driver Control Enhancements  
- Custom button mappings and helper routines for the drive team to manage subsystems (intake, scoring, mobile-goal manipulation, climb).  
- Focus on responsiveness and ergonomics for high-performance match play.

### 🧩 Subsystem Management  
- Clean and modular code architecture managing all major subsystems: drivetrain, intake, ring/deposit system, mobile goal manipulator, climb mechanism.  
- Designed for maintainability, extension and debugging between matches.

---

## 🛠️ Tech Stack

| Component  | Details |
|------------|---------|
| **Language** | C / C++ |
| **Framework** | [PROS](https://pros.cs.purdue.edu/) (Purdue Robotics Operating System) |
| **Key Library** | Optional integration with EZ-Template (or equivalent) for odometry & autonomous motion |
| **Hardware** | VEX V5 Electronics |

---

## 🧠 How It Works

1. **Autonomous Mode:** Based on operator selection at match start, the robot uses odometry to navigate, score rings, place mobile goals in positive/negative corners, and end in climb zone.  
2. **Driver Control Mode:** After autonomous, the robot seamlessly transitions to driver control where the drive team manipulates subsystems via mapped controls.  
3. **Climb Phase:** At the end of driver control, climb mechanism is activated to ascend the ladder for bonus points (as specified by the game rules).  
4. **Fallback & Safety:** The code includes safeguards, subsystem resets and optionally “safe” or “recovery” routines for match reliability.
