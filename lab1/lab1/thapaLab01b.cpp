#include <iostream>
#include <iomanip>
#include<vector>
#include<string>

using namespace std;

int main()
{
	const int NUM_ANIMAL = 5;
	vector<string>name(NUM_ANIMAL);
	vector<int>age(NUM_ANIMAL);
	int index;

	cout << "Starting Lab01" << endl;

	for (index = 0; index < NUM_ANIMAL; index++)
	{

		cout << "Enter animal " << (index + 1) << " name: ";
		cin >> name[index];
		name[index].push_back(index);
		cout << "Enter animal " << (index + 1) << " age: ";
		cin >> age[index];
		age.push_back(index);
	}



	cout << endl << endl << "lab01 by Madan Thapa Computer science" << endl;
	cout << endl << "Animal" << endl;

	cout << fixed << showpoint << setprecision(2);
	for (index = 0; index < NUM_ANIMAL; index++)
	{

		cout << setw(8) << (index + 1);
		cout << setw(15) << name[index];
		cout << setw(15) << age[index] << endl;
	}
	return 0;

}