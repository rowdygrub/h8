#include <gtkmm.h>
#include "main_window.h"

void menu();
void execute_cmd(int n);

//TODO:MAKE A MAIN CLASS WITH PRIVATE:ITEMS item

//controller
void execute_cmd(int n){
  Items i;
  if(n == 1)
    i.add_flavors();
  if(n == 2)
    i.add_toppings();
  if(n == 3)
    i.add_containers();
}

void menu(){
  //STRING TITLE:MICE ICE CREAM
  int n = -1;
  while(n != 0){
    cout << "1: add flavors, 2: add toppings, 3: add containers\n";
    cin >> n;
    execute_cmd(n);
  }
}


int main(int argc, char *argv{}){
  Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc,argv,"edu.uta.cse1325.example");

  menu();
}
