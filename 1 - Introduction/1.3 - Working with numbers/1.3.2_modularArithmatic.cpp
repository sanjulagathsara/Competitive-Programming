#include <bits/stdc++.h>

using namespace std;

int main()
{

    printf("17 mod 5 = %d\n", 17 % 5);

    long long a = 1000000000000000000;
    int m = 1000000007;
    for (int i = 2; i <= a; i++)
    {
        a = (a * i)%m;
        printf("%d\n", a%m);
    }
}