#include<iostream>
using namespace std;

int main() {
	char input = 'a';

	cout << "choose 'a' for apples, 'b' for bannana, or 'c' for cookies" << endl;

	while (input != 'q') {

		
		cin >> input;

		switch (input) {
		case 'a':
			cout << "heres your apple" << endl;
			break;

		case 'b':
			cout << "heres your banana" << endl;
			break;

		case 'c':
			cout << "heres your cookie" << endl;
			break;

		case 'q':
			cout << "Enjoy your items" << endl;
			break;

		default:
			cout << "not an option" << endl;
			break;
		}

	}
}
