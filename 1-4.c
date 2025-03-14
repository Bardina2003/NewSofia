#include <stdio.h>

int main() {
    // Задача 1: Вывод на экран значения x
    int x1 = 2 % 2 + 2 * 2 - 2 / 2;
    printf("Значение x1: %d\n", x1);

    int x2 = (3 * 9 * (3 + (9 * 3 / 3)));
    printf("Значение x2: %d\n", x2);


    // Задача 3: Вывод младшей цифры целой части частного
    int n = 17; 
    int m = 5;  
    int result = n / m;
    printf("\nМладшая цифра целой части частного %d/%d: %d\n", n, m, result % 10);

    // Задача 4: Определение времени по секундам
    int k = 3661; 
    int hours = k / 3600;
    int minutes = (k % 3600) / 60;
    printf("\nВремя по секундам: %02d:%02d\n", hours, minutes);

    return 0;
}
