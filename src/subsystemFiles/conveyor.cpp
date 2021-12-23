#include "main.h"

int reverse = 1;
bool conveyor_lock = false;
bool conveyor_up = false;
void move_conveyor(){
  if (controller.get_digital(DIGITAL_R2)) {
    reverse = -1;
    conveyor_up = !conveyor_up;
    conveyor_lock = true;
  }
  else if (!controller.get_digital(DIGITAL_R2) && conveyor_lock==true) {
    reverse = 1;
    conveyor_lock = false;
    conveyor_up = !conveyor_up;
  }

  if (conveyor_up)
    conveyor.move_velocity(600*reverse);
  else
    conveyor.move_velocity(0);
}
