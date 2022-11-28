#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <windows.h>
using namespace std;
void checkValidParams(double n, double a) // перевірка відповідності значення Х1 та N
{
    if (a <= 0)
    {
        if (n < 3)
        {
            throw "Input correct n>3";
        }
    }
    else
    {
        if (n < 2)
        {
            throw "Input correct n>2";
        }
    }
}
void checkB(double x1, double x2) // перевірка заданих границь визначення 
{
    if (x2 < x1)
    {
        throw "Input correct  interval end ";
    }
}
void checkValid(double h) // перевірка кроку вмзначення
{
    if (h <= 0)
    {
        throw "Input correct step";
    }
}
void checkValidParams(double k) // перевірка правильності введеня К
{
    if (k != 0 && k != 1)
    {
        throw "Input correct data 1 or 0 to write to file or no";
    }
}
double calc(double a, double n) // функція обчислення значення У
{
    double y;
    if (a <= 0) // функція обчислення значення У для х<=0
    {
        y = 0;
        int i = 2;
        while (i <= (n - 1))
        {
            y += a / i;
            i = i + 1;
        }
    }
    else // функція обчислення значення У для х>0
    {
        y = 0;
        int i = 0;
        while (i <= (n - 1))
        {
            double s = 0;
            int j = 0;
            while (j <= i)
            {
                s += i / (j + a);
                j = j + 1;
            }
            y = y + s;
            i = i + 1;
        }
    }
    return y;
}
void printresult(double a, double b, int h, double n, double k) // функція виведення результату
{
    int krok = 1;
    if (k == 1)// перевірка чи потрібно робити записати результати в файл
    {
        ofstream fout("test.txt", ios::app);
        fout << "\nResult is :" << endl;
        fout.close();
    }
    for (a; a <= b; a += h) // виведення результату в залежності від кількості кроків
    {
        cout << "\nStep " << krok << "\n" << "x = " << a << " " << "y = " << calc(a, n) << endl;
        if (k == 1)
        {
            ofstream fout("test.txt", ios::app);
            fout << "\nStep " << krok << "\n" << "x = " << a << " " << "y = " << calc(a, n) << endl;
            fout.close();
        }
        krok += 1;
    }
}
int main()
{
    double a, b, n, k;
    int h;

    try
    {


        cout << "Please, open the file 'input.txt'." << endl;// НОВА ФУНКЦІЯ. Виводимо прохання до користувача відкрити файл
        Sleep(10000); // заморожуємо програму на 10 сек, тим самим надаємо час відкрити файл

        cout << "Thank you! You can input data" << endl;

        cout << endl << "Enter n in the first line . In the second line the interval from a to b . In the third, indicate the step . " << endl;
        cout << "In the fourth line, enter 1 if you want to write to the file and 0 if you don't" << endl << "Then press CTRL+S to save the file" << endl;




        Sleep(20000);// Надаємо користувачу 20 сек на те , щоб прочитати вимоги та ввести данні
        ifstream in("input.txt");
        in >> n;
        in >> a >> b;
        checkValidParams(n, a);
        checkB(a, b);
        in >> h;
        checkValid(h);
        in >> k;
        in.close();
        checkValidParams(k);
        ofstream fout("input.txt", ios::trunc); // очищуємо файл з вхідними даними
        fout.close();
    }
    catch (const char* ex)
    {
        cout << ex << endl;
        return -1;
    }
    catch (...)
    {
        cout << "Unknown error " << endl;
        return -2;
    }
    if (true)
    {
        printresult(a, b, h, n, k);
        return 0;
    }
}

            




