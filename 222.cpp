#include <iostream>
#include <string>

/**
 * Задание 1.3
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

    int n;
    std::cout << "how match numbers? ";
    std::cin >> n;

    std::string nums[100];
    int lengths[100];

    for(int i = 0; i < n; i++) {
        std::cout << "number " << i+1 << ": ";
        std::cin >> nums[i];
        lengths[i] = nums[i].length();
    }

    double avg = 0;
    for(int i = 0; i < n; i++) {
        avg += lengths[i];
    }
    avg = avg / n;

    std::cout << "\naverage length: " << avg << std::endl;

    std::cout << "\nnumbers below average:\n";
    for(int i = 0; i < n; i++) {
        if(lengths[i] < avg) {
            std::cout << nums[i] << " (lengths " << lengths[i] << ")\n";
        }
    }

    std::cout << "\nnumbers longer than average:\n";
    for(int i = 0; i < n; i++) {
        if(lengths[i] > avg) {
            std::cout << nums[i] << " (lengths " << lengths[i] << ")\n";
        }
    }

    return 0;
}
