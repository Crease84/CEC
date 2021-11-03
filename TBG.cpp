//▓█████▄  ▒█████    ▄████    ▄▄▄█████▓ ▒█████   ▒█████  ▄▄▄█████▓ ██░ ██
//▒██▀ ██▌▒██▒  ██▒ ██▒ ▀█▒   ▓  ██▒ ▓▒▒██▒  ██▒▒██▒  ██▒▓  ██▒ ▓▒▓██░ ██▒
//░██   █▌▒██░  ██▒▒██░▄▄▄░   ▒ ▓██░ ▒░▒██░  ██▒▒██░  ██▒▒ ▓██░ ▒░▒██▀▀██░
//░▓█▄   ▌▒██   ██░░▓█  ██▓   ░ ▓██▓ ░ ▒██   ██░▒██   ██░░ ▓██▓ ░ ░▓█ ░██
//░▒████▓ ░ ████▓▒░░▒▓███▀▒     ▒██▒ ░ ░ ████▓▒░░ ████▓▒░  ▒██▒ ░ ░▓█▒░██▓
//▒▒▓  ▒ ░ ▒░▒░▒░  ░▒   ▒      ▒ ░░   ░ ▒░▒░▒░ ░ ▒░▒░▒░   ▒ ░░    ▒ ░░▒░▒
//░ ▒  ▒   ░ ▒ ▒░   ░   ░        ░      ░ ▒ ▒░   ░ ▒ ▒░     ░     ▒ ░▒░ ░
//░ ░  ░ ░ ░ ░ ▒  ░ ░   ░      ░      ░ ░ ░ ▒  ░ ░ ░ ▒    ░       ░  ░░ ░
//░        ░ ░        ░                 ░ ░      ░ ░            ░  ░  ░
//░

 //    _____          ___           ___                                         ___           ___                       ___     
 //   /  /::\        /  /\         /  /\                            ___        /  /\         /  /\          ___        /__/\    
 //  /  /:/\:\      /  /::\       /  /:/_                          /  /\      /  /::\       /  /::\        /  /\       \  \:\   
 // /  /:/  \:\    /  /:/\:\     /  /:/ /\                        /  /:/     /  /:/\:\     /  /:/\:\      /  /:/        \__\:\  
 ///__/:/ \__\:|  /  /:/  \:\   /  /:/_/::\                      /  /:/     /  /:/  \:\   /  /:/  \:\    /  /:/     ___ /  /::\ 
 //\  \:\ /  /:/ /__/:/ \__\:\ /__/:/__\/\:\                    /  /::\    /__/:/ \__\:\ /__/:/ \__\:\  /  /::\    /__/\  /:/\:\
 // \  \:\  /:/  \  \:\ /  /:/ \  \:\ /~~/:/                   /__/:/\:\   \  \:\ /  /:/ \  \:\ /  /:/ /__/:/\:\   \  \:\/:/__\/
 //  \  \:\/:/    \  \:\  /:/   \  \:\  /:/                    \__\/  \:\   \  \:\  /:/   \  \:\  /:/  \__\/  \:\   \  \::/     
 //   \  \::/      \  \:\/:/     \  \:\/:/                          \  \:\   \  \:\/:/     \  \:\/:/        \  \:\   \  \:\     
 //    \__\/        \  \::/       \  \::/                            \__\/    \  \::/       \  \::/          \__\/    \  \:\    
 //                  \__\/         \__\/                                       \__\/         \__\/                     \__\/    

#include<iostream>
#include<iostream>
using namespace std;
int main() {

	string Inventory[5]{"Flashlight"};
	int room = 1;  
	string input;

	cout << "You looking like an astronust that like goes to space or whatever ON A MISSION but, The space ship you are on EXPLODEDSSSSSSS" << endl;
	cout << "You floating there in space when a HUGE space HOUSE hits you and you find away inside" << endl;
	cout << "Youre gonna be straned there for a while, Better go explore or DIE of loneliness" << endl;
	cout << "-Enter 'q' to exit and any point" << endl;
	cout << "GAME START" << endl;
	cout << endl;

	do {
		switch (room) {
		case 1:

		 
			cout << "Its pretty DARK but, using your flashlight, the room looks like a kitchen" << endl;
			cout << "There's a stove, dishwasher, fridge, and complementing blue countertops" << endl;
			cout << "but Spilling out of the darkness, the room is full of DOLLS! DOLLS EVERYWHERE!!!" << endl;
			cout << "falling out of the fridge, Hanging from the ceiling, Pinned to the walls" << endl;
			cout << "They all seems to trck you with their eyes" << endl;
			cout << "Theres a door that leads North and another that goes to the East" << endl;

			
			cin >> input;
			
			if (input == 'E')
				room = 2;
			else if (input == 'N')
				room = 4

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
