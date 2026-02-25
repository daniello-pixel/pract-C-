#include <iostream>

/**
 * Задание 2.4
 * Разработчики: Поликарпов Д.М., Киселев О.В.
 * Дата получения: 25.02.2026
 * Дата сдачи: 26.02.2026
 */

int main() {
    std::cout << "Developers: Polikarpov D.M., Kiselev O.V.\n";
    std::cout << "Data received: 25.02.2026\n";
    std::cout << "Receipt time: 10:30\n";
    std::cout << "Submission data: 26.02.2026\n";
    std::cout << "Submission time: 12:00\n\n";

    std::cout << "Numbers from 1 to 100 that are divisible by 3:\n";

    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0) {
            std::cout << i << " ";
        }
    }

    return 0;
}
