#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int numbers;
    int count = 0;
    int countTwo = 0;
    cout << "Сколько чисел вы хотите сложить? "; cin >> numbers;
    while (count != numbers) {
        int countOne;
        cout << "Введите число: "; cin >> countOne;
        countTwo += countOne;
        
        count++;
        
    }
    cout << countTwo;
}