/*
due to rounding errors, floating point numbers cannot be compared directly
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a = 0.3 * 3 + 0.1; // should be 1

    printf("%0.20f\n", a); // 0.99999999999999988898

    if (a == 1)
    {
        printf("a is equal to 1\n");
    }
    else
    {
        printf("a is not equal to 1\n");
    }

    /*
    compare with an epsilon
    epsilon = 1e-9
    */

   if (abs(a - 1) < 1e-9)
   {
       printf("a is equal to 1\n");
   }
   else
   {
       printf("a is not equal to 1\n");
   }

    return 0;

}
    