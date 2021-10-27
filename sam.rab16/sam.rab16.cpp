#include <iostream>
using namespace std;

void clearCon() {
	system("cls");
}

void changeColorCon() {
	system("color E0");
}

void changeColorText() {
	system("color 0E");
}

int showSizeInt() {
	int n;	
	return sizeof(n);
}

int showSizeChar() {
	char n;
	return sizeof(n);
}

int showSizeDouble() {
	double n;
	return sizeof(n);
}

int showSizeFloat() {
	float n;
	return sizeof(n);
}

int showSizeBool() {
	bool n;
	return sizeof(n);
}


string showHello() {
	return "Привет я функция";
}

void showSquare() {
	int size = 5;
	char tex = '#';
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << tex << " ";
		}
		cout << "\n";
	}
}


int main()
{
	setlocale(0, "");
    int menu;
	cout << "Выберите пункт меню: \n[1] Очищение консоли\n[2] Изменение цвета фона консоли\n[3] Изменение цвета текста консоли\n[4] Вывод размера типа данных INT\n[5] Вывод размера типа данных CHAR\n[6] Вывод размера типа данных DOUBLE\n[7] Вывод размера типа данных FLOAT\n[8] Вывод размера типа данных BOOL\n[9] Вывод сообщения Привет я функция\n[10] Вывод квадрата 5x5\n\n"; 
	cin >> menu;
	cout << "\n";
	switch (menu)
	{
	case 1: {
		clearCon();
	}
	break;
	case 2:
	{
		changeColorCon();
	}
	break;
	case 3:
	{
		changeColorText();
	}
	break;
	case 4:
	{
		cout << "Размер типа данных INT составлет - " << showSizeInt() << " байта";
	}
	break;
	case 5:
	{
		cout << "Размер типа данных CHAR составлет - " << showSizeChar() << " байта";
	}
	break;
	case 6:
	{
		cout << "Размер типа данных DOUBLE составлет - " << showSizeDouble() << " байта";
	}
	break;
	case 7:
	{
		cout << "Размер типа данных FLOAT составлет - " << showSizeFloat() << " байта";
	}
	break;
	case 8:
	{
		cout << "Размер типа данных BOOL составлет - " << showSizeBool() << " байта";
	}
	break;
	case 9:
	{
		cout << showHello();
	}
	break;

	break;
	case 10:
	{
		showSquare();
	}
	break;
	default:
	{
		system("cls");
		cout << "Перезапусти прогу, возможно ты забыл цифры )";
	}
		break;
	}
	int _; cin >> _;
	return 0;
}

