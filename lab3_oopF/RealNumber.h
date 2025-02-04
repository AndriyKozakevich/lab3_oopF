#ifndef REALNUMBER_H
#define REALNUMBER_H

#include <iostream>
#include <vector>
#include <stdexcept>

class RealNumber {
private:
    double value;

public:
    // ������������
    RealNumber();
    RealNumber(double val);

    // ������������ ���������� ���������
    RealNumber operator+(const RealNumber& other) const;
    RealNumber operator-(const RealNumber& other) const;
    RealNumber operator*(const RealNumber& other) const;
    RealNumber operator/(const RealNumber& other) const;

    // ������ �� ������ � �������� �������
    double getValue() const;
    void setValue(double val);

    // ������ ��� ������ ���������� �� ���������� ����� � ������
    static RealNumber findMax(const std::vector<RealNumber>& numbers);
    static RealNumber findMin(const std::vector<RealNumber>& numbers);

    // ���� �����
    void display() const;

    // ����������
    ~RealNumber();
};

#endif // REALNUMBER_H
