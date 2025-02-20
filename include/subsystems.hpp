#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"
#include "pros/adi.hpp"
#include "pros/optical.hpp"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');
inline pros::adi::DigitalOut mogo('A',0);
inline pros::adi::DigitalOut hang('B',0);
inline pros::adi::DigitalOut doink('F',0);

inline bool mogoState = 0;
inline bool doinkState = 0;
inline bool hangState = 0;

inline pros::Motor intake(15);
inline pros::Motor arm(3);

inline pros::Optical opticalSensor(1);