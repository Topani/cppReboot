#include <iostream>
using namespace std;



int main()
{

	//Newline tests
	cout << "Newline with \\n.\n";
	cout << "Newline with endl." << endl << endl;;

	//Carriage return test
	cout << "This is a long sentence with a\rcarriage return." << endl << endl;

	//Backspace test
	cout << "This is a long\bsentence\bwith\bsome back\bspaces." << endl;

	//Tab Test
	cout << "This is a\tlong sentence\twith\tsome regular\ttabs." << endl;

	//Vertical tab test
	cout << "This is a\vlong sentence\vwith\vsome vertical\vtabs." << endl;

	return 0;
}
