#ifndef REALNUMBER_H
#define REALNUMBER_H

#include <iostream>
#include <vector>
#include <stdexcept>

class RealNumber {
private:
    double value;

public:
    // Конструктори
    RealNumber();
    RealNumber(double val);

    // Перевантажені арифметичні оператори
    RealNumber operator+(const RealNumber& other) const;
    RealNumber operator-(const RealNumber& other) const;
    RealNumber operator*(const RealNumber& other) const;
    RealNumber operator/(const RealNumber& other) const;

    // Гетери та сетери з обробкою винятків
    double getValue() const;
    void setValue(double val);

    // Методи для пошуку найбільшого та найменшого числа у векторі
    static RealNumber findMax(const std::vector<RealNumber>& numbers);
    static RealNumber findMin(const std::vector<RealNumber>& numbers);

    // Вивід числа
    void display() const;

    // Деструктор
    ~RealNumber();
};

#endif // REALNUMBER_H
