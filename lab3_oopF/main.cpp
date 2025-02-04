#include <iostream>
#include "RealNumber.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    try {
        // Створення об'єктів
        RealNumber num1(10.5);
        RealNumber num2(2.0);
        RealNumber num3(-7.8);
        RealNumber num4(3.5);

        // Вивід чисел
        cout << "📌 Вихідні числа:" << endl;
        num1.display();
        num2.display();
        num3.display();
        num4.display();
        cout << endl;

        // Виконання операцій
        RealNumber sum = num1 + num2;
        RealNumber difference = num1 - num3;
        RealNumber product = num2 * num4;
        RealNumber quotient = num1 / num2;

        // Вивід результатів
        cout << "➕ Додавання: "; sum.display();
        cout << "➖ Віднімання: "; difference.display();
        cout << "✖️ Множення: "; product.display();
        cout << "➗ Ділення: "; quotient.display();
        cout << endl;

        // Пошук найбільшого та найменшого числа
        vector<RealNumber> numbers = { num1, num2, num3, num4 };
        RealNumber maxNumber = RealNumber::findMax(numbers);
        RealNumber minNumber = RealNumber::findMin(numbers);

        cout << "🔝 Найбільше число: "; maxNumber.display();
        cout << "🔽 Найменше число: "; minNumber.display();
        cout << endl;

    }
    catch (const exception& e) {
        cerr << "❌ Виняток: " << e.what() << endl;
    }

    return 0;
}
