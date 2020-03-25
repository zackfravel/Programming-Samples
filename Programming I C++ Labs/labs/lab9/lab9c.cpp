#include <iostream>
#include <string>
#include <fstream>
using namespace std;

char rot13(char ch)
{
   if ((ch >= 'a') && (ch <= 'z'))
      return char((13 + ch - 'a') % 26 + 'a');
   else if ((ch >= 'A') && (ch <= 'Z'))
      return char((13 + ch - 'A') % 26 + 'A');
   else
      return ch;
}

string rot13(string str)
{
   for (unsigned int i = 0; i < str.length(); i++)
      str[i] = rot13(str[i]);
   return str;
}

int main()
{
   fstream infile;
   fstream outfile;
   infile.open("message.in");
   outfile.open("message.out");
   string word;
   int count = 1;
   char line[100];
   while (infile.getline(line, 100))
   	cout << count++ << ":" << rot13(line) << endl;
   return 0;
}
