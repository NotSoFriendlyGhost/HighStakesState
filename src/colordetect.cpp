#include "pros/abstract_motor.hpp"
#include "subsystems.hpp"
#include "EZ-Template/util.hpp"
#include "colordetect.hpp"
#include "pros/colors.hpp"
#include "pros/rtos.hpp"

void bluesort(){
    opticalSensor.set_led_pwm(50);
    while(true){
        intake.move(127);
        if(opticalSensor.get_hue()<=35&&opticalSensor.get_hue()>=0&&opticalSensor.get_proximity()<100){
            intake.brake();
            pros::delay(200);
        }
        pros::delay(ez::util::DELAY_TIME);
    }
}

void redsort(){
    opticalSensor.set_led_pwm(50);
    while(true){
        intake.move(127);
        if(opticalSensor.get_hue()<=250&&opticalSensor.get_hue()>=150&&opticalSensor.get_proximity()<100){
            intake.brake();
            pros::delay(200);

        }
        pros::delay(ez::util::DELAY_TIME);
    }
}