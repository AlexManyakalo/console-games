#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	system("chcp 1251 > nul");
	srand(time(0));
	
	cout << "Угадайте число от 1 до 100\n\n--------------------------\n";
	int attempts = 7, num = 0, secretNum = rand() % 100 + 1;
	
	while (attempts > 0) {
		cout << "Осталось попыток: " << attempts << ". Ваше число: ";
		cin >> num;
		--attempts;
		if (num > secretNum) cout << "Меньше\n";
		else if (secretNum > num) cout << "Больше\n";
		else {
			cout << "--------------------------\n" << "Вы угадали!";
			return 0;
		}
	}
	cout << "--------------------------\nВы проиграли.\nЭто было число " << secretNum;
}
