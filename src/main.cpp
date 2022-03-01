/*
 *  vex maze debug
 *
 */

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    9, 14, 10, 15   
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
using namespace vex;


class Maze
{
  public:
    void step0()
    {
      Drivetrain.driveFor(forward, 110, inches);
    }

    void step1()
    {
      Drivetrain.turnFor(right, 50, degrees);
      Drivetrain.driveFor(forward, 29, inches);
      
      Drivetrain.turnFor(left, 50, degrees);
      Drivetrain.driveFor(forward, 30, inches);
      
      Drivetrain.turnFor(left, 50, degrees);
      Drivetrain.driveFor(forward, 30, inches);
      Drivetrain.turnFor(right, 50, degrees);
    }

    void step2()
    {
      Drivetrain.driveFor(forward, 114, inches);
    }

    void step3()
    {
      Drivetrain.turnFor(left, 90, degrees);
      Drivetrain.driveFor(forward, 42, inches);
      
      Drivetrain.turnFor(right, 90, degrees);
      Drivetrain.driveFor(forward, 31, inches);

      Drivetrain.turnFor(right, 90, degrees);
      Drivetrain.driveFor(forward, 42, inches);
      Drivetrain.turnFor(left, 90, degrees);
    }

    void step4()
    {
      // bottom left of the map
      Drivetrain.driveFor(forward, 82, inches);
      Drivetrain.turnFor(left, 90, degrees);
      Drivetrain.driveFor(forward, 25, inches);
      
      Drivetrain.turnFor(left, 90, degrees);
      Drivetrain.driveFor(forward, 41, inches);
      Drivetrain.turnFor(right, 90, degrees);
    }

    void step5()
    {
      // bottom middle left, upper section
      Drivetrain.driveFor(forward, 56, inches);
      
      Drivetrain.turnFor(right, 90, degrees);
      Drivetrain.driveFor(forward, 22, inches);
      Drivetrain.turnFor(right, 90, degrees);

      Drivetrain.driveFor(forward, 36, inches);
      Drivetrain.turnFor(left, 90, degrees);
    }

    void step6()
    {
      // bottom middle left, lower section
      Drivetrain.driveFor(forward, 25, inches);
      Drivetrain.turnFor(left, 90, degrees);

      Drivetrain.driveFor(forward, 74, inches);
      Drivetrain.turnFor(left, 90, degrees);
    }

    void step7()
    {
      // large loop
      Drivetrain.driveFor(forward, 65, inches);
      Drivetrain.turnFor(left, 90, degrees);
      Drivetrain.driveFor(forward, 33, inches);
      Drivetrain.turnFor(right, 90, degrees);

      Drivetrain.driveFor(forward, 34, inches);
      Drivetrain.turnFor(right, 90, degrees);
      Drivetrain.driveFor(forward, 51, inches);

      Drivetrain.turnFor(right, 90, degrees);
    }

    void step8()
    {
      // second to last bit
      Drivetrain.driveFor(forward, 33, inches);
      Drivetrain.turnFor(left, 90, degrees);
      Drivetrain.driveFor(forward, 27, inches);

      Drivetrain.turnFor(left, 90, degrees);
      Drivetrain.driveFor(forward, 58, inches);
      Drivetrain.turnFor(left, 90, degrees);
    }

    void step9()
    {
      // last section
      Drivetrain.driveFor(forward, 34, inches);
      Drivetrain.turnFor(left, 90, degrees);
     
      Drivetrain.driveFor(forward, 36, inches);
      Drivetrain.turnFor(right, 90, degrees);
    
      // horizontal section
      Drivetrain.driveFor(forward, 36, inches);
      Drivetrain.turnFor(right, 90, degrees);

      Drivetrain.driveFor(forward, 27, inches);
    }

};





int main() 
{
  vexcodeInit();
  Maze maze;

  // spaghetti

  maze.step0();
  maze.step1();
  //maze.step2();
  //maze.step3();
  //maze.step4();
  //maze.step5();
  //maze.step6();
  //maze.step7();
  //maze.step8();
  //maze.step9();
}
