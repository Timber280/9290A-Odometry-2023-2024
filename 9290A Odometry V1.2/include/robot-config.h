using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor Motor1;
extern motor Motor2;
extern motor Motor5;
extern motor Motor7;
extern motor Motor10;
extern motor Motor11;
extern rotation Rotation8;
extern rotation Rotation19;
extern inertial Inertial12;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );