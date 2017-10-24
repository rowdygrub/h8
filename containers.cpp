#include "containers"

void Containers::stock(){
  if(stock == 0){
    cout << name << " sold out\n";
  }
  stock = stock - 1;
}
