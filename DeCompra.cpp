#include<iostream>
#include<Windows.h>
using namespace std;

string inventory[5]{ "flashlight" };

void shop();

void Inventory() {
	for (int i = 0; i < 5; i++)
		cout << inventory[i] << " ";
}

int main() {

	system("color B");
	int room = 1;
	char input;

	cout << "you looking like an aStronust that like goes To space or whAtever on a mission but, the space ship You are on explodedsssssss" << endl;
	cout << "While floating around spacE a transdImensional home ship appeaRs from the emptyness, You are able to finD a way aboard" << endl;
	cout << "youre gonna be straned there for a while, better go explore or die of loneliness  " << endl;
	cout << "You have";
	cout << " a " << inventory[0] << " ";
	cout << endl;
	cout << "ENTER 'q' TO EXIT AT ANY TIME" << endl;
	cout << endl;
	system("pause");
	system("CLS");

	do {
		switch (room) {
		case 1:
			system("CLS");
			cout << "Its pretty dark but,  the room looks like a kitchen" << endl;
			cout << "There's a stove, dishwasher, fridge, and complementing blue countertops" << endl;
			cout << "But spilling out of the darkness, the room is full of dolls! dolls everywhere!!!  " << endl;
			cout << "Falling out of the fridge, hanging from the ceiling, pinned to the walls" << endl;
			cout << "They all seems to trck you with their eyes" << endl;
			cout << "Theres a door that leads north and another that goes to the east" << endl;
			cout << "Type 'shop' for the SHOP" << endl;

			cin >> input;

			if (input == "e")
				room = 2;
			if (input == "shop")
				shop();
			break;

		case 2:
			system("CLS");
			shop();

			cout << "A coutch and an accent coffe table are flipped over and theres a futureistic tv that lights up the room with an EERE blue light" << endl;
			cout << "This is probably the living room" << endl;
			cout << "Theres a key inside a coffee mug thats on the floor by the table" << endl;
			cout << "Spiders are occupying the coutch, looks like thier favorte show is on...IDK" << endl;
			cout << "You can see a door to the West and a hole in the wall to the North" << endl;

			cin >> input;

			if (input == 'N')
				room = 3;
			if (input == 'W')
				room = 1;
			else
				cout << "which direction is that?" << endl;
			break;


		}
	} while (input != 'q');
}

void shop() {
	string input;
	do {
		cout << "HEY, It smells like up dawg" << endl;
		cout << "Enter K for Key, P for POTIONS, L for L-I cant see the last option for L" << endl;
		cout << "q to Quit" << endl;
		cin >> input;
		if (input == "K") {
			inventory[1] = "key";
			cout << "MMM KEY" << endl;
		}
		if (input == "P") {
			inventory[2] = "Potion";
			cout << "Yea its a POT" << endl;
		}
		if (input == "L") {
			inventory[3] = "L-I cant see the last option for L";
			cout << "you got 'L'" << endl;
		}
		cout << "In your bag, theres: ";
		Inventory();
		cout << endl;

	} while (input != "q");
}
