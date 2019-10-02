// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 10/1/19 m

#include <iostream>

using namespace std;

int main()
{
	bool isRunning = true;
	bool userConfirm = false;

	const int RED = 1;
	const int BLUE = 2;
	const int YELLOW = 3;

	const int PURPLE = 3;
	const int ORANGE = 4;
	const int GREEN = 5;

	string userInput = "";

	while (isRunning == true) {
		int firstColor = 0;
		int secondColor = 0;
		string firstColorDisplay = "";
		string secondColorDisplay = "";

		int mixedColorNum = 0;
		string mixedColorDisplay = "";

		cout << "The primary colors are red, blue, and yellow." << endl << "What two primary colors would you like to mix?" << endl;

		// Picking the first color
		userInput = "";
		userConfirm = false;
		
		while (userConfirm == false) {
			cout << "Enter the first primary color in lower-case letters: ";
			cin >> userInput;;

			if (userInput == "red") {
				firstColor = RED;
				firstColorDisplay = "Red";
				userConfirm = true;
			}
			else if (userInput == "blue") {
				firstColor = BLUE;
				firstColorDisplay = "Blue";
				userConfirm = true;
			}
			else if (userInput == "yellow") {
				firstColor = YELLOW;
				firstColorDisplay = "Yellow";
				userConfirm = true;
			}
			else {
				cout << "Please enter a valid selection in lower-case." << endl;
			}
		}

		// Picking the second color
		userInput = "";
		userConfirm = false;

		while (userConfirm == false) {
			cout << "Enter the second primary color in lower-case letters: ";
			cin >> userInput;;

			if (userInput == "red") {
				secondColor = RED;
				secondColorDisplay = "Red";
				userConfirm = true;
			}
			else if (userInput == "blue") {
				secondColor = BLUE;
				secondColorDisplay = "Blue";
				userConfirm = true;
			}
			else if (userInput == "yellow") {
				secondColor = YELLOW;
				secondColorDisplay = "Yellow";
				userConfirm = true;
			}
			else {
				cout << "Please enter a valid selection in lower-case." << endl;
			}
		}

		mixedColorNum = firstColor + secondColor;

		switch (mixedColorNum)
		{
		case PURPLE: 
			mixedColorDisplay = "Purple";
			break;
		case ORANGE:
			mixedColorDisplay = "Orange";
			break;
		case GREEN:
			mixedColorDisplay = "Green";
			break;
		default:
			break;
		}

		if (firstColor == secondColor) {
			cout << "Error: The two colors that you entered are the same." << endl;
		}
		else {
			cout << "The secondary color that is created by mixing " << firstColorDisplay << " and " << secondColorDisplay <<  " is: " << mixedColorDisplay << endl;
		}

		userInput = "";
		userConfirm = false;

		while (userConfirm == false) {
			cout << "Would you like to run the program again? (Y/N): ";
			cin >> userInput;

			if (userInput == "y" || userInput == "Y") {
				userConfirm = true;
			}
			else if (userInput == "n" || userInput == "N") {
				isRunning = false;
				userConfirm = true;
			}
			else {
				cout << "Please enter a valid selection." << endl;
			}
		}
	}
}

