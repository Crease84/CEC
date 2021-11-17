//My random Libraries
#include<iostream>
#include<Windows.h>
#include<vector>
#include<string>

using namespace std; //Hacker Codes

//Global Variables
vector<string> inventory(5);
int MONIES = 10;
int health = 100;

//Function Declares
void Inventory();
void shop();
void monsterHigh();
void Battle(int monsterHealth);


int main() {
	system("color B"); //Changes Text to blue 

	//Local Variables
	int turns = 0;
	int room = 1;
	string input;

	cout << "turn: " << turns << endl;

	inventory.push_back("Flashlight");
	turns++;

	cout << "you looking like an aStronust that like goes To space or whAtever on a mission but, the space ship You are on explodedsssssss" << endl;
	cout << "While floating around spacE a transdImensional home ship appeaRs from the emptyness, You are able to finD a way aboard" << endl;
	cout << "youre gonna be straned there for a while, better go explore or die of loneliness  " << endl;
	cout << "good thing you brought a flashlight" << endl;
	cout << endl;
	cout << "ENTER 'q' TO EXIT AT ANY TIME" << endl;
	cout << endl;
	system("pause");
	system("CLS");

	do { //-------------Game Loop -----------------
		switch (room) {
		case 1:
			system("CLS");
			cout << ">" << input << endl;
			cout << "Its pretty dark but,  the room looks like a kitchen" << endl;
			cout << "There's a stove, dishwasher, fridge, and complementing blue countertops" << endl;
			cout << "But spilling out of the darkness, the room is full of dolls! dolls everywhere!!!  " << endl;
			cout << "Falling out of the fridge, hanging from the ceiling, pinned to the walls" << endl;
			cout << "They all seems to trck you with their eyes" << endl;
			cout << "Theres a door that leads north and another that goes to the east" << endl;
			cout << "TYPE 'Shop' TO GO TO THE SHOP" << endl;

			getline(cin, input);

			if (input == "Inventory") {
				system("CLS");
				Inventory();
				system("pause");
			}
			else if (input == "Shop") {
				system("CLS");
				shop();
			}
			else if (input == "Go East")
				room = 2;
			else if (input == "Go North")
				room = 4;
			else {
				cout << "Im not sure you can go that way" << endl;
			}
			break;

		case 2:
			system("CLS");
			monsterHigh();
			cout << ">" << input << endl;
			cout << "A coutch and an accent coffe table are flipped over and theres a futureistic tv that lights up the room with an EERE blue light" << endl;
			cout << "This is probably the living room" << endl;
			cout << "Spiders are occupying the coutch, looks like thier favorte show is on...IDK" << endl;
			cout << "You can see a door to the West and a hole in the wall to the North" << endl;
			for (int i = 5; i < inventory.size(); i++)
				if (inventory[i].compare("Key") != 0)
					cout << "Theres a key inside a coffee mug thats on the floor by the table" << endl;
			

			getline(cin, input);


			if (input == "Take Key") {
				cout << "You added the Key to your inventory" << endl;
				inventory.push_back("Key");
			}
			else if (input == "Inventory") {
				system("CLS");
				Inventory();
				system("pause");
			}
			else if (input == "Go North")
				room = 3;
			else if (input == "Go West")
				room = 1;
			else
				cout << "You WHAT?" << endl;
			break;

		case 3:
			//system("CLS");
			cout << ">" << input << endl;
			cout << "Theres toilet! AND ITS USED" << endl;
			cout << "My favorite part is the snakes comming out of the sink" << endl;
			cout << "Theres a door theres a door just ajar to the West and the big hole to the South" << endl;

			getline(cin, input);

			if (input == "Inventory") {
				system("CLS");
				Inventory();
				system("pause");
			}
			if (input == "Go West")
				room = 4;
			if (input == "Go South")
				room = 2;
			else
				cout << "But nobody came..." << endl;
			break;

		case 4:
			//system("CLS");
			cout << ">" << input << endl;
			cout << "A big bed takes up most of the room" << endl;
			cout << "would be comfy if it wasnt covered in maggots and cockroches" << endl;
			cout << "Watch your step, theres some glass on the foor" << endl;
			cout << "Theres a closed door to the west, Other exits include: South, and East" << endl;

			getline(cin, input);

			if (input == "Invt" || "Inventory")
				Inventory();
			if (input == "Go West")
				if (inventory[1] == "Key") {
					cout << "You Insert the key and turn the lock" << endl;
					cout << "You are able to push open the heavy door" << endl;
				}
				else {
					cout << "Doesnt look like you have a key to open the door" << endl;
				}
			if (input == "Go South")
				room = 1;
			else if (input == "Go East")
				room = 3;
			else
				cout << "Error - 404" << endl;
			break;

		case 5:
			//system("CLS");
			cout << ">" << input << endl;
			cout << "Nothing much going on here" << endl;
			cout << "A grand stair case spirals downward?" << endl;
			cout << "Im not sure how thats possible?" << endl;
			cout << "You can go West down the stairs or easyt to the bedroom" << endl;

			getline(cin, input);

			if (input == "Invt" || "Inventory")
				Inventory();
			if (input == "Go West")
				room = 6;
			else if (input == "Go East")
				room = 4;
			else
				cout << "Yea, NO... " << endl;
			break;


		case 6:
			//system("CLS");
			cout << ">" << input << endl;
			cout << "You make your way down the steps carefully" << endl;
			cout << "Half way down something grabs your ankle" << endl;
			cout << "Your flashlight hits every step on the way down as your body follows its lead to the bottom" << endl;

			break;

		}//End Switch


	} while (input != "q");


}


