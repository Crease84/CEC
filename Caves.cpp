#include<iostream>
using namespace std;
int main() {

	int room = 1;
	char input;
	int first = 0;

	cout << "For some reason you though it was a good idea to go inside a DARK cave.....Have fun?" << endl;
	cout << "You hold a flashlight in front of you" << endl;
	cout << "-Enter 'q' to exit and any point"<< endl;
	do {
		switch (room) {
		case 1:
			if (first = 0) 
				cout << "you walk back to the start?" << endl;

			else {
				cout << "It looks....like a cave...Rocks everywhere and its kinda MOIST" << endl;
				cout << "Theres an opening ahead of you to the north" << endl;
			}
			
			cin >> input;
			
			if (input == 'N') {
				room = 2;
				first = 1;
			}
			else
				cout << "DOES IT LOOK LIKE YOU CAN GO THAT WAY?" << endl;
			break;
		
		case 2:
			cout << " The cavern is covered in greenish liquid that seeps from the walls" << endl;
			cout << " Theres a big rock blocking then exit to the north but you can go in any OTHER direction" << endl;
			
			cin >> input;

			if (input == 'S')
				room = 1;
			if (input == 'W')
				room = 3;
			if (input == 'E')
				room = 4;
			else
				cout << "Which direction is that?" << endl;
			break;

		case 3:
			cout << "Theres a skeleton on the floor..SPOOPY" << endl;
			cout << "The exit is to the east" << endl;

			cin >> input;


			if (input == 'E')
				room = 2;
			else
				cout << "The skelly bro waved at you" << endl;
			break;

		case 4:
			cout << "You better be quick, the roof look like it can cave in ANY MOMENT" << endl;
			cout << " You can move to the North or West" << endl;

			cin >> input;

			if (input == 'N')
				room = 5;
			else if (input == 'W')
				room = 2;
			else
				cout << "crazy = genuis" << endl;
			break;

		case 5:
			cout << "for some reason the room is BRIGHT WHITE" << endl;
			cout << "Theres and exit to the North and South" << endl;

			cin >> input;
				
			if (input == 'N')
				room = 6;
			else if (input == 'S')
				room = 4;
			else
				cout << "MMM rock flavored ROCKS" << endl;
			break;
				
		case 6:
			cout << "The cave has Rocks everywhere and its alittle wet..sorta feels familiar?" << endl;
			cout << "Theres an exit to the North, Not one to the South" << endl;

			cin >> input;

			if (input == 'N')
				room = 2;
			if (input == 'S')
				cout << "theres no Exit to the South...." << endl;
			else
				cout << "IT HURTS MY HEADDDDD" << endl;
			break;

		}
	} while (input != 'q');

}
