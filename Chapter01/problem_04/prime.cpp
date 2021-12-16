/**
 * @file prime.cpp
 * @author Hiroshi Tasaki
 * @brief This program calculates a largest prime number smaller than a given number.
 * @version 0.1
 * @date 2021-12-16
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <math.h>
#include <typeinfo>
#include <iostream>
#include <boost/format.hpp>

using namespace std;
using boost::format;

/**
 * @brief This function goes over a given positive integer and check to see if it is prime.
 * 
 * @tparam T is a type of positive integer to be checked if it is a prime.
 * @param num is a positive integer to be checked if it is a prime.
 * @return T 
 */
template <typename T>
T is_prime(T num)
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (!(num % 2))
        return false;

    T max_dev = floorl(sqrtl(num));
    for (T i = 3; i < max_dev + 1; i += 2)
    {
        if (!(num % i))
            return false;
    }
    return true;
}

int main()
{
    int num = 571;

    bool found_prime = 0;
    for (int i = num % 2 ? num - 2 : num - 1; i >= 3; i -= 2)
    {
        if (is_prime(i))
        {
            found_prime = true;
            cout << format("The largest prime number smaller than %d is %d") % num % i << endl;
            break;
        }
    }
    if (num == 2 && !found_prime)
        cout << format("The largest prime number smaller than %d is %d") % num % 2 << endl;

    return 0;
}
