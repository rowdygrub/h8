CXXFLAGS = --std=c++11

all: main
debug: CXXFLAGS += -g
debug: main

main: main.o flavors.o containers.o items.o toppings.o
	$(CXX) $(CXXFLAGS) -o main main.o flavors.o containers.o items.o toppings.o


main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

flavors.o: flavors.cpp flavors.h
	$(CXX) $(CXXFLAGS) -c flavors.cpp

containers.o: containers.cpp containers.h
	$(CXX) $(CXXFLAGS) -c containers.cpp

toppings.o: toppings.cpp toppings.h
	$(CXX) $(CXXFLAGS) -c toppings.cpp

clean:
	-rm -f *.o main
