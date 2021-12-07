/**
 * @file gcd.cpp
 * @author Hiroshi Tasaki (s1270244@u-aizu.ac.jp)
 * @brief  This program calculates the greatest common divisor of the two given positive integers.
 * @version 0.1
 * @date 2021-12-05
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <iostream>
#include <boost/format.hpp>

using namespace std;
using boost::format;

/**
 * @brief This function calculates the greatest common divisor of-
 *        -the two given positive integers based on the Euclidian algorithm.
 *        formula:   a = b * c + d;
 * @param a long long integer a
 * @param b long long integer b
 * @return unsigned long long  obtained gcd
 */
unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    unsigned long long _gcd;
    while (true)
    {
        if (a == 0)
        {
            _gcd = b;
            break;
        }
        else if (b == 0)
        {
            _gcd = a;
            break;
        }
        else
        {
            long long d = a % b;
            a = b;
            b = d;
        }
    }
    return _gcd;
}

int main(void)
{
    unsigned long long a = 270;
    unsigned long long b = 192;

    // Test the 'gcd()' function
    cout << format("gcd(%lld, %lld) =  %lld") % a % b % gcd(a, b) << endl; // The answer for gcd(270, 192) is 6

    return 0;
}
