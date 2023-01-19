#include <iostream>
using namespace std;
int sum(int number);
main()
{
    int number;
    cout << "enter number:";
    cin >> number;
    cout << sum(number);
}
int sum(int number)
{
    int remainder = 0;
    int count = 0;
    int number1 = 0;
    while (number != 0)
    {

        remainder = number % 10;
        count = remainder + remainder;
        return count;
    }
}
