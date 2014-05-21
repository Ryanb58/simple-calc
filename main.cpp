#include <iostream>
#include <string>
#include "add.h" // this brings in the declaration for add()

using namespace std;
 
void showMenu()
{
	cout << "#####################" << endl;
	cout << "######## MENU #######" << endl;
	cout << "#####################" << endl;
	cout << "Commands:" << endl;
	cout << "add # #" << endl;
	cout << "sub # #" << endl;
	cout << "mul # #" << endl;
	cout << "div # #" << endl;
	cout << "quit" << endl;
	cout << "#####################" << endl;
}
 
int main()
{
    bool keepGoing = true;
    
    while(keepGoing)
    {
		showMenu();
		string mystr;
		cout << "Where would you like to go?";
		getline (cin, mystr);
		cout << mystr << endl;
		if (mystr == "quit")
		{
			keepGoing = false;
		}
	}
    
    cout << "The sum of 3 and 4 is " << add(3, 4) << endl;
    return 0;
}

