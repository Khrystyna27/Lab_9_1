// Lab_9_1.cpp
// Юнко Христина
// Лабораторна робота № 9.1.
// Простори імен
// Варіант 30
// Головний файл проекту – функція main.
// Обчислення значень функції Arth x = sum( x^(2n+1)/(2n+1) ), |x| < 1
// за допомогою ряду Тейлора; результати виводяться у вигляді таблиці.
 
#include <iostream>
#include <math.h>
#include <iomanip>
 
#include "dod.h"
#include "sum.h"
#include "var.h"
 
using namespace std;
 
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
 
int main()
{
   cout << "x_p = "; cin >> x_p;
   cout << "x_k = "; cin >> x_k;
   cout << "dx  = "; cin >> dx;
   cout << "e   = "; cin >> e;
   cout << endl;
 
   // заголовок та шапка таблиці
   cout << "Table of values of the function Arth(x)" << endl;
   cout << "+--------+--------------+--------------+------+" << endl;
   cout << "|" << setw(8) << "x"
        << "|" << setw(14) << "Arth(x)"
        << "|" << setw(14) << "S"
        << "|" << setw(6) << "n" << "|" << endl;
   cout << "+--------+--------------+--------------+------+" << endl;
 
   x = x_p;
   while ( x <= x_k + 1e-9 ){        // 1e-9 – похибка накопичення x += dx
       sum();                          // виклик процедури обчислення суми
 
       cout << "|" << setw(8)  << fixed << setprecision(3) << x
            << "|" << setw(14) << setprecision(8) << atanh(x)
            << "|" << setw(14) << s
            << "|" << setw(6)  << n << "|" << endl;     // форматний вивід
 
       x += dx;
   }
   cout << "+--------+--------------+--------------+------+" << endl;
 
   cin.get();
   return 0;
}
