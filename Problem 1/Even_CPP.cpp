#include <iostream>
using namespace std;
int main()
  {
    int num;
    cout << "Enter a number \n";
    cin  >> num;
    // Check if number is Even
    if (num%2==0)
        cout << " The number " << num <<" is Even";
    else
        cout << " The number " << num <<" is Odd";
    return 0;
  }
