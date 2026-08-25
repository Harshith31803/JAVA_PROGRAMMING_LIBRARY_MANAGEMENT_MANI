#ifndef BIGINTEGER_H
#define BIGINTEGER_H

#include <iostream>
#include <string>

using namespace std;

class BigInteger
{
private:
    string number;
    bool negative;

    void removeLeadingZeros();

public:
    BigInteger();
    BigInteger(string);

    void input();
    void display() const;

    BigInteger operator+(const BigInteger&) const;
    BigInteger operator-(const BigInteger&) const;
    BigInteger operator*(const BigInteger&) const;

    bool operator==(const BigInteger&) const;
    bool operator!=(const BigInteger&) const;
    bool operator<(const BigInteger&) const;
    bool operator>(const BigInteger&) const;
    bool operator<=(const BigInteger&) const;
    bool operator>=(const BigInteger&) const;
};

#endif