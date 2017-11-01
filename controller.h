#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <gtkmm.h>
#include "items.h"

class Controller{
  public:
    void execute_cmd(int cmd);
    void add_dialog();
    void create_serving_dialog();
  private:
    Items items;
    //vector <Serving> order;
};
#endif
