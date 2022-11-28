#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <windows.h>
using namespace std;
void checkValidParams(double a, double x) // перевірка відповідності значення Х та А
{
    if (x <= 0)
    {
        if (a < 3)
        {
            throw "Input correct data interval start";
        }
    }
    else
    {
        if (a < 2)
        {
            throw "Input correct interval start";
        }
    }
}
void checkB(double a, double b) // перевірка заданих границь визначення 
{
    if (b < a)
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
double calc(double a, double x) // функція обчислення значення У
{
    double y;
    if (x <= 0) // функція обчислення значення У для х<=0
    {
        y = 0;
        int i = 2;
        while (i <= (a - 1))
        {
            y += x / i;
            i = i + 1;
        }
    }
    else // функція обчислення значення У для х>0
    {
        y = 0;
        int i = 0;
        while (i <= (a - 1))
        {
            double s = 0;
            int j = 0;
            while (j <= i)
            {
                s += i / (j + x);
                j = j + 1;
            }
            y = y + s;
            i = i + 1;
        }
    }
    return y;
}
void printresult(double a, double b, int h, double x, double k) // функція виведення результату
{
    if (k == 1)// перевірка чи потрібно робити записати результати в файл
    {
        ofstream fout("test.txt", ios::app);
        fout << "Result is :" << endl;
        fout.close();
    }
    for (a; a <= b; a += h) // виведення результату в залежності від кількості кроків
    {
        cout << "a = " << a << " " << "b = " << b << " " << "y = " << calc(a, x) << endl;
        if (k == 1)
        {
            ofstream fout("test.txt", ios::app);
            fout << "a = " << a << " " << "b = " << b << " " << "y = " << calc(a, x) << endl;
            fout.close();
        }
    }
}
int main()
{
    double a, b, x, k;
    int h;

    try
    {


        cout << "Please, open the file 'input.txt'." << endl;// НОВА ФУНКЦІЯ. Виводимо прохання до користувача відкрити файл
        Sleep(10000); // заморожуємо програму на 10 сек, тим самим надаємо час відкрити файл

        cout << "Thank you! You can input data" << endl;

        cout << endl << "Enter x n the first line . In the second line the interval from a to b . In the third, indicate the step . " << endl;
        cout << "In the fourth line, enter 1 if you want to write to the file and 0 if you don't" << endl << "Then press CTRL+S to save the file" << endl;




        Sleep(20000);// Надаємо користувачу 20 сек на те , щоб прочитати вимоги та ввести данні
        ifstream in("input.txt");
        in >> x;
        in >> a >> b;
        checkValidParams(a, x);
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
        printresult(a, b, h, x, k);
        return 0;
    }
}
            




