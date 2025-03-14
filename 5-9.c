#include <stdio.h>

int main() {
    // Задача 5: Поменять местами значения переменных a и b без временной переменной
    int a = 5;
    int b = 10;
    printf("Исходные значения: a = %d, b = %d\n", a, b);
    a = a + b; 
    b = a - b; 
    a = a - b; 
    printf("Значения после обмена: a = %d, b = %d\n", a, b);

    // Задача 6: Преобразовать секунды в чч:мм:сс
    int seconds = 3661; 
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int secs = seconds % 60;
    printf("\nПреобразование секунд в чч:мм:сс: %02d:%02d:%02d\n", hours, minutes, secs);

 

    // Задача 8: 10-й сдвиг вправо для 3-значного числа
    int number = 123;
    printf("\nИсходное число: %d\n", number);
    number = number >> 10; 
    printf("Число после 10-го сдвига вправо: %d\n", number);

    // Задача 9: 2-й сдвиг влево и вправо для двузначного числа
    int num = 45;
    printf("\nИсходное число: %d\n", num);
    
    // Сдвиг влево на 2 бита
    num = num << 2;
    printf("Число после 2-го сдвига влево: %d\n", num);
    
    // Сдвиг вправо на 2 бита
    num = num >> 2;
    printf("Число после 2-го сдвига вправо: %d\n", num);

    return 0;
}
