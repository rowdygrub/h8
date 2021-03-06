#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H
#include <gtkmm.h>
#include "controller.h"

class Main_window : public Gtk::Window{
  public:
    Main_window();
    virtual ~Main_window();
  protected:
    void on_quit_click();
    void on_add_items_click();
    void on_create_serving_click();
  private:
    Controller controller;
};
#endif
