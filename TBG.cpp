#include<iostream>
#include<Windows.h>
using namespace std;

void logo() {
	system("color 4");
	cout << "################################################################################################################################" << endl;
	cout << "#    _____          ___           ___                                         ___           ___                       ___      #" << endl;
	cout << "#   /  /  \\        /  /\\         /  /\\                            ___        /  /\\         /  /\\          ___        /__/\\     #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\       /  / /_                          /  /\\      /  /  \\       /  /  \\        /  /\\       \\  \\ \\    #" << endl;
	cout << "# /  / /  \\ \\    /  / /\\ \\     /  / / /\\                        /  / /     /  / /\\ \\     /  / /\\ \\      /  / /        \\__\\ \\   #" << endl;
	cout << "#/__/ / \\__\\ |  /  / /  \\ \\   /  / /_/  \\                      /  / /     /  / /  \\ \\   /  / /  \\ \\    /  / /     ___ /  /  \\  #" << endl;
	cout << "#\\  \\ \\ /  / / /__/ / \\__\\ \\ /__/ /__\\/\\ \\                    /  /  \\    /__/ / \\__\\ \\ /__/ / \\__\\ \\  /  /  \\    /__/\\  / /\\ \\ #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / / \\  \\ \\ /~~/ /                   /__/ /\\ \\   \\  \\ \\ /  / / \\  \\ \\ /  / / /__/ /\\ \\   \\  \\ \\/ /__\\/ #" << endl;
	cout << "#  \\  \\ \\/ /    \\  \\ \\  / /   \\  \\ \\  / /                    \\__\\/  \\ \\   \\  \\ \\  / /   \\  \\ \\  / /  \\__\\/  \\ \\   \\  \\  /      #" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /     \\  \\ \\/ /                          \\  \\ \\   \\  \\ \\/ /     \\  \\ \\/ /        \\  \\ \\   \\  \\ \\      #" << endl;
	cout << "#    \\__\\/        \\  \\  /       \\  \\  /                            \\__\\/    \\  \\  /       \\  \\  /          \\__\\/    \\  \\ \\     #" << endl;
	cout << "#                  \\__\\/         \\__\\/                                       \\__\\/         \\__\\/                     \\__\\/     #" << endl;
	cout << "################################################################################################################################" << endl;
}

int main() {

	logo();

	system("color B");
	string inventory[5]{ "flashlight" };
	int room = 1;
	char input;

	cout << endl;
	cout << "you looking like an aStronust that like goes To space or whAtever on a mission but, the space ship You are on explodedsssssss" << endl;
	cout << "While floating around spacE a transdImensional home ship appeaRs from the emptyness, You are able to finD a way aboard" << endl;
	cout << "youre gonna be straned there for a while, better go explore or die of loneliness  " << endl;
	cout << "enter 'q' to exit at any point" << endl;
	cout << endl;

	do {
		switch (room) {
		case 1:

			cout << "its pretty dark but, using your flashlight, the room looks like a kitchen" << endl;
			cout << "there's a stove, dishwasher, fridge, and complementing blue countertops" << endl;
			cout << "but spilling out of the darkness, the room is full of dolls! dolls everywhere!!!  " << endl;
			cout << "falling out of the fridge, hanging from the ceiling, pinned to the walls" << endl;
			cout << "they all seems to trck you with their eyes" << endl;
			cout << "theres a door that leads north and another that goes to the east" << endl;
			

			cin >> input;

			if (input == 'e')
				room = 2;
			if (input == 'n')
				room = 4;

			cout << "Im not sure you can go that way" << endl;
			break;

		case 2:
			cout << "A coutch and coffe table accent the broken futureistic tv that lights up the room" << endl;
			cout << "This is probably the living room" << endl;
			cout << "Theres a key inside a coffee mug thats on the table" << endl;
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

		case 3:
			cout << "Theres toilet! AND ITS USED" << endl;
			cout << "My favorite part is the snakes comming out of the sink" << endl;
			cout << "Theres a door theres a door just ajar to the West and the big hole to the South" << endl;

			cin >> input;


			if (input == 'W')
				room = 4;
			if (input == 'S')
				room = 2;
			else
				cout << "But nobody came..." << endl;
			break;

		case 4:
			cout << "A big bed takes up most of the room" << endl;
			cout <<"would be comfy if it wasnt covered in maggots and cockroches" << endl;
			cout << "Watch your step, theres some glass on the foor" << endl;
			cout << "Your exits are to the West, South, and East" << endl;

			cin >> input;

			if (input == 'W')
				room = 5;
			if (input == 'S')
				room = 1;
			else if (input == 'E')
				room = 3;
			else
				cout << "Error - 404" << endl;
			break;

		case 5:
			cout << "Nothing much going on here" << endl;
			cout << "A grand stair case spirals downward?" << endl;
			cout << "Im not sure how thats possible?" << endl;
			cout << "You can go West down the stairs or easyt to the bedroom" << endl;

			cin >> input;

			if (input == 'W')
				room = 6;
			else if (input == 'E')
				room = 4;
			else
				cout << "Yea, NO... " << endl;
			break;

		case 6:
			cout << "You make your way down the steps carefully" << endl;
			cout << "Half way down something grabs your ankle" << endl; 
			cout << "Your flashlight hits every step on the way down as your body follows its lead to the bottom" << endl;

			break;

		}
	} while (input != 'q');
}
