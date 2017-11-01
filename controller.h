#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "items.h"

class Controller{
  public:
    void execute_cmd(int cmd);
    void add_dialog();
  private:
    Items items;
};
#endif
