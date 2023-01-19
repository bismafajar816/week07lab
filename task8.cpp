#include <iostream>
using namespace std;
float calculate(int age, int price, int washing);
main()
{
   int age, price, washing;
   float money;
   cout << "enter your age:";
   cin >> age;
   cout << "enter price of each toy: ";
   cin >> price;
   cout << "enter washing machine price:";
   cin >> washing;
   money = calculate(age, price, washing);
   cout << money;
   if (money > washing)
   {
      int diff = money - washing;
      cout << "you have enough money! " << diff << "left";
   }
   if (money < washing)
   {
      int diff = washing - money;
      cout << "you don't have enough money! " << diff << "more required";
   }
}
float calculate(int age, int price, int washing)
{
   int even, odd;
   int final = 0;
   int final1 = 0;
   int evenmoney = 0;
   float total = 0;
   int oddmoney = 0;
   even = age / 2;
   odd = age - even;

   for (int e = 1; e <= even; e++)
   {
      evenmoney = evenmoney + 10;
      final = final + evenmoney;
   }
   for (int o = 1; o <= odd; o++)
   {
      oddmoney = odd * price;
   }

   total = final - even;
   final1 = oddmoney + total;
   return final1;
}
