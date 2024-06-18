#include <iostream>
#include <vector>
#include <string>
#include <utility> 
#include <Windows.h>


template <typename T>
void move_vectors(std::vector<T>& source, std::vector<T>& destination) {
    destination = std::move(source);
}

int main() {
    setlocale(LC_ALL, "Russian");

    std::vector<std::string> one = { "test_string1", "test_string2" };
    std::vector<std::string> two;

    std::cout << "Вектор one до перемещения: ";
    for (const auto& s : one) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    std::cout << "Вектор two до перемещения: ";
    for (const auto& s : two) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;


    move_vectors(one, two);

    
    std::cout << "Вектор one после перемещения: ";
    for (const auto& s : one) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    std::cout << "Вектор two после перемещения: ";
    for (const auto& s : two) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    return 0;
}
