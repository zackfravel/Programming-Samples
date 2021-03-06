//Include Statements
#include <iostream>
#include <fstream>
using namespace std;

//Requirements class
class Requirements
{
public:
   Requirements(); // default constructor

private:
   string requirementGroup;
   string requirementSubGroup;
   int hours;
   string coursesRequired;

};

Requirements::Requirements()
{
   requirementGroup = "University Core";
   cout << requirementGroup << endl;

   requirementSubGroup = "English";
   cout << requirementSubGroup << endl;

   int reqHours = 6;
   cout << reqHours << endl;

   coursesRequired = "ENGL 1013\nENGL 1023";
   cout << coursesRequired << endl;
}

int getting_requirement(const char filename[], string a[], int&n)
{
   n = 0;
   fstream file;
   int m=0;
   string s;
   file.open(filename);
   if ( file.fail() )
   {
	cout << "failed to open file named: " << filename << endl;
 	return false;
   }

   getline(file,s);

   while (! file.eof() )
   {
 	a[n] = s;
 	n++;

 	if (s.length() == 0 )
	{
 	   m++;
 	}

 	getline(file,s);
   }
   // unless ends with blank line
   m++;
   file.close();
   return m;
}

//Main
int main()
{
   string list[10];
   int number; 
   Requirements test;
   getting_requirement("BSCErequirements.txt", list, number);
   for(int x = 0; x < 450; x++)
	{
	   cout << list[x] << endl;
	}
}
