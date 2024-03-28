using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor LeftFront;
extern motor LeftMiddle;
extern motor LeftBack;
extern motor RightBack;
extern motor RightMiddle;
extern motor RightFront;
extern inertial Inertial;
extern rotation Forward;
extern rotation Aux;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );