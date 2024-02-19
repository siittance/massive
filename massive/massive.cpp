#include <iostream>
#include <iomanip>
#include <Windows.h>
#pragma execution_character_set("utf-8")
using namespace std;


int main() {
    SetConsoleCP(65001); // устанавливаем кодировку входящего потока данных на UTF-8
    SetConsoleOutputCP(65001); // устанавливаем кодировку исходящего потока данных на UTF-8
    const int rows = 3;
    const int columns = 5;
    double array[rows][columns];
    cout << "Введите элементы двумерного массива (3x5):\n";

    for (int i = 0; i < rows; i++) {
        double sum = 0;
        for (int j = 0; j < columns; j++) {
            cout << "Введите строку: ";
            cin >> array[i][j];
            sum += array[i][j];
        }
        
        cout << "Среднее арифметическое строки: " << sum / columns << endl;
    }
    return 0;
}
