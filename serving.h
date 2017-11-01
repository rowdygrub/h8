#ifndef SERVING_H_
#define SERVING_H_

#include "items.h"

class Serving{
  public:
    Serving(int container, vector <int> topping, vector <int> flavor): container{container},
    topping{topping},flavor{flavor}{}

    //to_string serving methods

  private:
    Items items; //used to get to_strings from flavors,toppings,
    int container;
    vector <int> flavor;
    vector <int> topping;
};
#endif
