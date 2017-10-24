#ifndef flavors.h
#define flavors.h
#include <iostream>
#include <string>

using namespace std;

class Flavors{
  public:
    Flavors(string name, string description, double wholesale_cost, double retail_price, int stock)
      : name{name}, description{description}, wholesale_cost{wholesale_cost}, retail_price{retail_price}, stock{stock} {}

    string to_string();//list the contents
    bool stock();//decrement each time flavors is used and if(stock == 0) then sold out
  private:
    string name;
    string description;
    double wholesale_cost;
    double retail_price;
    int stock;
};
#endif