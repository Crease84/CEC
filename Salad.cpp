//Caesar Cipher Implementation
   //written by Dr. OOF, 20-20-OLD
   //limitations of this code:
   //1) does not work with spaces
   //2) only works for messages that are less than 100 characters
   //3) will encode non-character symbols in messages
   //4) always codes and decodes message (doesn't give user a choice)

#include<iostream>
#include<string>
using namespace std;
int main() {
	//set up variables----------------------------------------------------
	string message = "hey";
	char coded[100];
	char decoded[100];
	int key;

	//get user inputs----------------------------------------------------
	cout << "Whats the message?" << endl;
	cin >> message;

	cout << "By what key" << endl;
	cin >> key;
	cout << endl << endl;

	//for each slot in the message array, add the key and store it in the corresponding slot in the coded array
	for (int i = 0; i < message.size(); i++) {
		coded[i] = message[i] + key;
	}

	//print out the coded array
	cout << "encoded message:" << endl;
	for (int i = 0; i < message.size(); i++) {
		cout << coded[i];
	}
	cout << endl << endl;

	//decode by subtracting the key from each slot in the coded array and storing it into the corresponding slot in the decoded array
	cout << "decoded message:" << endl;
	for (int i = 0; i < message.size(); i++) {
	decoded[i] = coded[i] - key;
	}

	//print out the decoded array
	for (int i = 0; i < message.size(); i++) {
	cout << decoded[i];
	}
	cout << endl << endl;
}
