// Include statements
#include <iostream>
using namespace std;

// Main function
int main ()
{
  // Input values
  float n1, n2, n3, n4;
	cout << "Enter four numbers:\n";
	cin >> n1 >> n2 >> n3 >> n4;

  // Calculate mean of 4 values
  float mean = ((n1 + n2 + n3 + n4)/4);

  // Calculate variance of 4 values
  float variance = ((n1-mean)*(n1-mean)+
	(n2-mean)*(n2-mean)+(n3-mean)*(n3-mean)+(n4-mean)*(n4-mean))/4;

  // Print the output
  cout << "mean = " << mean << endl;
  cout << "variance = " << variance << endl;
  return 0;
}

