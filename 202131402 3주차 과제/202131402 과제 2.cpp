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

	cout << "�ڷḦ �Է����ּ���." << endl;
	while (i < 10) {
		cout << "1)�й�:"; cin >> people[i].number;
		cout << "2)�̸�"; cin >> people[i].name;
		cout << "3)��"; cin >> people[i].group;
		cout << "4)�뵷"; cin >> people[i].money;
		i++;

		cout << "����ؼ� �ڷḦ �Է��Ͻðڽ��ϱ�?(y,n)";
		cin >> op;
		cout << endl;
		if (op=='n') {
			break;
		}
	}

	cout << "��" << i << "���� ���� ������ ����մϴ�." << endl;
	for (int j = 0; j < i; j++)
		prtpeople(people[j], j + 1);

	return 0;
}

void prtpeople(employee people, int num) {
	cout << num << "��° ����:" << endl;
	cout << "1)�й�" << people.number << endl;
	cout << "2)�̸�" << people.name << endl;
	cout << "3)��" << people.group << endl;
	cout << "4)�뵷" << people.money << endl;
}
