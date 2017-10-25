#include "items.h"

void menu();
void execute_cmd();

void execute_cmd(){
  Items i;

  i.add_flavors();                 //test if adding flavors, and toppings result in correct output
  string f = i.get_flavors();      //containers should be the same result
  if(f == "Strawberry Creamy 54.410000 5.990000 60")
    cout << "";
  else
    cout << "not the same string" << endl;

  i.add_toppings();
  string t = i.get_toppings();
  if(t == "Vanilla Description 45.210000 100.000000 80")
    cout << "";
  else
    cout << "not the same string" << endl;

  //i.add_containers();
}




int main(){
  execute_cmd();
}
