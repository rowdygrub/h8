#include "flavors.h"

bool Flavors::stock(){
  if(stock == 0){
    cout << name << " sold out\n";
    return false;
  }
  stock = stock - 1;
  return true;
}
