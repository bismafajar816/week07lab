#include <iostream>
using namespace std;
void table(int number);
main()
{
    int number;
    cout << "enter number:";
    cin >> number;
     table(number);
}
    void table(int number)
    {
        for (int r = 1; r <= 10; r = r + 1)
        {
            cout << number <<"*" << r << "= " << number * r << endl;
        }
    }
