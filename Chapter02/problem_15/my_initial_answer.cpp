/**
 * @file ipv4.cpp
 * @author Hiroshi Tasaki
 * @brief  The IPv4 class defined in this file implements the functions required to be able to read and
 *         -write such addresses from or to the console.
 * @version 0.1
 * @date 2022-01-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <string>

using namespace std;

/**
 * @brief   This class implements the functions required to be able to read and
 *          -write such addresses from or to the console.
 *
 */
class IPv4
{
protected:
    string ipv4;

public:
    IPv4() {}

    bool read()
    {
        cin >> ipv4;
        return true;
    }

    bool write()
    {
        cout << "IPv4 address -> " << ipv4 << endl;
        return true;
    }
};

int main()
{
    IPv4 ipv4;

    ipv4.read();
    ipv4.write();

    return 0;
}
