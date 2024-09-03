#include <iostream>
#include <string>

int main() {
    std::string inputText;

    std::cout << "Введите текст: ";
    std::cin >> inputText;  // Считываем всю строку, включая пробелы

    std::cout << "Вы ввели: " << inputText << std::endl;

    return 0;
}