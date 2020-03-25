// Include statements
#include <iostream>
#include <cstring>
using namespace std;

// Main function
int main()
{
   const int SIZE = 80;
   char greeting[SIZE] = "Dear ";
   char name[SIZE] = "Mom";
   char alphabet[SIZE] = "abcedfghijklmnopqrstuvwxyz";
   char alphabet_upper[SIZE];
   int index;
   int len;

   cout << "The value of c-string variable greeting is: " << greeting << endl;
   cout << "The value of c-string variable name is: " << name << endl;
   cout << "The value of c-string variable alphabet is: " << alphabet << endl;
   
   cout << endl; // add a blank line
   // finding out number of characters in a string
   len = strlen(greeting);
   cout << "len = " << len << endl;

   strcpy(name, greeting);


   
   cout << endl;
   // to have the effect of assignment we have to copy each individual elements
   




   cout << "After assigning greeting to name by strcpy:\n";
   cout << "The value of c-string variable greeting is: " << greeting << endl;
   cout << "The value of c-string variable name is: " << name << endl;

   cout << endl;
   // getting upper case alphabet, using toupper function
   
   index = 0;
   while (alphabet[index] != '\0' ){
      alphabet_upper[index] = toupper(alphabet[index]);
      index = index + 1;
   }
   alphabet_upper[index] = '\0';

   cout << "The value of alphabet_upper is: " << alphabet_upper << endl;
   cout << "The value of alphabet is: " << alphabet << endl;





   cout << endl;
   // c-string comparision
   if ( name == greeting )
      cout << "name and greeting have the same value\n";
   else if ( name < greeting )
      cout << "name has less value\n";
   else
      cout << "greeting has less value\n";






   // (A) the right way to compare c-string   
   if ( strcmp( name, greeting) == 0 ) 
      cout << "name and greeting have the same value\n";
   else if ( strcmp( name, greeting) < 0 )
      cout << "name has less value\n";
   else  // strcmp( name, greeting) > 0 is true
      cout << "greeting has less value\n";







   cout << endl; 
   // c-string comparison after changing the value from Mom to Dad
    strcpy(name, "Dad");
   if ( name == greeting )
      cout << "name and greeting have the same value\n";
   else if ( name < greeting )
      cout << "name has less value\n";
   else
      cout << "greeting has less value\n";








   // (B) the right way to compare c-string
   if ( strcmp( name, greeting) == 0 ) 
      cout << "name and greeting have the same value\n";
   else if ( strcmp( name, greeting) < 0 )
      cout << "name has less value\n";
   else  // strcmp( name, greeting) > 0 is true
      cout << "greeting has less value\n";







   cout << endl;
   // comparing c-string literals
   


   

   return 0;
}

