
#include <iostream>
#include <queue>

sing namespace std;

int main() {

    setlocale(LC_ALL, "RUS");

    std::queue <int> q;  // создали очередь q

std:: cout << "Пользователь, пожалуйста введите 7 чисел: " << std::endl;

    for (int h = 0; h < 7; h++) {
        int a;

        std::cin >> a;

        q.push(a);  // добавляем в очередь элементы
    }

    std::cout <<std::endl;
    std::cout << "Самый первый элемент в очереди: " << q.front() << std:: endl;  // выводим первый
                                                                     // элемент очереди
    q.pop();  // удаляем элемент из очереди

    std::cout << "Новый первый элемент (после удаления): " << q.front() << std::endl;

    if (!q.empty()) std::cout << "Очередь не пуста!";  // проверяем пуста ли очередь (нет)

    system("pause");
    return 0;
}

