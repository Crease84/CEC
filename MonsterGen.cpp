#include<iostream>
#include<ctime>
using namespace std;

void monster();

int main() {
	srand(time(NULL));
	while (1) {
		monster();
		system("pause");

	}

}



	void monster() {
		int num = rand() % 100 + 1;
		if (num <= 20)
			cout << "EEK A SPOOKY GHOSTTTTTT O_o" << endl << endl;
		else if (num <= 50)
			cout << "OMG THATS A HUGEEE SPIDER, MY MOM IS ALLERGIC!!!" << endl << endl;
		else if (num <= 90)
			cout << "OH GEEZ Rick, It's a lifeform that used to be decesed but now it seems that the cells have reanimated the organs and tissue and they are able to have normal human functions and dont feel pain when they are hurt or when limbs are removed from their abdomend but, for some reason they like to eat the cerebral cortexes of the people that havent been reanimated" << endl << endl;
		else
			cout << "Its a wizard harry!" << endl << "Its a WHATT??" << endl;
	}
