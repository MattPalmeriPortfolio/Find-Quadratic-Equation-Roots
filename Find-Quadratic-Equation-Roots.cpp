#include <iostream>
using namespace std; 

//this program finds quadratic roots!

int main(){
	
	//initialize variables
	long a, b, c;
	char prompt;

	do {
		cout << "This program finds quadratic roots! So exciting!\n" << "Please input values for a, b, and c\n";
		cin >> a >> b >> c;
		double discriminant = ((b * b) - 4 * a * c);
		if (discriminant < 0)
		{
			discriminant *= -1;
			cout << "The roots are " << (-b / (2 * a)) << " + " << ((sqrt(discriminant)) / (2 * a)) << "i and " << (-b / (2 * a)) << " - " << ((sqrt(discriminant)) / (2 * a)) << "i\n";
		}
		else if (discriminant > 0)
		{
			cout << "The roots are " << (-b + sqrt(discriminant)) / (2 * a) << " and " << (-b - sqrt(discriminant)) / (2 * a) << endl;
		}
		else //if discriminant = 0
		{
			cout << "The root is " << -b / (2 * a) << endl;
		}
		cout << "Would you like to try again? Y to continue, N to end\n";
		cin >> prompt;
	} while (prompt == 'Y' || prompt == 'y');
	return 0;
}

