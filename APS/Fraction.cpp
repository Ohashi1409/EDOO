#include "Fraction.h"

void Fraction::fraction(long numerator, long denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
}

    Fraction operator-() const;

    // Prefix increment and decrement
    Fraction& operator++();
    Fraction& operator--();

    // Compound assignment operators
    Fraction& operator+=(const Fraction& other);
    Fraction& operator-=(const Fraction& other);
    Fraction& operator*=(const Fraction& other);
    Fraction& operator/=(const Fraction& other);

    // Friend binary operators
    friend Fraction operator+(const Fraction& lhs, const Fraction& rhs);
    friend Fraction operator-(const Fraction& lhs, const Fraction& rhs);
    friend Fraction operator*(const Fraction& lhs, const Fraction& rhs);
    friend Fraction operator/(const Fraction& lhs, const Fraction& rhs);

    // Friend I/O operators
    friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction);
    friend std::istream& operator>>(std::istream& is, Fraction& fraction);