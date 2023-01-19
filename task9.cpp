#include <iostream>
using namespace std;
float calculatePrice(float money, int year);
main()
{
    int year;
    float money, diff;
    cout << "enter the year to go : ";
    cin >> year;
    cout << "enter inherited money:";
    cin >> money;
    float price = calculatePrice(money, year);
    if (price > money)
    {
        diff = price - money;
        cout << "you dont have enough money " << diff << "is needed more.";
    }
    if (price < money)
    {
        diff = money - price;
        cout << "yes you can live carefree " << diff << "money left";
    }
}
float calculatePrice(float money, int year)
{
    int even, odd, age;
    int newage;
    age = year - 1800;
    float emoney = 0;
    float omoney = 0;
    float total1 = 0;
    float total2 = 0;
    float final = 0;
    even = age / 2;
    odd = age - even;
    for (int e = 0; e <= even; e++)
    {
        emoney =   (12000 * even);
        total1 = total1 + emoney  ;
    }
    for (int o = 1; o <= odd; o++)
    {
        newage = 19;
        omoney = omoney + 12000 + (50 * newage);
        newage = odd + 1;

        total2 = total2 + omoney;
    }
    final = total1 + total2  ;
    return final;
}