#include <iostream>
using namespace std;
int check(int number, int digit);
main()
{
    int number, digit;
    cout << "enter number:";
    cin >> number;
    cout << "enter digit:";
    cin >> digit;
    cout << check(number, digit);
}
int check(int number, int digit)
{
    int count = 0;
    int remainder= 0;
    while (number != 0)
    {
        
         number = number / 10;
         remainder = number % 10;
        if (remainder == digit)
        {
            count = count + 1;
        }
        
    }
    return count;
}
