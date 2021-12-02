//My random Libraries
#include<iostream>
#include<Windows.h>
#include<vector>
#include<string>

using namespace std; //Hacker Codes

//Global Variables
vector<string> inventory(5);
int sanity = 20;


void logo();
void Inventory();
void intro();

int main() {
	system("color B"); //Changes Text to blue 

	//Local Variables
	int turns = 0;
	int room = 2;
	int floor = 1;
	string input;


	cout << "turn: " << turns << endl;

	//logo();
	intro();

	cout << endl;
	cout << endl;
	cout << "Today marks your first day in space" << endl;
	cout << "The 3rd level of the office is the most stable" << endl;
	cout << "You can easily dock and go through the emegancy excape pod chamber" << endl;
	turns++;

	do { //-------------Game Loop -----------------
		switch (room) {
		case 1: //Living Room
			//system("CLS");
			cout << ">" << input << endl;
			cout << "A coutch and an accent coffe table are flipped over and theres a futureistic tv that lights up the room with an EERE blue light" << endl;
			cout << "This is probably the living room" << endl;
			cout << "Spiders are occupying the coutch, looks like thier favorte show is on...IDK" << endl;
			cout << "You can see a door to the West and a hole in the wall to the North" << endl;
			for (int i = 5; i < inventory.size(); i++)
				if (inventory[i].compare("Hexagon Stair Key") != 0)
					cout << "Theres a keycard inside a coffee mug thats on the floor by the table" << endl;


			getline(cin, input);


			if (input == "Take Key") {
				cout << "You added the Key to your inventory" << endl;
				inventory.push_back("Hexagon Stair Key");
			}
			else if (input == "Inventory") {
				system("CLS");
				Inventory();
				system("pause");
			}
			else if (input == "Go North")
				room = 4;
			else if (input == "Go East")
				room = 2;
			else
				cout << "You WHAT?" << endl;
			break;

		case 2: //Kitchen
			system("CLS");
			cout << ">" << input << endl;
			cout << "Its pretty dark but,  the room looks like a kitchen" << endl;
			cout << "There's a stove, dishwasher, fridge, and complementing blue countertops" << endl;
			cout << "But spilling out of the darkness, the room is full of dolls! dolls everywhere!!!  " << endl;
			cout << "Falling out of the fridge, hanging from the ceiling, pinned to the walls" << endl;
			cout << "They all seems to trck you with their eyes" << endl;
			cout << "Theres a door that leads north and another that goes to the east" << endl;

			getline(cin, input);

			if (input == "Inventory") {
				system("CLS");
				Inventory();
				system("pause");
			}
			else if (input == "Go West")
				room = 2;
			else if (input == "Go North")
				room = 3;
			else { 
				cout << "Im not sure you can go that way" << endl;
			}
			break;

		case 3: // Bathroom
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

		case 4: //Bedroom
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

		case 5: //HexAgotyStair-room
			//system("CLS");
			cout << ">" << input << endl;
			cout << "A big dark room with multiple corners" << endl;
			cout << "Nothing much going on here other than that..." << endl;
			cout << "A grand stair case spirals downward" << endl;
			cout << "Im not sure how thats possible?" << endl;
			cout << "You can go West down the stairs or east to the bedroom" << endl;

			getline(cin, input);

			if (input == "Invt" || "Inventory")
				Inventory();
			else if (input == "Go West")
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

void logo() { //Logo Defined
	system("color 4");
	Sleep(400);
	cout << "##################################" << endl;
	cout << "#    _____                       #" << endl;
	cout << "#   /  /  \\                     #" << endl;
	cout << "#  /  / /\\ \\      /            #" << endl;
	cout << "# /  / /  \\ \\    /  / /        #" << endl;
	cout << "#\\  \\ \\ /  / / /__/           #" << endl;
	cout << "# \\  \\ \\  / /  \\             #" << endl;
	cout << "#  \\  \\ \\/ /                  #" << endl;
	cout << "#   \\  \\  /                    #" << endl;
	cout << "#    \\__\\/                     #" << endl;
	cout << "#                  \\_           #" << endl;
	cout << "##################################" << endl;
	Sleep(100);
	Beep(300, 200);
	Beep(200, 200);
	system("CLS");
	cout << "############################################" << endl;
	cout << "#    _____          __                     #" << endl;
	cout << "#   /  /  \\        /                      #" << endl;
	cout << "#  /  / /\\ \\      /  /                   #" << endl;
	cout << "# /  / /  \\ \\    /  / /\\ \\             #" << endl;
	cout << "#\\  \\ \\ /  / / /__/ / \\                #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\                   #" << endl;
	cout << "#  \\  \\ \\/ /    \\                      #" << endl;
	cout << "#   \\  \\  /      \\                      #" << endl;
	cout << "#    \\__\\/        \\                     #" << endl;
	cout << "#                  \\__                    #" << endl;
	cout << "############################################" << endl;
	Sleep(100);
	Beep(400, 200);
	Beep(300, 200);
	system("CLS");
	cout << "####################################################" << endl;
	cout << "#    _____          ___                            #" << endl;
	cout << "#   /  /  \\        /  /\\                         #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\                       #" << endl;
	cout << "# /  / /  \\ \\    /  / /\\ \\                     #" << endl;
	cout << "#\\  \\ \\ /  / / /__/ / \\__\\ \\ /__/            #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / /                 #" << endl;
	cout << "#  \\  \\ \\/ /    \\  \\ \\  / /   \\             #" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /                    #" << endl;
	cout << "#    \\__\\/        \\  \\  /                      #" << endl;
	cout << "#                  \\__\\/                         #" << endl;
	cout << "####################################################" << endl;
	Sleep(100);
	Beep(500, 200);
	Beep(400, 200);
	system("CLS");
	cout << "####################################################################" << endl;
	cout << "#    _____          ___           ___                              #" << endl;
	cout << "#   /  /  \\        /  /\\         /  /\\                          #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\       /  / /_                         #" << endl;
	cout << "# /  / /  \\ \\    /  / /\\ \\     /  / / /\\                      #" << endl;
	cout << "#\\  \\ \\ /  / / /__/ / \\__\\ \\ /__/ /__\\/\\ \\                #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / / \\  \\ \\ /~~/ /                #" << endl;
	cout << "#  \\  \\ \\/ /    \\  \\ \\  / /   \\  \\ \\  / /                 #" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /     \\  \\ \\/ /                   #" << endl;
	cout << "#    \\__\\/        \\  \\  /       \\  \\  /                      #" << endl;
	cout << "#                  \\__\\/         \\__\\/                         #" << endl;
	cout << "####################################################################" << endl;
	Sleep(100);
	Beep(600, 200);
	Beep(500, 200);
	system("CLS");
	cout << "############################################################################################################" << endl;
	cout << "#    _____          ___           ___                                         ___                          #" << endl;
	cout << "#   /  /  \\        /  /\\         /  /\\                            ___        /  /\\         /           #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\       /  / /                         /  /\\      /  /  \\                     #" << endl;
	cout << "# /  / /  \\ \\    /  / /\\ \\     /  / / /\\                        /  / /     /  / /\\ \\     /  / /     #" << endl;
	cout << "#/__/ / \\__\\ |  /  / /  \\ \\   /  / /_/  \\                      /  / /     /  / /  \\ \\  \\_ / \\     #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / / \\  \\ \\ /~~/ /                   /__/ /\\ \\   \\  \\ \\ /  / / \\  \\#" << endl;
	cout << "#  \\  \\ \\/ /    \\  \\ \\  / /   \\  \\ \\  / /                    \\__\\/  \\ \\   \\  \\ \\  / /   \\ #" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /     \\  \\ \\/ /                          \\  \\ \\   \\  \\ \\/ /         #" << endl;
	cout << "#    \\__\\/        \\  \\  /       \\  \\  /                            \\__\\/    \\  \\  /              #" << endl;
	cout << "#                  \\__\\/         \\__\\/                                       \\__\\/                   #" << endl;
	cout << "############################################################################################################" << endl;
	Sleep(100);
	Beep(700, 200);
	Beep(600, 200);
	system("CLS");
	cout << "###########################################################################################################################" << endl;
	cout << "#    _____          ___           ___                                         ___           ___                       ___ #" << endl;
	cout << "#   /  /  \\        /  /\\         /  /\\                            ___        /  /\\         /  /\\      _/             #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\       /  / /                         /  /\\      /  /  \\        \\    \\ \\                 #" << endl;
	cout << "# /  / /  \\ \\    /  / /\\ \\     /  / / /\\                        /  / /     /  / /\\ \\     /  / /\\ \\      /  /     #" << endl;
	cout << "#/__/ / \\__\\ |  /  / /  \\ \\   /  / /_/  \\                      /  / /     /  / /  \\ \\  \\_ / \\                    #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / / \\  \\ \\ /~~/ /                   /__/ /\\ \\   \\  \\ \\ /  / / \\  \\ \\ /  / / /__ #" << endl;
	cout << "#  \\  \\ \\/ /    \\  \\ \\  / /   \\  \\ \\  / /                    \\__\\/  \\ \\   \\  \\ \\  / /   \\  \\ \\  / /  \\#" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /     \\  \\ \\/ /                          \\  \\ \\   \\  \\ \\/ /     \\   \\ \\         #" << endl;
	cout << "#    \\__\\/        \\  \\  /       \\  \\  /                            \\__\\/    \\  \\  /       \\  \\   \\           #" << endl;
	cout << "#                  \\__\\/         \\__\\/                                       \\__\\/         \\__\\/     \\/          #" << endl;
	cout << "###########################################################################################################################" << endl;
	Sleep(100);
	Beep(800, 200);
	Beep(700, 200);
	system("CLS");
	cout << "################################################################################################################################" << endl;
	cout << "#    _____          ___           ___                                         ___           ___                       ___      #" << endl;
	cout << "# /  /  \\        /  /\\         /  /\\                            ___        /  /\\         /  /\\          ___        /__/\\     #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\       /  / /_                          /  /\\      /  /  \\       /  /  \\        /  /\\       \\  \\ \\    #" << endl;
	cout << "#/  / /  \\ \\    /  / /\\ \\     /  / / /\\                        /  / /     /  / /\\ \\     /  / /\\ \\      /  / /        \\__\\ \\   #" << endl;
	cout << "#/__/ / \\__\\ |  /  / /  \\ \\   /  / /_/  \\                      /  / /     /  / /  \\ \\   /  / /  \\ \\    /  / /     ___ /  /  \\  #" << endl;
	cout << "#\\  \\ \\ /  / / /__/ / \\__\\ \\ /__/ /__\\/\\ \\                  /  /  \\    /__/ / \\__\\ \\ /__/ / \\__\\ \\  /  /  \\    /__/\\  / /\\ \\ #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / / \\  \\ \\ /~~/ /                   /__/ /\\ \\   \\  \\ \\ /  / / \\  \\ \\ /  / / /__/ /\\ \\   \\  \\ \\/ /__\\/ #" << endl;
	cout << "#\\  \\ \\/ /    \\  \\ \\  / /   \\  \\ \\  / /                    \\__\\/  \\ \\   \\  \\ \\  / /   \\  \\ \\  / /  \\__\\/  \\ \\   \\  \\  /      #" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /     \\  \\ \\/ /                          \\  \\ \\   \\  \\ \\/ /     \\  \\ \\/ /        \\  \\ \\   \\  \\ \\      #" << endl;
	cout << "#  \\__\\/        \\  \\  /       \\  \\  /                            \\__\\/    \\  \\  /       \\  \\  /          \\__\\/    \\  \\ \\     #" << endl;
	cout << "#                  \\__\\/         \\__\\/                                       \\__\\/         \\__\\/                     \\__\\/     #" << endl;
	cout << "################################################################################################################################" << endl;
	Sleep(100);
	Beep(900, 200);
	Beep(800, 200);
	system("CLS");
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
	Sleep(100);
	Beep(1000, 200);
	Beep(900, 200);
	system("CLS");
	cout << "################################################################################################################################" << endl;
	cout << "#    _____          ___           ___                                         ___           ___                       ___      #" << endl;
	cout << "# /  /  \\        /  /\\         /  /\\                            ___        /  /\\         /  /\\          ___        /__/\\     #" << endl;
	cout << "#  /  / /\\ \\      /  /  \\       /  / /_                          /  /\\      /  /  \\       /  /  \\        /  /\\       \\  \\ \\    #" << endl;
	cout << "#/  / /  \\ \\    /  / /\\ \\     /  / / /\\                        /  / /     /  / /\\ \\     /  / /\\ \\      /  / /        \\__\\ \\   #" << endl;
	cout << "#/__/ / \\__\\ |  /  / /  \\ \\   /  / /_/  \\                      /  / /     /  / /  \\ \\   /  / /  \\ \\    /  / /     ___ /  /  \\  #" << endl;
	cout << "#\\  \\ \\ /  / / /__/ / \\__\\ \\ /__/ /__\\/\\ \\                  /  /  \\    /__/ / \\__\\ \\ /__/ / \\__\\ \\  /  /  \\    /__/\\  / /\\ \\ #" << endl;
	cout << "# \\  \\ \\  / /  \\  \\ \\ /  / / \\  \\ \\ /~~/ /                   /__/ /\\ \\   \\  \\ \\ /  / / \\  \\ \\ /  / / /__/ /\\ \\   \\  \\ \\/ /__\\/ #" << endl;
	cout << "#\\  \\ \\/ /    \\  \\ \\  / /   \\  \\ \\  / /                    \\__\\/  \\ \\   \\  \\ \\  / /   \\  \\ \\  / /  \\__\\/  \\ \\   \\  \\  /      #" << endl;
	cout << "#   \\  \\  /      \\  \\ \\/ /     \\  \\ \\/ /                          \\  \\ \\   \\  \\ \\/ /     \\  \\ \\/ /        \\  \\ \\   \\  \\ \\      #" << endl;
	cout << "#  \\__\\/        \\  \\  /       \\  \\  /                            \\__\\/    \\  \\  /       \\  \\  /          \\__\\/    \\  \\ \\     #" << endl;
	cout << "#                  \\__\\/         \\__\\/                                       \\__\\/         \\__\\/                     \\__\\/     #" << endl;
	cout << "################################################################################################################################" << endl;
	Sleep(100);
	Beep(1100, 200);
	Beep(1000, 200);
	system("CLS");
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
	system("pause");
	Beep(1200, 200);
	Beep(1355, 300);
	system("CLS");
}

void Inventory() {
	cout << "Currenly, you are holding: " << endl;
	for (int i = 0 ; i < inventory.size(); i++)
		cout << "- " << inventory[i] << endl;
}

void intro() {
	cout << "---INCOMING TRANSMISTION---" << endl;
	system("pause");
	system("CLS");
	cout << "---INCOMING TRANSMISTION---" << endl;
	cout << "Hey Cyd- I have a mission for you," << endl;
	cout << "I need you to check out a warning signal coming from one of our transdemantional space station" << endl;
	Sleep(3800);
	cout << "The Staion is a multi-floor residencial office that serves base for our ''Supernatrual Prevaors'' branch" << endl;
	Sleep(3800);
	cout << "We havent heard back from them in...a while..." << endl;
	Sleep(3000);
	cout << "All I can find out is that theres was recent funding for investicatrions in something called -Jacob's Veil" << endl;
	Sleep(3900);
	cout << "I was able to get my hand on some more info about it, Ill send it to you" << endl;
	Sleep(3800);
	cout << "Someone will be by to take you to the site and hook you up with gear" << endl;
	Sleep(3800);
	cout << "report back to ME, if you find anything...This is TOP PRIORITY" << endl;




	Sleep(350);
	inventory.insert(inventory.begin(), "Flashlight");
	cout << endl;
	system("pause");

	system("CLS");

}
