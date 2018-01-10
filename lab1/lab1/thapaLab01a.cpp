#include <iostream>
#include <iomanip>
#include<string>

using namespace std;

int main()
{
	const int NUM_ANIMAL = 5;		//Number of Animals
	string name[NUM_ANIMAL];		//Array for the Name
	int age[NUM_ANIMAL];			//Array for age
	int index;						//int for loop count

		cout << "Starting Lab01" << endl;


	//Loop to get the Name and Age
	for (index = 0; index < NUM_ANIMAL; index++)
		{
			cout << "Enter animal " << (index + 1) << " name: ";
			cin >> name[index];
			cout << "Enter animal " << (index + 1) << " age: ";
			cin >> age[index];
		}


	//Displaying my name and Major
		cout << endl << endl << "lab01 by Madan Thapa Computer science" << endl;
		cout << endl << "Animal" << endl;


	//Boundries to display the answer
		cout << fixed << showpoint << setprecision(2);

	//Loop to Display the data
	for (index = 0; index < NUM_ANIMAL; index++)
		{

			cout << setw(8) << (index + 1);
			cout << setw(15) << name[index];
			cout << setw(15) << age[index] << endl;
		}
			cout << endl;
	return 0;

}