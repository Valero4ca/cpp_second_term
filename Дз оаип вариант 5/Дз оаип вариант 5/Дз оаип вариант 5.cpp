#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int size = 20;
    double arr[size];

    int n,mas; 
    std::cout << " Введите число вещественных чисел n = ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Значение [" << i << "] = ";
        cin >> arr[i];
    }

    double max = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    std::cout << " Максимальное значение : " << max << std::endl;
    int sum = 0;
    for (int i = max- 1; i > 0; i--)
    {
        if (mas[i] > 0)
        {
            for (int j = 0; j < i; j++)
            {
                sum += mas[j];
            }

            break;
        }
    }

    return 0;
}