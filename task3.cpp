#include <iostream>
using namespace std;
int totaldigit(int number);
main()
{
    int number;
    cout <<"enter number:";
    cin >> number;
    cout <<totaldigit(number);
}
int totaldigit(int number)
{
    int counter = 0;
 while (number > 0)
 {
    number = number /10;
    counter = counter + 1;
 }
 return counter ;
 
}
