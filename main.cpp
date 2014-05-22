#include <iostream>
#include <string>
#include "compute.h" // this brings in the declaration for add()

using namespace std;
 
void showMenu()
{
	cout << "#####################" << endl;
	cout << "######## MENU #######" << endl;
	cout << "#####################" << endl;
	cout << "Commands:" << endl;
	cout << "add" << endl;
	cout << "sub" << endl;
	cout << "mul" << endl;
	cout << "div" << endl;
	cout << "quit" << endl;
	cout << "#####################" << endl;
}
 
int main()
{
	//Initialize all my variables.
    bool keepGoing = true;
    
    int x;
    int y;
    
    string mystr;
    
    //Loop to keep client in menu untill needing to exit program.
    while(keepGoing)
    {
		//Show the text menu.
		showMenu();
		
		//Get users input...
		cout << "Where would you like to go?";
		cin >> mystr;
		
		//If user entered "quit" then do not bother asking them the rest of the questions...
		if(mystr == "quit")
		{
			//User quits the program... stop loop...
			keepGoing = false;
			
			//Returns error code.
			return 0;
		}
		
		cout << "First int:";
		cin >> x;
		cout << "Second int:";
		cin >> y;
		
		//Has to use if/else statements instead of switch, because C++ switch statements do not verify equality of strings.
		if( mystr == "add")
		{
			cout << add(x,y) << endl;
		}
		else if(mystr == "sub")
		{
			cout << sub(x,y) << endl;
		}
		else if(mystr == "mul")
		{
			cout << multi(x,y) << endl;
		}
		else if(mystr == "div")
		{
			cout << div(x,y) << endl;
		}
		else
		{	
			//Invalid inputs.
			cout << "Error, invalid input." << endl;
		}
	}
    return 0;
}

