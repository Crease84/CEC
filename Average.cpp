#include<iostream>
using namespace std;
int main() {
	int ave = 0;
	cout << "how many numbers would you like to average?" << endl;
	cin >> ave;
	
	double numb = 0;
	int input;
	
	cout << "enter numbers to average\n";
	for (int i = ave; i > 0; i--) {
		cin >> input;
		numb = numb + input;
	}
	cout << "This is your average:\n";
	numb = numb / ave;
	cout << numb;
}
