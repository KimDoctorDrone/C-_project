#include <iostream>
using namespace std;

#define node 100
struct employee {
	int number;
	string name;
	string group;
	int money;
};

void prtpeople(employee people, int num);

int main() {
	employee people[node];
	int i = 0;
	char op;

	cout << "자료를 입력해주세요." << endl;
	while (i < 10) {
		cout << "1)학번:"; cin >> people[i].number;
		cout << "2)이름"; cin >> people[i].name;
		cout << "3)조"; cin >> people[i].group;
		cout << "4)용돈"; cin >> people[i].money;
		i++;

		cout << "계속해서 자료를 입력하시겠습니까?(y,n)";
		cin >> op;
		cout << endl;
		if (op=='n') {
			break;
		}
	}

	cout << "총" << i << "명의 조원 정보를 출력합니다." << endl;
	for (int j = 0; j < i; j++)
		prtpeople(people[j], j + 1);

	return 0;
}

void prtpeople(employee people, int num) {
	cout << num << "번째 정보:" << endl;
	cout << "1)학번" << people.number << endl;
	cout << "2)이름" << people.name << endl;
	cout << "3)조" << people.group << endl;
	cout << "4)용돈" << people.money << endl;
}
