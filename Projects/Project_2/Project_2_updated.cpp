#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "This program will display all prime numbers between 1-20." << endl;
    cout << "Please enter a number between 1-20: ";
    cin >> num;
    while (num<1||num>20)
    {
        cout << "That is not a number between 1-20. " << endl;
        cout << "Please enter a number between 1-20: ";
        cin >> num;
    }
    cout << "The prime numbers are: " << endl;
    bool prime = true;
    for (int i=3; i <= num; i++)
    {
      for(int j=2; j<=(i-1);j++)
      {
        if(i%j ==0)
        {
          prime =false;
          break;
        }
        else
        {
          prime = true;
        }
      }
      if (prime == true)
      {
        cout << i << " ";
      }
    }
    return 0;
}
