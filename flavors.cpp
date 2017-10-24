#include "flavors.h"

void Flavors::stock(){
  if(stock == 0){
    cout << name << " sold Out\n";
  }

  stock = stock - 1;
}
