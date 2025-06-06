#include <stdio.h> // Подключение библиотеки для ввода-вывода

int main() {
    double a, b, c; // Объявление переменных для трех чисел с плавающей точкой
    int sign; // Переменная для хранения результата знака произведения

    printf("Введите три числа: "); // Вывод для ввода чисел
    scanf("%lf %lf %lf", &a, &b, &c); // Чтение трех введеных чисел

    int zero_flag = ((a == 0) || (b == 0) || (c == 0)); // Создание переменной zero_flag, которая будет равна 1, если есть ноль среди a, b или c
  
    int a_sign = (a > 0) - (a < 0);  // Определение знака числа a
  
    int b_sign = (b > 0) - (b < 0); // Определение знака числа b

    int c_sign = (c > 0) - (c < 0); // Определение знака числа c

    int product_sign = a_sign * b_sign * c_sign; // Перемножение знаков чисел
  
    sign = zero_flag * 0 + (1 - zero_flag) * product_sign; // Объеденение результатов для конечного решения

    printf("%d\n", sign); // Вывод результата

    return 0; // Завершение программы
}
