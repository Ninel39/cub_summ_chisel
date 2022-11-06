// cub_summ_chisel.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int main()
{
    /*
    Задание 6: Пользователь вводит целое число А. Программа должна определить, что куб суммы
цифр этого числа равен А*А

    */
     int A, A1, sum = 0;
    cout << "A="; cin >> A;
    if (A < 0) A = -A;
    A1 = A;
    while (A > 0)
    {
        sum += A % 10;
        A /= 10;
    }
    if (sum * sum * sum == A1 * A1) cout << "YES\n";
    else cout << "NO\n";
    system("pause");
    return 0;
}

