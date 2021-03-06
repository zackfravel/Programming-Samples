#include <iostream>
using namespace std;

int smallest(int a[], int left, int right) {
   // parameter a[] is the array to be searched
   // parameter left is the left index
   // parameter right is the right index
   // the function returns the index, where a[index] is the 
   // smallest value in a[left..right]

   if (left > right || left < 0 || right < 0)
	{
        // error cases and return -1
	cout << "error" << endl;
	return -1; 
	}

   
   // declare an integer variable called index and initialize it to left
   // a loop to iterate each index from left to right and if variable i
   // is used in the iteration we have
   int index = left;
   for(int i = index; i <= right; i++)
	{
   // if (a[index] > a[i]) index takes the value of i
	if (a[index] > a[i])
	   {
		index = i;
	   }
	}



   // return the value of index
   return index;
}

// Program to test smallest function
//-----------------------------------------
int main()
{
   int a[] = {9,1,5,7,4,2,6,0,8,3};
   int where;
  
   // test case one
   where = smallest(a, 0, 9);
   cout << "The smallest value in A[0..9] is " << a[where] 
        << " at index " << where << endl;
   for (int i = 0; i<=9; i++)
      cout << "a[" << i << "] = " << a[i] << endl;

   // test case two
   where = smallest(a, 0, 5);
   cout << "The smallest value in A[0..5] is " << a[where] 
        << " at index " << where << endl;
   for (int i = 0; i<=5; i++)
      cout << "a[" << i << "] = " << a[i] << endl;

   // test case three
   where = smallest(a, 2, 7);
   cout << "The smallest value in A[2..7] is " << a[where] 
        << " at index " << where << endl;
   for (int i = 2; i<=7; i++)
      cout << "a[" << i << "] = " << a[i] << endl;
   
   return 0;
}
