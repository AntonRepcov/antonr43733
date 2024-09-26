#include <iostream>
using namespace std;

int main()
{
   setlocale(0, "");

   //1 zad

   cout << "Задание 1";
   cout << "\n"<<"\n";

   cout <<"Размер int"<<" " << sizeof(int) << " " << "байт" << "\n";
   cout << "Размер short int" << " " << sizeof(short int) << " " << "байт" << "\n";
   cout << "Размер long int" << " " << sizeof(long int) << " " << "байт" << "\n";
   cout << "Размер float" << " " << sizeof(float) << " " << "байт" << "\n";
   cout << "Размер double" << " " << sizeof(double) << " " << "байт" << "\n";
   cout << "Размер long double" << " " << sizeof(long double) << " " << "байт" << "\n";
   cout << "Размер char" << " " << sizeof(char) << " " << "байт" << "\n";
   cout<< "Размер bool" << " " << sizeof(bool) << " " << "байт" << "\n";

   cout << "\n" << "\n" << "\n";

   //2 zad
   
   cout << "Задание 2";
   cout << "\n" << "\n";
   int a;
   unsigned int mask = 1 << (sizeof(int) * 8 - 1);

   cout << "Введите int a: ";
   cin >> a;
   cout << "Представление в памяти int в двоичке : ";
   for (int i = 1; i <= sizeof(int) * 8; i++, mask >>= 1) {
       if (mask & a) {
           cout << "1";
       }
       else {
           cout << "0";
       }
       if (i == 1 || i % 8 == 0) {
           cout << " ";
       }
   }
    mask = 1 << (sizeof(int) * 8 - 1);
    cout << "\n";
    cout << "Представление в памяти int в двоичке(идз): ";
   for (int i = 1; i <= sizeof(int) * 8; i++, mask >>= 1) {
       if (a < 0)
       {
           if (i % 2 == 1)
           {
               if (a & mask)
                   cout << "1";
               else
                   cout << "0";
           }
           else
               cout << '1';

       }
       else
           if (i % 2 == 0)
           {
               if (a & mask)
                   cout << "1";

               else
                   cout << "0";
           }
           else
               cout << '0';
       if (i == 1 || i % 8 == 0)
           cout << " ";
   }

   
   cout << "\n";
   cout << "\n" << "\n" << "\n";
    
    //3 zad
   cout << "Задание 3";
   cout << "\n" << "\n";

   union {
       int aI;
       float bF;
   };
   cout << "Введите число типа float: ";
   cin >> bF;

   mask = 1 << (sizeof(float) * 8 - 1);
   cout << "\n";
   cout << "Представление в памяти float в двоичке: ";
   for (int i = 1; i <= sizeof(float) * 8; ++i, mask >>= 1) {
       if (aI & mask) {
           cout << '1';
       }

       else {
           cout << '0';
       }

       if (i == 1 || i == 9) {
           cout << " " ;
       }
   }
   mask = 1 << (sizeof(int) * 8 - 1);
   cout << "\n";
   cout << "Представление в памяти float в двоичке(идз): ";
   for (int i = 1; i <= sizeof(int) * 8; i++, mask >>= 1) {
       if (bF < 0)
       {
           if (i % 2 == 1)
           {
               if (aI & mask)
                   cout << "1";
               else
                   cout << "0";
           }
           else
               cout << '1';

       }
       else
           if (i % 2 == 0)
           {
               if (aI & mask)
                   cout << "1";

               else
                   cout << "0";
           }
           else
               cout << '0';
       if (i == 1 || i == 9)
           cout << " ";
   }


   cout << "\n" << "\n";
   //4 zad
   union
   {
       double cD;
       unsigned int mas[2];
   };
   cout << "Введите число типа double: ";
   cin >> cD;
   mask = 1 << (sizeof(int) * 8 - 1);
   cout << "Представление в памяти double в двоичке: ";
   for (int n = 1; n >= 0; --n)//первая и 2 части маски, дописывается 2 часть маски
   {
       for (int i = 1; i <= sizeof(int) * 8; i++, mask >>= 1)
       {
           if (mas[n] & mask)
               cout << '1';
           else
               cout << '0';
       }
       mask = 1 << (sizeof(int) * 8 - 1);
   }

   mask = 1 << (sizeof(int) * 8 - 1);
   cout << "\n";
   cout << "Представление в памяти double в двоичке(идз): ";
   for (int n = 1; n >= 0; --n)
   {
       for (int i = 1; i <= sizeof(int) * 8; i++, mask >>= 1) {
           if (cD < 0)
           {
               if (i % 2 == 1)
               {
                   if (mas[n] & mask)
                       cout << "1";
                   else
                       cout << "0";
               }
               else
                   cout << '1';

           }
           else
               if (i % 2 == 0)
               {
                   if (mas[n] & mask)
                       cout << "1";

                   else
                       cout << "0";
               }
               else
                   cout << '0';
       }
       mask = 1 << (sizeof(int) * 8 - 1);
   }
   cout << '\n';
   return 0;
}