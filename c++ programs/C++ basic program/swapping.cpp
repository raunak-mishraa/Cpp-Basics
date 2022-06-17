// swap the number using temporary variable

#include <iostream>
using namespace std;

int main()
{
  int num1 = 12, num2 = 21, temp;
  temp = num1;
  num1 = num2;
  num2 = temp;
  cout << "after swapping num1 is " << num1 << endl;
  cout << "after swapping num2 is " << num2;
  return 0;
}

// without using temporary variable
#include <iostream>
using namespace std;

int main()
{
  int num1 = 12, num2 = 21, temp;
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;
  cout << "after swapping num1 is " << num1 << endl;
  cout << "after swapping num2 is " << num2;
  return 0;
}