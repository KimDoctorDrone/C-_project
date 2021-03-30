#include <iostream>

using namespace std;

class Car {

private:
    string name;
    double cc;
    double hp;

public:
    Car() : name(), cc(0), hp(0) {}
    Car(string name, double cc, double hp) : name(name), cc(cc), hp(hp) {}

    string Getname() {
        return name;
    }
    void Setname(string name_) {
        name = name_;
    }

    double Getkm() {
        return cc;
    }

    void Setkm(double cc_) {
        cc = cc_;
    }

    double Gethp() {
        return hp;
    }

    void Sethp(double hp_) {
        hp = hp_;
    }

};

int main() {
    Car c1{ "2020 아반떼",1598,123 };
    Car c2{ "2020 소나타",1591,180 };
    Car c3{ "2019 아이오닉 하이브리드",1580,105 };
    Car c4{ "2020 싼타페",2151,202 };

    cout << "현대차의 = " << c1.Getname() << ", " << "배기량 :" << c1.Getkm() << "cc" << ", " << "최대출력 :" << c1.Gethp() << "hp" << endl;
    cout << "현대차의 = " << c2.Getname() << ", " << "배기량 :" << c2.Getkm() << "cc" << ", " << "최대출력 :" << c2.Gethp() << "hp" << endl;
    cout << "현대차의 = " << c3.Getname() << ", " << "배기량 :" << c3.Getkm() << "cc" << ", " << "최대출력 :" << c3.Gethp() << "hp" << endl;
    cout << "현대차의 = " << c4.Getname() << ", " << "배기량 :" << c4.Getkm() << "cc" << ", " << "최대출력 :" << c4.Gethp() << "hp" << endl;

}