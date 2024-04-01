#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor Motor1 = motor(PORT1, ratio6_1, false);
motor Motor2 = motor(PORT2, ratio6_1, false);
motor Motor5 = motor(PORT5, ratio6_1, true);
motor Motor7 = motor(PORT7, ratio6_1, true);
motor Motor10 = motor(PORT10, ratio6_1, false);
motor Motor11 = motor(PORT11, ratio6_1, true);
rotation Rotation8 = rotation(PORT8, false);
rotation Rotation19 = rotation(PORT19, false);
inertial Inertial12 = inertial(PORT12);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}