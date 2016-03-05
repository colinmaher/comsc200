#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>

class Car {
  private:
    int yearModel;
    std::string make;
    int speed;
    
  public:
    //constructor
    Car(){ this->yearModel = 0; this->make = ""; this->speed = 0; }
    Car(int yearModel, std::string make){this->yearModel = yearModel; this->make = make; this->speed = 0; }
    //accessors
    int getYearModel(){ return yearModel; }
    std::string getMake(){ return make; }
    int getSpeed(){ return speed; }
    
    //feature functions
    void accelerate(){ speed += 5; std::cout << "Accelerating...\n"; print();  }
    void brake(){ speed -= 5; std::cout << "Braking...\n"; print();  }
    void print(){ std::cout << "Current speed: " << getSpeed() << "\n"; }
    
};

#endif