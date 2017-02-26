#include <iostream>
using namespace std;
int getvklad ()
{
 int p = 1, x;
 while (p)
  {
    if (x < 10)
     { 
       p = 1;
       cout << "Минимальная сумма вклада должна быть 10 т.р.";
     }
    else 
     { 
       p = 0;
       cout << "Введите сумму вклада: ";
       cin >> x;
     }
    cout << endl;
   }
 return x;
}
int getsrok ()
{
 int p = 1, x;
 while (p)
  {
    if (x > 365)
     {
      p = 1;
      cout << "Срок вклада должен быть не более 365 дней";
      }
    cout << endl;
   }
 return x;
}
