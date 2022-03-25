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

	cout << "Задача 1.\n";
	showMovie(Avangers);
	
	cout << "Задача 2.\nСамый дорогой фильм - " << expensive(Avangers, HarryPotter, Alien).title << "\n\n";

	cout << "Задача 3.\n"; 
	updateInfo(HarryPotter);
	showMovie(HarryPotter);



	return 0;
}
void showMovie(movies m) {
	cout << "Название: " << m.title << endl <<
			"Год выхода: " << m.year << endl <<
			"Жанр: " << m.genre << endl <<
			"Продолжительность: " << m.duration << " минут" << endl <<
			"Цена за диск: " << m.price << "\n\n";
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
	cout << "Выберите, какую информацию о фильме хотите обновить :\n\n" <<
		"1. Название;\n" <<
		"2.Год выхода;\n" <<
		"3. Жанр;\n" <<
		"4. Продолжительность;\n" <<
		"5. Цена за диск.\n\nВвод -> ";
	cin >> x;
	switch (x) {
	case 1: cout << "Введите новое название фильма: ";
		getline(cin, m.title);
		return m;
		break;
	case 2: cout << "Введите новый год выхода фильма: ";
		cin >> m.year;
		return m;
		break;
	case 3: cout << "Введите новый жанр фильма: ";
		getline(cin, m.genre);
		return m;
		break;
	case 4: cout << "Введите новую продолжительность фильма: ";
		cin >> m.duration;
		return m;
		break;
	case 5: cout << "Введите новую цену за диск фильма: ";
		cin >> m.price;
		return m;
		break;
	default: cout << "Ошибка!"; break;
		
	}
}