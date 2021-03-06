//Include Statements
#include <iostream>
using namespace std;

int main()
{
        //Initialize Variables
	int classes = 0;
	int count = 0;
	string className[10];
	string courseNumber[10];
	string classTerm[10];
	char grade[10];
	char menuChoice;
	int hours[10];
	float weightedHours;
	float totalHours = 0;
	float GPA = 0;

	//Ask the User for the number of classes
	cout << "Enter how many classes you're taking/have taken: ";
	cin >> classes;
	cout << "\n";

	//Allows the user to input any number of classes
	while(count < classes)
	{

		//input class name
		cout << "Class name: " << endl;
		cin.ignore();
		getline(cin, className[count]);
		cout << "\n";

		//input/validate term of enrollment
		cout << "Term of enrollment (e.g. \"Fall 2015\"): " << endl;
		getline(cin, classTerm[count]);
		cout << "\n";

		//input course number
		cout << "Course number: " << endl;
		cin >> courseNumber[count];
		cout << "\n";

		//input hours and checks validity
		while ((hours[count] > 5)||(hours[count] < 1))
		{
			cout << "Hours (1-5): " << endl;
			cin >> hours[count];
			cout << "\n";
		}

		//Checks whether or not the grade is valid
		while ((grade[count] != 'A')&&(grade[count] != 'B')&&(grade[count] != 'C')&&(grade[count] != 'D')&&(grade[count] != 'F')&& 			(grade[count] != 'W')&&(grade[count] != 'I'))
		{
			//input grade
			cout << "Grade: " << endl;
			cin >> grade[count];
			cout << "\n";
		}

		//Add one to the count variable to continue the loop
		count ++;

	}

	//Display Menu
	cout << "Welcome to the GPA and Course storage program menu." << endl;
	cout << "Now that you've entered your class information, please enter the character next to the choice you wish to pick.\n" << 	endl;
	
	//Checks whether or not the user wants to exit the program (Displays menu every time until)
	while (!(menuChoice == 'Q')&&!(menuChoice == 'q'))
	{
		cout << "A. Compute the GPA for all courses" << endl;
		cout << "B. List all courses" << endl;
		cout << "C. Compute the total credit hours of courses with grade D" << endl;
		cout << "D. Compute the GPA for a particular semester" << endl;
		cout << "E. Add another course to the course list" << endl;
		cout << "Q. Quit the program" << endl;
		cin >> menuChoice;

		//Performs the correct task based on the menu choice
		if((menuChoice == 'A') || (menuChoice == 'a'))
		{
			//Reinitialize variables to accurately calculate multiple times
			weightedHours = 0;
			totalHours = 0;

			//Runs through the grade array to determine weight
			for(int c=0; c < classes; c++)
			{
				//Determine correct weight
				if (grade[c] == 'A')
				{
					weightedHours = weightedHours + 4*hours[c];
					totalHours = totalHours + hours[c];
				}
				else if (grade[c] == 'B')
				{
					weightedHours = weightedHours + 3*hours[c];
					totalHours = totalHours + hours[c];
				}
				else if (grade[c] == 'C')
				{
					weightedHours = weightedHours + 2*hours[c];
					totalHours = totalHours + hours[c];
				}
				else if (grade[c] == 'D')
				{
					weightedHours = weightedHours + hours[c];
					totalHours = totalHours + hours[c];
				}
				else if (grade[c] == 'F')
				{
					weightedHours = 0;
					totalHours = totalHours + hours[c];
				}
				else
				{
					weightedHours = 0;
					totalHours = totalHours;
				}
			}

			//Calculate total GPA
			GPA = weightedHours/totalHours;
			cout << "Your GPA is: " << GPA << endl;
			cout << "\n" << endl;

		}else if((menuChoice == 'B') || (menuChoice == 'b'))
		{
			//Displays the list of courses using a for loop and the courseName array
			cout << "\n" << endl;
			cout << "Here are your courses: " << endl;
			for(int c=0; c < classes; c++)
			{
				cout << className[c] << endl;	
			}
			cout << "\n" << endl;

		}else if((menuChoice == 'C') || (menuChoice == 'c'))
		{
			//reinitialize totalHours
			totalHours = 0;
			for(int c = 0; c < classes; c++)
			{
				if(grade[c] == 'D')
				{
					totalHours = totalHours + hours[c];
				}
			}

			cout << "\n" << endl;
			cout << "Total hours (grade D): " << totalHours << endl;
			cout << "\n" << endl;

		}else if((menuChoice == 'D') || (menuChoice == 'd'))
		{
			//reinitialize variables
			totalHours = 0;
			weightedHours = 0;
			string termChoice;

			//Specify term
			cout << "What term would you like your GPA calculated from?" << endl;
			cin.ignore();
			getline(cin, termChoice);
			
			//Matches the user's term with the known list
			for(int c = 0; c < classes; c++)
			{
				if(classTerm[c] == termChoice)
				{
					//Determine correct weight for calculation
					if (grade[c] == 'A')
					{
						weightedHours = weightedHours + 4*hours[c];
						totalHours = totalHours + hours[c];
					}
					else if (grade[c] == 'B')
					{
						weightedHours = weightedHours + 3*hours[c];
						totalHours = totalHours + hours[c];
					}
					else if (grade[c] == 'C')
					{
						weightedHours = weightedHours + 2*hours[c];
						totalHours = totalHours + hours[c];
					}
					else if (grade[c] == 'D')
					{
						weightedHours = weightedHours + hours[c];
						totalHours = totalHours + hours[c];
					}
					else if (grade[c] == 'F')
					{
						weightedHours = 0;
						totalHours = totalHours + hours[c];
					}else{
						weightedHours = 0;
						totalHours = totalHours;
					}
				}else{
					//Nothing
				}
			}

			//Calculate term GPA
			GPA = weightedHours/totalHours;
			cout << "Your GPA for " << termChoice << " is: " << GPA << endl;
			cout << "\n" << endl;
			
		}else if((menuChoice == 'E') || (menuChoice == 'e'))
		{
			if(classes < 10)
			{
				//input class name
				cout << "Class name: " << endl;
				cin.ignore();
				getline(cin, className[classes]);
				cout << "\n";

				//input/validate term of enrollment
				cout << "Term of enrollment: " << endl;
				cin.ignore();
				getline(cin, classTerm[classes]);
				cout << "\n";

				//input course number
				cout << "Course number: " << endl;
				cin >> courseNumber[classes];
				cout << "\n";

				//input hours and checks validity
				while ((hours[classes] > 5)||(hours[classes] < 1))
				{
					cout << "Hours (1-5): " << endl;
					cin >> hours[classes];
					cout << "\n";
				}

				//Checks whether or not the grade is valid
				while ((grade[classes] != 'A')&&(grade[classes] != 'B')&&(grade[classes] != 'C')&&(grade[classes] != 'D')&&
				(grade[classes] != 'F')&& (grade[classes] != 'W')&&(grade[classes] != 'I'))
				{
					//input grade
					cout << "Grade: " << endl;
					cin >> grade[classes];
					cout << "\n";
				}
			}
			else
			{
				cout << "Error: not enough memory in storage location" << endl;
			}

			//increment classes so the values are stored/read correctly
			classes ++; 

		}
	}
	cout << "\n" << endl;
	return 0;
}
