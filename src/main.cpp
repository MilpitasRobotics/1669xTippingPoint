#include "main.h"
#include <iostream>
#include <string.h>
using namespace okapi;

void initialize() {
	pros::delay(200);
	//initialize() function code
	pros::lcd::initialize();
}

void competition_initialize(){
	pros::delay(200);
	//initialize() function code
	pros::lcd::initialize();
	while(true){
		//add code here to print
	}
}

void disabled() {
	//disabled() function code
}


void autonomous() {
	//auton function code here
}
void opcontrol() {
	pros::lcd::initialize();
	while (true) {
		//call the functions here for driver control
	}
}
