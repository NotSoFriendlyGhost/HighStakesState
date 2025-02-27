#include "pros/abstract_motor.hpp"
#include "subsystems.hpp"
#include "EZ-Template/util.hpp"
#include "colordetect.hpp"
#include "pros/colors.hpp"
#include "pros/rtos.hpp"

void bluesort(){
    mogo.set_value(1);
    opticalSensor.set_led_pwm(50);
    opticalSensor2.set_led_pwm(50);
    while(true){
        intake.move(127);
        if((opticalSensor.get_hue()<=BLUE_HIGH&&opticalSensor.get_hue()>=BLUE_LOW&&opticalSensor.get_proximity()<100)||(opticalSensor2.get_hue()<=BLUE_HIGH&&opticalSensor2.get_hue()>=BLUE_LOW&&opticalSensor2.get_proximity()<100)){
            intake.brake();
            pros::delay(100);
        }
        pros::delay(ez::util::DELAY_TIME);
    }
}

void redsort(){
    mogo.set_value(1);
    opticalSensor.set_led_pwm(50);
    opticalSensor2.set_led_pwm(50);
    while(true){
        intake.move(127);
        if((opticalSensor.get_hue()<=RED_HIGH&&opticalSensor.get_hue()>=RED_LOW&&opticalSensor.get_proximity()<100)||(opticalSensor2.get_hue()<=RED_HIGH&&opticalSensor2.get_hue()>=RED_LOW&&opticalSensor2.get_proximity()<100)){
            intake.brake();
            pros::delay(100);
        }
        pros::delay(ez::util::DELAY_TIME);
    }
}