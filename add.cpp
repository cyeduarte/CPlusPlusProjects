
#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
	cout << setw(6) << fixed 
	    << setprecision(1) << 3.0 << endl;
	cout << setw(6) << fixed 
		<< setprecision(1) << 5.0 << endl
	    << "------\n"
	    << setw(6) << 3.0 * 5.0 << endl;
	
	cout << ""; 

	cout << fixed << setprecision(2)
		<< setw(6) << 7.1 << endl
	    << setw(6) << " *" << 8.1 << endl 
	    << setw(6) << " +" << 2.2 << endl
	    << "------" << endl 
	    << (7.1 * 8.1) - 2.2 << endl; 

	cout << "";

	cout <<setw(5) << fixed
		 << setprecision(1) << 3.2 << endl 
	     << setw(5) << fixed << endl
		 << setprecision(1) << 6.1 << endl
	     << setw(5) << fixed << endl
		 << 5 << endl 
	     << "------" << endl 
	     << 3.2 + (6.1 * 5) << endl;
	
	
	system("PAUSE");
	return 0;
}