void Inventory() {
	cout << "Currenly, you are holding: " << endl;
	for (int i = 5; i < inventory.size(); i++)
		cout << "- " << inventory[i] << endl;
	cout << "You have " << MONIES << "MONIES" << endl;
}


void shop() {
	string input;
	do {
		
			cout << "Whatcha Buying?" << endl;
			cout << "One of my friendds used to say that" << endl;

			cout << "FOOD for 5 MONIES" << endl;
			cout << "Brain for 2 MONIES" << endl;
			cout << "Batteries for 8 MONIES" << endl;

			cin >> input;

			system("CLS");

			if (input == "Food")
				if (MONIES >= 5) {
					cout << "Enjoy the treat" << endl;
					cout << endl;
					MONIES = MONIES - 5;
					inventory.push_back("Food?");
				}
				else
					cout << "Make another selection" << endl;
			else if (input == "Brain")
				if (MONIES >= 8) {
					cout << "I guess, If you really want it..." << endl;
					cout << endl;
					MONIES = MONIES - 2;
					inventory.push_back("BRAIN?!?!?!");
				}
				else
					cout << "Make another selection" << endl;
			else if (input == "Batteries")
				if (MONIES >= 2) {
					cout << "More power to Ya" << endl;
					cout << endl;
					MONIES = MONIES - 8;
					inventory.push_back("BRAIN?!?!?!");
				}
				else
					cout << "Make another selection" << endl;
		

	} while (input != "q");
}

void monsterHigh() {
	int num = rand() % 100 + 1;
	if (num <= 20) {
		cout << "EEK A SPOOKY GHOSTTTTTT O_o" << endl << endl;
		Battle(40);
	}
	else if (num <= 50) {
		cout << "OMG THATS A HUGEEE SPIDER, MY MOM IS ALLERGIC!!!" << endl;
		Battle(30);
	}
	else if (num <= 90) {
		cout << "OH GEEZ Rick, It's a lifeform that used to be decesed but now it seems that the cells have reanimated the organs and tissue and they are able to have normal human functions and dont feel pain when they are hurt or when limbs are removed from their abdomend but, for some reason they like to eat the cerebral cortexes of the people that havent been reanimated" << endl;
		Battle(55);
	}
	else {
		cout << "Its a wizard harry!" << endl << "Its a WHATT??" << endl;
		Battle(100);
	}
}

void Battle(int monsterHealth) {
	int damage;
	while (health > 0 && monsterHealth > 0){
		damage = rand() % 20;
		health -= damage;
		cout << "the monster hurts for for " << damage << "damage" << endl;
		//Player attacks
		string lookingFor = "Sword";
		size_t found = inventory[0].find(lookingFor);
		if (found != string::npos)
			cout << "Sword found in inventory: " << *found << '\n';
		else
			cout << "Sword not found in inventory\n";
			
		damage = rand() % 40;
		monsterHealth -= damage;
		cout << "The monster takes " << damage << " damage from you" << endl;
	} // end of loop battle

	if (monsterHealth <= 0) {
		cout << "The monster sashayed away" << endl;
	}
	else
		cout << "you died" << endl;

}
