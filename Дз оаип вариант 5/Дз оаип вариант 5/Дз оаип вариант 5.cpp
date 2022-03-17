#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int size = 20;
    double arr[size];

    int n; 
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

    return 0;
}