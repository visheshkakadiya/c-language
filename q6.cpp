#include <iostream>
using namespace std;

class Car {
public:
     void getcompanies() {
        cout << "car company" << endl;
    }
};

class CarA : public Car {
public:
    void getcarA(int a) {
        cout << "BMW: " << a << endl;
    }
};

class CarB : public Car {
public:
    void getcarA(int a) {
        cout << "audi: " << a << endl;
    }
};

int main() {
    Car c;
    CarA c1;
    CarB c2;

    c.getcompanies(); 
    c1.getcarA(20); 
    c2.getcarA(90); 

}
