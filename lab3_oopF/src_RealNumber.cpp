#include "RealNumber.h"

// Конструктори
RealNumber::RealNumber() : value(0.0) {}

RealNumber::RealNumber(double val) {
    setValue(val); // Використовуємо setter з валідацією
}

// Перевантажені арифметичні оператори
RealNumber RealNumber::operator+(const RealNumber& other) const {
    return RealNumber(value + other.value);
}

RealNumber RealNumber::operator-(const RealNumber& other) const {
    return RealNumber(value - other.value);
}

RealNumber RealNumber::operator*(const RealNumber& other) const {
    return RealNumber(value * other.value);
}

RealNumber RealNumber::operator/(const RealNumber& other) const {
    if (other.value == 0) {
        throw std::runtime_error(" Помилка: Ділення на нуль!");
    }
    return RealNumber(value / other.value);
}

// Гетери та сетери з обробкою винятків
double RealNumber::getValue() const {
    return value;
}

void RealNumber::setValue(double val) {
    if (val < -1e9 || val > 1e9) { // Приклад обмеження
        throw std::out_of_range(" Помилка: Число виходить за допустимий діапазон!");
    }
    value = val;
}

// Метод пошуку найбільшого числа у векторі
RealNumber RealNumber::findMax(const std::vector<RealNumber>& numbers) {
    if (numbers.empty()) {
        throw std::runtime_error(" Помилка: Вектор порожній!");
    }

    RealNumber maxNumber = numbers[0];
    for (const auto& num : numbers) {
        if (num.value > maxNumber.value) {
            maxNumber = num;
        }
    }
    return maxNumber;
}

// Метод пошуку найменшого числа у векторі
RealNumber RealNumber::findMin(const std::vector<RealNumber>& numbers) {
    if (numbers.empty()) {
        throw std::runtime_error(" Помилка: Вектор порожній!");
    }

    RealNumber minNumber = numbers[0];
    for (const auto& num : numbers) {
        if (num.value < minNumber.value) {
            minNumber = num;
        }
    }
    return minNumber;
}

// Метод для виводу числа
void RealNumber::display() const {
    std::cout << "Число: " << value << std::endl;
}

// Деструктор
RealNumber::~RealNumber() {}
