#include<Windows.h>
#include<ctime>
#include<iostream>
using namespace std; 
int main() {
	system("color 0B");
	srand(time(NULL));
	char input;
	int roll;
	cout << "Welcome to dice simulator. Press any key to roll, 'q' to quit." << endl << endl;
	do {
		roll = rand() % 6 + 1;
		switch (roll) {
		case 1:
			cout << "You rolled a 1!" << endl;
			break;
		case 2:
			cout << "You rolled a 2!" << endl;
			break;
		case 3:
			cout << "You rolled a 3!" << endl;
			break;
		case 4:
			cout << "You rolled a 4!" << endl;
			break;
		case 5:
			cout << "You rolled a 5!" << endl;
			break;
		case 6:
			cout << "You rolled a 6!" << endl;
			break;
		}
		cout << "Press 'q' to quit, any other key to roll again." << endl;
		cin >> input;
	} while (input != 'q');

	//SetConsoleTitle(("I WANT MY MOMMY"));
	MessageBox(nullptr, TEXT("ERROR..I think"), TEXT("Oh No, I Hope I Dont Fall"), MB_OK);
	Beep(500, 800);
	//PlaySound(TEXT("Quack.wav"), NULL, SND_FILENAME);
	system("pause");
}
