#include <iostream>
#include <string>
#include <vector>
class Car {
private:
  string licensePlate;
  string owner;

public:
  Car(string lp, string o)
  : licensePlate(lp), owner(o) {}
  string getLicensePlate() const 
  {
    return licensePlate;
  }

  void display() const 
  {
    cout << "License Plate: " << licensePlate << ", Owner: " << owner << endl;
  }
};

class ParkingLot {
private:
  vector<Car> parkedCars;
  int capacity;
public:
  ParkingLot(int cap)
    : capacity(cap) {}
  bool parkCar(const Car& car) {
    if (parkedCars.size() < capacity) {
      parkedCars.push_back(car);
      return true;
    } else {
      cout << "Parking lot is full!" << endl;
      return false;
    }
  }
  void displayParkedCars() const {
    cout << "Parked Cars:\n";
    for (const auto& car : parkedCars) {
      car.display();
    }
  }
};
int main() {
  ParkingLot myParkingLot(10);
  Car car1("BC123", "Sanjay gore");
  Car car2("YZ457", "Janvi manse");
  Car car3("MN423", "Aliya kapse");
  Car car4("QR6124", "meena sharma");
  myParkingLot.parkCar(car1);
  myParkingLot.parkCar(car2);
  myParkingLot.parkCar(car3);
  myParkingLot.parkCar(car4);
  myParkingLot.displayParkedCars();
  return 0;
}

/*

Car Class: Defines a car with a license plate and owner. It includes a constructor to initialize these attributes and a method to display car information.

ParkingLot Class: Manages a collection of cars using a std::vector and has a capacity limit. It provides methods to park a car and display all parked cars.

Main Function: Creates instances of Car, attempts to park them in an instance of ParkingLot, and then displays the parked cars.

*/