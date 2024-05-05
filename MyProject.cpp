// MyProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    char s;
    do {
        
        int num;
        
        cout << "Введите число: ";
        cin >> num;

        int hour = num / 60;
        int minute = num % 60;

        if (hour >= 24)
            hour -= 24;
        cout << hour << " " << minute;

        cout << "\nПродолжить? y/n: ";
        cin >> s;

        if (s == 'n' || s == 'N')
        {
            exit(0);
        }

        else if (s == 'y' || s == 'Y')
            continue;

    } while (s != 'n' || s != 'N');
    
    


    return 0;
}

