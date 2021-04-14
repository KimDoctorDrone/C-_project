#include <iostream>

using namespace std;

class age
{
private:
    double x;

public:
    age(double x = 0.0)
        : x(x) {}

   
    age& operator++()
    {
        x += 1;


        return *this;
    }

  
    age operator++(int)
    {
        age temp(x);

        x += 1;

        return temp;
    }

    
    friend ostream& operator << (ostream& out, const age& point)
    {
        out << point.x << " ";
        return out;
    }
};




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
    age p1(1);

    Animal* pa = new Dog;
    Animal* pb = new Bird;
    Animal* pc = new Cat;


    pa->Gosu();
    cout << ++p1 << "»ì" << endl;
    pa->Cry();
    
   
    pb->Gosu();
    cout << p1++ << "»ì" << endl;
    pb->Cry();
    

    pc->Gosu();
    cout << p1 << "»ì" << endl;
    pc->Cry();
    

    Dog* pd = (Dog*)pa;
    pd->Cry();

    Bird* pe = (Bird*)pb;
    pb->Cry();

    Cat* pf = (Cat*)pc;
    pc->Cry();
    return 0;
}