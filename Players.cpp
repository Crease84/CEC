#include<iostream>
using namespace std;
int main() {

	cout << "How many players perfer Playstation?" << endl;
	int ps;
	cin >> ps;

	cout << "How many players perfer Nintendo?" << endl;
	int n;
	cin >> n;

	cout << "How many players perfer xBox?" << endl;
	int xb;
	cin >> xb;

	cout << "How many players perfer PC?" << endl;
	int pc;
	cin >> pc;

	cout << "PlayStation:[";
	for (int i = 0; i < ps; i++)
		cout << "=";
	cout << "]" << endl;

	cout << "Nintendo:[";
	for (int i = 0; i < n; i++)
		cout << "=";
	cout << "]" << endl;

	cout << "xBox:[";
	for (int i = 0; i < xb; i++)
		cout << "=";
	cout << "]" << endl;

	cout << "PC:[";
	for (int i = 0; i < pc; i++)
		cout << "=";
	cout << "]" << endl;
}
