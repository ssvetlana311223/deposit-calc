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
     else 
      {
       p = 0;
       cout << "Введите срок вклада: ";
       cin >> x;
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
 if (srok > 0 && srok <=30) dohod = vklad * 0.9;
 if (srok >= 31 && srok <= 120) dohod = vklad * a;
 if (srok >= 121 && srok <= 240) dohod = vklad * b;
 if (srok >= 241 && srok <= 365) dohod = vklad *c;
 cout << "Доход: " << dohod;
 return 0;
}
