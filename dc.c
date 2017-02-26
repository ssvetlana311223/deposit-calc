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
int main ()
{
 double dohod = 0, ;
 int vklad, srok;
 vklad = getvklad();
 srok = getsrok();
 if (vklad > 100)
   {
    a = 1.03;
    b = 1.08;
    c = 1.15;
   }
  else
   {
    a = 1.02;
    b = 1.06;
    c = 1.12;
   }
}
