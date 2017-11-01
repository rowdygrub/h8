#include "items.h"

int Items::number_of_flavors(){return flavors.size();}

int Items::number_of_toppings(){return toppings.size();}

int Items::number_of_containers(){return containers.size();}

void Items::add_flavors(){
  string name, description;
  double wholesale_cost, retail_price;
  int stock;

  cout << "Enter flavor name: ";
  cin.ignore();
  getline(cin,name);
  cout << "Enter a description:";
  getline(cin, description);
  cout << "Enter whole sale cost:";
  cin >> wholesale_cost;
  cout << "Enter retail price:";
  cin >> retail_price;
  cout << "Enter stock amount:";
  cin >> stock;

  
  Flavors f{name,description,wholesale_cost,retail_price,stock};
  flavors.push_back(f);
}

void Items::add_toppings(){
  string name, description;
  double wholesale_cost, retail_price;
  int stock;

  cout << "Enter topping name: ";
  cin.ignore();
  getline(cin,name);
  cout << "Enter a description:";
  getline(cin, description);
  cout << "Enter whole sale cost:";
  cin >> wholesale_cost;
  cout << "Enter retail price:";
  cin >> retail_price;
  cout << "Enter stock amount:";
  cin >> stock;

  Toppings t{name,description,wholesale_cost,retail_price,stock};
  toppings.push_back(t);
}

void::Items::add_containers(){
  string name, description;
  double wholesale_cost, retail_price;
  int stock, maximum;

  cout << "Enter container name: ";
  cin.ignore();
  getline(cin,name);
  cout << "Enter a description:";
  getline(cin, description);
  cout << "Enter whole sale cost:";
  cin >> wholesale_cost;
  cout << "Enter retail price:";
  cin >> retail_price;
  cout << "Enter stock amount:";
  cin >> stock;

  Containers c{name,description,wholesale_cost, retail_price,stock, maximum};
  containers.push_back(c);
}
