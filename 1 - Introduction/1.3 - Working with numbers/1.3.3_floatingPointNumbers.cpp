/*
double - 64 bits
long double - 80 bits

*/


#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a = 5.56456665465645;
    long double b = 5.56456665465645;

    printf("%lf %Lf\n", a, b);


    printf("%0.9f %0.9Lf\n", a, b);

    


    return 0;
}