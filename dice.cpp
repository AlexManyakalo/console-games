#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

void draw(int x);
void one();
void two();
void three();
void four();
void five();
void six();

int main() {
	srand(time(0));
	while (true) {
		system("cls");
		int a = rand() % 6 + 1;
		draw(a);
		
		cout << "\nPress ENTER\nto continue";
		cin.get();
	}
}

void draw(int x) {
	switch (x) {
		case 1: one(); break;
		case 2: two(); break;
		case 3: three(); break;
		case 4: four(); break;
		case 5: five(); break;
		case 6: six(); break;
	}
}

void one() {
	cout << "+-------+\n"
		 << "|       |\n"
		 << "|   o   |\n"
		 << "|       |\n"
		 << "+-------+" << endl;
}

void two() {
	cout << "+-------+\n"
		 << "|       |\n"
		 << "| o   o |\n"
		 << "|       |\n"
		 << "+-------+" << endl;
}

void three() {
	cout << "+-------+\n"
		 << "| o     |\n"
		 << "|   o   |\n"
		 << "|     o |\n"
		 << "+-------+" << endl;
}

void four() {
	cout << "+-------+\n"
		 << "| o   o |\n"
		 << "|       |\n"
		 << "| o   o |\n"
		 << "+-------+" << endl;
}

void five() {
	cout << "+-------+\n"
		 << "| o   o |\n"
		 << "|   o   |\n"
		 << "| o   o |\n"
		 << "+-------+" << endl;
}

void six() {
	cout << "+-------+\n"
		 << "| o   o |\n"
		 << "| o   o |\n"
		 << "| o   o |\n"
		 << "+-------+" << endl;
}
