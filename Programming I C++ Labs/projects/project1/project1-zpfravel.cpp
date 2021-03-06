#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Initialize grade variables
	char grade1 = 0;
	char grade2 = 0;
	char grade3 = 0;
	char grade4 = 0;
	//Initialize hours variables
	float hours1 = 0;
	float hours2 = 0;
	float hours3 = 0;
	float hours4 = 0;
	float totalHours = 0;
	//Initialize weight variables
	float weight1 = 0;
	float weight2 = 0;
	float weight3 = 0;
	float weight4 = 0;
	float totalWeight = 0;
	//Initialize Final GPA variable
	float GPA = 0;
	//User enters first class information
	cout << "Enter first class grade:\n";
	cin >> grade1;
	cout << "Enter credit hours:\n";
	cin >> hours1;
	//Program assigns the correct weighted grade point value
	if (grade1 == 'A')
		weight1 = 4*hours1;
	else if (grade1 == 'B')
		weight1 = 3*hours1;
	else if (grade1 == 'C')
		weight1 = 2*hours1;
	else if (grade1 == 'D')
		weight1 = hours1;
	else 
		weight1 = 0;
	//User enters second class information
	cout << "Enter second class grade:\n";
	cin >> grade2;
	cout << "Enter credit hours:\n";
	cin >> hours2;
	//Grade point check and assignment
	if (grade2 == 'A')
		weight2 = 4*hours2;
	else if (grade2 == 'B')
		weight2 = 3*hours2;
	else if (grade2 == 'C')
		weight2 = 2*hours2;
	else if (grade2 == 'D')
		weight2 = hours2;
	else 
		weight2 = 0;
	//User enters third class information
	cout << "Enter third class grade:\n";
	cin >> grade3;
	cout << "Enter credit hours:\n";
	cin >> hours3;
	//Grade point check and assignment
	if (grade3 == 'A')
		weight3 = 4*hours3;
	else if (grade3 == 'B')
		weight3 = 3*hours3;
	else if (grade3 == 'C')
		weight3 = 2*hours3;
	else if (grade3 == 'D')
		weight3 = hours3;
	else 
		weight3 = 0;
	//User enters fourth class information
	cout << "Enter fourth class grade:\n";
	cin >> grade4;
	cout << "Enter credit hours:\n";
	cin >> hours4;
	//Grade point check and assignment
	if (grade4 == 'A')
		weight4 = 4*hours4;
	else if (grade4 == 'B')
		weight4 = 3*hours4;
	else if (grade4 == 'C')
		weight4 = 2*hours4;
	else if (grade4 == 'D')
		weight4 = hours4;
	else 
		weight4 = 0;
	//Both the total grade points and the hours are added into their own respective totals
	totalWeight = weight1+weight2+weight3+weight4;
	totalHours = hours1+hours2+hours3+hours4;
	//Show the user the total number of weighted grade points by credit hour
	cout << "Your total number of weighted grade points is: " << totalWeight << "\n";
	GPA = totalWeight / totalHours;
	//Give the user their calculated GPA
	cout << "Your final GPA is: " << GPA << "\n";

	return 0;
}
