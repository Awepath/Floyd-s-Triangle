// Floyd’s Triangle - Furkan GÜLEÇ
//

#include "stdafx.h"
#include <iostream>
#include <string>
//Floyd’s Triangle
using namespace std;

int main()
{
	int limit;
	int counter = 1;
	string decision;
	

	
	floid:
	
	while (1)
	{
		cout << "Give me a row limit dude!" << endl << endl;
		cin >> limit;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input, try again!" << endl<<endl;
		}
		else
		{
			break;
		}
	}
	


	for (int a=1;a<=limit;a++)
	{
		for (int i = 0; i < a; i++)
		{
			cout << counter << "   ";
			counter = counter + 1;
			
		}
		cout << endl;
	}
	cout << endl<<endl;
	

	while (1)
	{
		cout << "Do you want to continue? (Y/N)" << endl << endl;;
		cin >> decision;
		if (decision == "Y" || decision == "y")
		{
			counter = 1;
			goto floid;
		}
		else if (decision == "N" || decision == "n")
		{
			return 0;
		}
		
	}
	

	
	
}

