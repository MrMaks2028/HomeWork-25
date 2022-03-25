#include <iostream>
#include <string>

using namespace std;

struct movies {
	string title;
	int year;
	string genre;
	int duration;
	int price;
}Avangers = {"Avangers", 2012, "Action", 165, 280},
HarryPotter = {"Harry Potter", 2001, "Fantastic", 175, 250},
Alien ={"Alien", 1980, "Horror", 170, 200};

void showMovie(movies m);
movies expensive(movies x, movies y, movies z);
movies updateInfo(movies m);

int main() {
	setlocale(LC_ALL,"Russian");

	cout << "������ 1.\n";
	showMovie(Avangers);
	
	cout << "������ 2.\n����� ������� ����� - " << expensive(Avangers, HarryPotter, Alien).title << "\n\n";

	cout << "������ 3.\n"; 
	updateInfo(HarryPotter);
	showMovie(HarryPotter);



	return 0;
}
void showMovie(movies m) {
	cout << "��������: " << m.title << endl <<
			"��� ������: " << m.year << endl <<
			"����: " << m.genre << endl <<
			"�����������������: " << m.duration << " �����" << endl <<
			"���� �� ����: " << m.price << "\n\n";
}
movies expensive(movies x, movies y, movies z) {
	if (x.price > y.price && x.price > z.price)
		return x;
	else
		if (y.price > x.price && y.price > z.price)
			return y;
		else
			if (z.price > x.price && z.price > y.price)
				return z;
}
movies updateInfo(movies m) {
	int x;
	cout << "��������, ����� ���������� � ������ ������ �������� :\n\n" <<
		"1. ��������;\n" <<
		"2.��� ������;\n" <<
		"3. ����;\n" <<
		"4. �����������������;\n" <<
		"5. ���� �� ����.\n\n���� -> ";
	cin >> x;
	switch (x) {
	case 1: cout << "������� ����� �������� ������: ";
		getline(cin, m.title);
		return m;
		break;
	case 2: cout << "������� ����� ��� ������ ������: ";
		cin >> m.year;
		return m;
		break;
	case 3: cout << "������� ����� ���� ������: ";
		getline(cin, m.genre);
		return m;
		break;
	case 4: cout << "������� ����� ����������������� ������: ";
		cin >> m.duration;
		return m;
		break;
	case 5: cout << "������� ����� ���� �� ���� ������: ";
		cin >> m.price;
		return m;
		break;
	default: cout << "������!"; break;
		
	}
}