#include<iostream>
using namespace std;

int main() {
	//variables to hold onto each princess' score:
	int Luz = 0;
	int Amity = 0;
	int Eda = 0;
	int King = 0;
	

	cout << "Welcome to the Owl House quiz!" << endl;

	//question 1
	char choice;
	cout << "What's your favorite color?" << endl;
		cout << "(p)urple" << endl;
		cout << "(r)ed" << endl;
		cout << "(b)lack" << endl;
		cout << "(y)ellow" << endl;
	cin >> choice;
	if (choice == 'p')
		Amity++;
	else if (choice == 'r')
		Luz++;
	else if (choice == 'b')
		Eda++;
	else if (choice == 'y')
		King++; 
	else
		cout << "YOU BETTER STOP!" << endl;

	int choice1;
	//question 2
	cout << "Which best describes your personality?" << endl;
	cout << "(1) Sassy" << endl;
	cout << "(2) Independent" << endl;
	cout << "(3) Kind" << endl;
	cout << "(4) Funny" << endl;
	cin >> choice1;
	if (choice1 == 2)
		Amity++;
	else if (choice1 == 3)
		Luz++;
	else if (choice1 == 1)
		Eda++;
	else if (choice1 == 4)
		King++;
	else
		cout << "Your mom" << endl;


	//question 3
	cout << "Whats your favorite activity?" << endl;
	cout << "(1) Sleeping" << endl;
	cout << "(2) Reading" << endl;
	cout << "(3) Nature walks" << endl;
	cout << "(4) Doing tricks" << endl;
	cin >> choice1;
	if (choice1 == 4)
		Amity++;
	else if (choice1 == 2)
		Luz++;
	else if (choice1 == 3)
		Eda++;
	else if (choice1 == 1)
		King++;
	else
		cout << "Boi, IF YOU DONT-" << endl;


	//question 4
	cout << "Whats your favorite type of coven/magic?" << endl;
	cout << "(A)bomination" << endl;
	cout << "(E)very oNne" << endl;
	cout << "(N)one" << endl;
	cout << "(D)emon" << endl;
	cin >> choice;
	if (choice == 'a')
		Amity++;
	else if (choice == 'e')
		Luz++;
	else if (choice == 'n')
		Eda++;
	else if (choice == 'd')
		King++;
	else
		cout << "BRUHHHHH" << endl;

	//question 5
	cout << "What goal would you pick?" << endl;
	cout << "(1)Be top student" << endl;
	cout << "(2)become a witch" << endl;
	cout << "(3)reclaim kingdom" << endl;
	cout << "(4)get rid of curse" << endl;
	cin >> choice1;
	if (choice1 == 1)
		Amity++;
	else if (choice1 == 2)
		Luz++;
	else if (choice1 == 4)
		Eda++;
	else if (choice == 3)
		King++;
	else
		cout << "oh woww..." << endl;

	//check which princess has the biggest score
	//the symbol "&&" means AND
	if (Luz >= Amity && Luz >= Eda && Luz >= King)
		cout << "New witch In town...You're Luz Noceda" << endl;
	else if (Amity >= Luz && Amity >= Eda && Amity >= King)
		cout << "Teen age Abomination... You are Amity Blight" << endl;
	else if (Eda >= Luz && Eda >= Amity && Eda >= King)
		cout << "Most powerful witch on the boiling Isles...Youre Eda " << endl;
	else if (King >= Luz && King >= Amity && King >= Eda)
		cout << "King of demons...You're King";

}
