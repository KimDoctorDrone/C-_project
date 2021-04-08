#include <iostream>

using namespace std;

class Animal {

public:
    virtual void Cry() = 0;
    virtual void Gosu() = 0;

};

class Dog : public Animal {

public:
    void Gosu() {
        cout << "´Ù¸®´Â 4°³\n";
        cout << "°£½ÄÀº °³²­\n";
        return;
    }
    void Cry() {
        cout << "¸Û¸Û\n" << endl; return;
    }

};

class Bird : public Animal {

public:
    void Gosu() {
        cout << "´Ù¸®´Â 2°³\n";
        cout << "°£½ÄÀº »õ¿ì±ø\n";
        return;
    }
    void Cry() {
        cout << "Â±Â±\n" << endl; return;
    };

};

class Cat : public Animal {

public:
    void Gosu() {
        cout << "´Ù¸®´Â 4°³\n";
        cout << "°£½ÄÀº Ãò¸£\n";
        return;
    }
    void Cry() {
        cout << "³Ä¿ë\n" << endl; return;
    };

};

int main()
{
    Animal* pa = new Dog;
    Animal* pb = new Bird;
    Animal* pc = new Cat;
    pa->Gosu();
    pa->Cry();
    pb->Gosu();
    pb->Cry();
    pc->Gosu();
    pc->Cry();

    Dog* pd = (Dog*)pa;
    pd->Cry();

    Bird* pe = (Bird*)pb;
    pb->Cry();

    Cat* pf = (Cat*)pc;
    pc->Cry();
    return 0;
}