#include <iostream>
using namespace std;

class A {

protected:
    int a;

public:

    void setdataa() {
        cout << "enter a: " << endl;
        cin >> a;
    }

    void getdataa() {
        cout << endl << "a: " << a << endl;
    }
};

class B : public A {

protected:
    int b;

public:

    void setdatab() {

        cout << "enter b: " << endl;
        cin >> b;
    }

    void getdatab() {
        cout << endl << "b: " << b << endl;
    }


};

class C : public A {

protected:
    int c;

public:

    void setdatac() {

        cout << "enter c: " << endl;
        cin >> c;
    }

    void getdatac() {
        cout << endl << "c: " << c << endl;
    }
};

class D : public C, public B {

protected:
    int d;

public:

    void setdatad() {

        cout << "enter d: " << endl;
        cin >> d;
    }

    void getdatad() {
        cout << endl << "d: " << d << endl;
        cout << "sum of all numbers: " << B::a + b + c + d << endl;
    }
};

int main() {

    D d1;
    d1.B::setdataa();
    d1.setdatab();
    d1.setdatac();
    d1.setdatad();

    d1.B::getdataa();
    d1.getdatab();
    d1.getdatac();
    d1.getdatad();
    return 0;
}
