
#include <iostream>
using namespace std;
int main()
{
   // Get number from user
   int input = 0;
   float accumulator = 0;
   cout << "Enter the number of values you wish to average:\n";
   cin >> input;

   // Compute and print the mean of the user input

   int number = 0;
   float x;
   while (number < input)
   {
      cout << "Please type a numerical value now: ";
      cin >> x;
      accumulator = accumulator + x;
      number = number + 1;
   }
   accumulator = accumulator / input;
   cout << "The mean of the user input values is: " << accumulator << endl;
   return 0;
}
