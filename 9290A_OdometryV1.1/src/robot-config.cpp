#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor LeftFront = motor(PORT5, ratio6_1, true);
motor LeftMiddle = motor(PORT2, ratio6_1, false);
motor LeftBack = motor(PORT1, ratio6_1, false);
motor RightBack = motor(PORT7, ratio6_1, true);
motor RightMiddle = motor(PORT11, ratio6_1, true);
motor RightFront = motor(PORT10, ratio6_1, false);
inertial Inertial = inertial(PORT12);
rotation Forward = rotation(PORT8, true);
rotation Aux = rotation(PORT19, false);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}