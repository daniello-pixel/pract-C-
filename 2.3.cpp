#include <iostream>
#include <cstdlib>

/**
 * Задание 3.2
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

    int n, k;
    std::cout << "Enter matrix size n x n: ";
    std::cin >> n;
    std::cout << "Enter shift value (positive for right shift, negative for left shift): ";
    std::cin >> k;

    int matrix[10][10];

    // Инициализация генератора случайных чисел
    srand(time(0));

    // Автоматическое заполнение матрицы случайными числами от 0 до 99
    std::cout << "\nFilling matrix with random numbers...\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100;  // случайные числа от 0 до 99
        }
    }

    std::cout << "\nOriginal matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Normalize shift value
    k = k % n;

    if(k > 0) {
        // Right shift
        for(int step = 0; step < k; step++) {
            for(int i = 0; i < n; i++) {
                int last = matrix[i][n-1];
                for(int j = n-1; j > 0; j--) {
                    matrix[i][j] = matrix[i][j-1];
                }
                matrix[i][0] = last;
            }
        }
        std::cout << "\nMatrix after right shift by " << k << " positions:\n";
    }
    else if(k < 0) {
        // Left shift
        k = -k;
        for(int step = 0; step < k; step++) {
            for(int i = 0; i < n; i++) {
                int first = matrix[i][0];
                for(int j = 0; j < n-1; j++) {
                    matrix[i][j] = matrix[i][j+1];
                }
                matrix[i][n-1] = first;
            }
        }
        std::cout << "\nMatrix after left shift by " << k << " positions:\n";
    }
    else {
        std::cout << "\nMatrix unchanged (shift by 0):\n";
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
