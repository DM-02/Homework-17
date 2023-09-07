//
//  main.cpp
//  дз
//
//  Created by Дмитрий Сергеевич on 07.09.2023.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

void say_hi() {
    std::cout << "Hello world!" << std::endl;
    std::cout << "Buy wotld!" << std::endl;
}
int sum(int num1, int num2) {
    return num1 + num2;
}
bool even(int num) {
    if (num % 2 == 0)
        return true;
    return false;
}
void print_arr(int arr[], const int length) {
    for (int i = 0; i < length; i++)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
}
void mult_x5(int variable) { // variable - параметр функции
    variable *= 5;
}
void arr_x5(int arr[]) {
    arr[1] *= 5;
}
void positive_indexes(int arr [], const int length){
    for (int i = 0; i < length; i++)
        if (arr[i] > 0)
            std::cout << i << ' ';
    std::cout << std::endl;
}
long long factorial (int num) {
    long long result = 1;
        for (int i = 2; i <= num; i++)
            result *= i;
    return result;
}



int main(int argc, const char * argv[]) {
    setlocale (LC_ALL, "RU");
    int n;
    
    // Простые фунцкии
    /*say_hi();
     say_hi();
     say_hi();
     std::cout << "10 + 5 = " << sum(10, 5) << std::endl;
     
     std::cout << "\n\n Введите число ->";
     std::cin >> n;
     
     if (even(n))
     std::cout << "Число четное.\n\n";
     else
     std::cout << "Число нечетное.\n\n";*/
    
    
    //функции, работающие с масссивоми
    /*const int size = 5;
     int arr[size] = { 10, 7, 20, 8, 11};
     std::cout << "Массив: \n";
     print_arr(arr, size);*/
    
    // Массивы и переменные как аргументы функции
    /*n = 10;
     std::cout << "n = " << n << std::endl;
     mult_x5(n); // n - аргкмент функции
     std::cout << "n = " << n << std::endl; // 10, так как параметры - лишь копии аргутментов
     
     int my_arr[3]{10, 20, 30};
     print_arr(my_arr, 3); // 10 20 30
     arr_x5(my_arr);
     print_arr(my_arr,3); */
    
    
    //Задача 1. Индексы положительных элементов
    /*std::cout << "Задача 1\nМассив: \n";
     const int size1 =  6;
     int arr1[size1]{0, 7, -8, 11, 15, -6};
     print_arr(arr1, size1);
     std::cout << " Индексы положительных элементов: \n";
     positive_indexes(arr1, size1);
     std::cout << '\n';*/
    
    //Задача 2. факториал
    std::cout << "Введите число ->";
    std::cin >> n;
    std::cout << n << "! = " << factorial(n) << std::endl;
    
    
    return 0;
}
