/*
int - 32 bit
-2^31 to 2^31 - 1
-2147483648 to 2147483647

long long - 64 bit
-2^63 to 2^63 - 1
-9223372036854775808 to 9223372036854775807
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 5;
    long long b = 1000000000000000000;

    cout << a << " " << b << endl;
    return 0;
}

/*
Extra -
In some contest systems like Codeforces, the default integer type is int, so if you are using long long, you need to use long long int to avoid any compilation errors.

g++ compiler provides 128-bit interger type __int128_t
this is not available in all compilers

*/