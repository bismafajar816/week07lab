#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int lcm(int number1,int number2 , int divisor);

main()
{
    int number1, number2;
    cout << "enter number:";
    cin >> number1;
    cout << "enter number:";
    cin >> number2;
    int divisor = calculateGCD(number1, number2);
    int common = lcm(number1, number2 ,divisor);
    cout <<"LCM is: "<< common;
}
int calculateGCD(int number1, int number2)
{
    int gcd = 0;
    for (int i = 1; i <= number1 && i <= number2; ++i)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            gcd = i;
        }
    }
     return gcd;
}
int lcm(int number1,int number2 , int divisor)
{
    int least = (number1 * number2 ) / divisor;
    return least;
}