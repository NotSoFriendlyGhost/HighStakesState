#include "subsystems.hpp"
#include "EZ-Template/util.hpp"
#include "colordetect.hpp"
#include "pros/colors.hpp"
#include "pros/rtos.hpp"

double redHigh = 35, redLow = 0;
double blueHigh = 175, blueLow = 250;

void bluesort(){
    opticalSensor.set_led_pwm(50);
    while(true){
        intake.move(12000);
        if(opticalSensor.get_hue()<=redHigh&&opticalSensor.get_hue()>=redLow&&opticalSensor.get_proximity()<50){
            intake.brake();
            pros::delay(100);

        }
        pros::delay(ez::util::DELAY_TIME);
    }
}

void redsort(){
    opticalSensor.set_led_pwm(50);
    while(true){
        intake.move(12000);
        if(opticalSensor.get_hue()<=blueHigh&&opticalSensor.get_hue()>=blueLow&&opticalSensor.get_proximity()<50){
            intake.brake();
            pros::delay(100);

        }
        pros::delay(ez::util::DELAY_TIME);
    }
}