#include "subsystems.hpp"
#include "EZ-Template/util.hpp"
#include "colordetect.hpp"
#include "pros/colors.hpp"
#include "pros/rtos.hpp"

double redHue;
double blueHue;

void bluesort(){
    opticalSensor.set_led_pwm(50);
    while(true){
        intake.move(12000);
        if(opticalSensor.get_hue()==redHue){
            pros::delay(100);
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
        if(opticalSensor.get_hue()==blueHue){
            pros::delay(100);
            intake.brake();
            pros::delay(100);

        }
        pros::delay(ez::util::DELAY_TIME);
    }
}