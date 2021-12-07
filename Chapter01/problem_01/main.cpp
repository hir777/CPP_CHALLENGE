/**
 * @file main.cpp
 * @author Hiroshi Tasaki (s1270244@u-aizu.ac.jp)
 * @brief This program sums up and prints all the natural numbers devisible by either 3 or 5, up to the limit given by the user.
 * @version 0.1
 * @date 2021-12-05
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>

using namespace std;

int main()
{
    long long int sum = 0;
    int limit;

    cout << "Upper limit ->";
    cin >> limit;
    for (int i = 1; i < limit; i++)
    {
        if (!(i % 3) || !(i % 5))
        {
            sum += i;
            //cout << i << endl;
        }
    }
    cout << endl << "sum = " << sum << endl;

    return 0;
}