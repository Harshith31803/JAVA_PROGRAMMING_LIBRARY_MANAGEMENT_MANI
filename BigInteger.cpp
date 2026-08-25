#include "BigInteger.h"
#include <algorithm>
#include <vector>

BigInteger::BigInteger()
{
    number = "0";
    negative = false;
}

BigInteger::BigInteger(string num)
{
    if (num[0] == '-')
    {
        negative = true;
        number = num.substr(1);
    }
    else
    {
        negative = false;
        number = num;
    }

    removeLeadingZeros();
}

void BigInteger::removeLeadingZeros()
{
    while (number.length() > 1 && number[0] == '0')
        number.erase(0, 1);

    if (number == "0")
        negative = false;
}

void BigInteger::input()
{
    string num;
    cin >> num;

    if (num[0] == '-')
    {
        negative = true;
        number = num.substr(1);
    }
    else
    {
        negative = false;
        number = num;
    }

    removeLeadingZeros();
}

void BigInteger::display() const
{
    if (negative)
        cout << "-";

    cout << number;
}
BigInteger BigInteger::operator+(const BigInteger &other) const
{
    string num1 = number;
    string num2 = other.number;

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    string result = "";
    int carry = 0;

    int n = max(num1.length(), num2.length());

    for (int i = 0; i < n; i++)
    {
        int digit1 = (i < num1.length()) ? num1[i] - '0' : 0;
        int digit2 = (i < num2.length()) ? num2[i] - '0' : 0;

        int sum = digit1 + digit2 + carry;

        result += char((sum % 10) + '0');
        carry = sum / 10;
    }

    if (carry)
        result += char(carry + '0');

    reverse(result.begin(), result.end());

    return BigInteger(result);
}
BigInteger BigInteger::operator-(const BigInteger &other) const
{
    string num1 = number;
    string num2 = other.number;

    while (num2.length() < num1.length())
        num2 = "0" + num2;

    string result = "";
    int borrow = 0;

    for (int i = num1.length() - 1; i >= 0; i--)
    {
        int digit1 = num1[i] - '0';
        int digit2 = num2[i] - '0';

        digit1 -= borrow;

        if (digit1 < digit2)
        {
            digit1 += 10;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }

        result = char((digit1 - digit2) + '0') + result;
    }

    return BigInteger(result);
}
BigInteger BigInteger::operator*(const BigInteger &other) const
{
    string num1 = number;
    string num2 = other.number;

    int n1 = num1.length();
    int n2 = num2.length();

    vector<int> result(n1 + n2, 0);

    for (int i = n1 - 1; i >= 0; i--)
    {
        for (int j = n2 - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];

            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    string ans = "";

    for (int x : result)
    {
        if (!(ans.empty() && x == 0))
            ans += char(x + '0');
    }

    if (ans.empty())
        ans = "0";

    return BigInteger(ans);
}
bool BigInteger::operator==(const BigInteger &other) const
{
    return number == other.number && negative == other.negative;
}

bool BigInteger::operator!=(const BigInteger &other) const
{
    return !(*this == other);
}

bool BigInteger::operator<(const BigInteger &other) const
{
    if (number.length() != other.number.length())
        return number.length() < other.number.length();

    return number < other.number;
}

bool BigInteger::operator>(const BigInteger &other) const
{
    return other < *this;
}

bool BigInteger::operator<=(const BigInteger &other) const
{
    return !(*this > other);
}

bool BigInteger::operator>=(const BigInteger &other) const
{
    return !(*this < other);
}