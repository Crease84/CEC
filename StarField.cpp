#include<iostream>
#include<Windows.h>
using namespace std;
int main() {

	for (int I = 5; I <= 25; I+=5)
		cout << I << " ";
	cout << endl;

	for (int i = 100; i >= 88; i-=2)
		cout << i << " ";
	cout << endl;

	for (int i = 12; i <= 36; i += 3)
		cout << i << " ";
	cout << endl;

	for (int i = 300; i <= 1000; i += 100)
		Beep(i, 200);

	for (int i = 0; i <= 10; i++) {
		cout << endl;
		for (int i = 0; i < 6; i++)
					cout << "*"; 
	}

	cout << endl;

	for (int i = 0; i <= 5000; i++) {
		cout << "*";
		int numb = rand() % 18 + 3;
		for (int i = 0; i < numb; i++)
			cout << " ";
	}
	
}
