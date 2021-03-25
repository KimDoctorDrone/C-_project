#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct node
{
	int x;
	node* pNext = 0;

	string name;
	int id;
	float money;
};

int main()
{
	node struct1;
	node struct2;
	node struct3;
	node struct4;
	node* ptr;

	struct1.name = "park sang jun";
	struct1.id = 202131406;
	struct1.money = 20;

	struct2.name = "na je hwan";
	struct2.id = 202131458;
	struct2.money = 40;

	struct3.name = "kim dong hwan";
	struct3.id = 202131402;
	struct3.money = 60;

	struct4.name = "ham sung hoon";
	struct4.id = 202131423;
	struct4.money = 80;

	ptr = &struct1;

	struct1.pNext = &struct2;
	struct2.pNext = &struct3;
	struct3.pNext = &struct4;

	cout << setw(13) << left << ptr->name << " " << ptr->id << " " << ptr->money << "만원" << endl;
	cout << setw(13) << left << ptr->pNext->name << " " << ptr->pNext->id << " " << ptr->pNext->money << "만원" << endl;
	cout << setw(13) << left << ptr->pNext->pNext->name << " " << ptr->pNext->pNext->id << " " << ptr->pNext->pNext->money << "만원" << endl;
	cout << setw(13) << left << ptr->pNext->pNext->pNext->name << " " << ptr->pNext->pNext->pNext->id << " " << ptr->pNext->pNext->pNext->money << "만원" << endl;

	cin.get();
}