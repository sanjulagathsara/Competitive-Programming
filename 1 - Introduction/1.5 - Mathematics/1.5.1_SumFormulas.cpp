#include <bits/stdc++.h>

using namespace std;

int main()
{

/*
sum of numbers from 1 to n

sum = n * (n + 1) / 2
*/

int n = 5;
int sum = n * (n + 1) / 2;

printf("%d\n", sum); // 15

/*
sum of squares of numbers from 1 to n

sum = n * (n + 1) * (2 * n + 1) / 6
*/

n = 5;
sum = n * (n + 1) * (2 * n + 1) / 6;

printf("%d\n", sum); // 55

/*

sum of cubes of numbers from 1 to n

sum = pow(n * (n + 1) / 2, 2)

*/

n = 5;
sum = pow(n * (n + 1) / 2, 2);

printf("%d\n", sum); // 225

/*
arithmatic progression
- Difference between consecutive terms is constant
- nth term of an arithmetic progression: a + (n - 1) * d
- sum of n terms of an arithmetic progression: n * (a + b) / 2
-- a: first term
-- b: last term
-- n: number of terms
eg: 3, 7, 11, 15

*/


/*

geometric progression

- Ratio between consecutive terms is constant
- nth term of a geometric progression: a * r^(n - 1)
- sum of n terms of a geometric progression: a * (1 - r^n) / (1 - r)
-- a: first term
-- r: ratio
-- n: number of terms
eg: 2, 4, 8, 16

*/

/*
harmonic sum

- sum of reciprocals of numbers from 1 to n
- sum = 1 + 1/2 + 1/3 + ... + 1/n
- sum = log(n) + 0.5772156649 + 1 / (2 * n) - 1 / (12 * n^2) + 1 / (120 * n^4) - 1 / (252 * n^6) + 1 / (240 * n^8) - 1 / (132 * n^10) + 691 / (32760 * n^12) - 1 / (12 * n^14) + 3617 / (8160 * n^16) - 43867 / (14364 * n^18) + 174611 / (6600 * n^20) - 77683 / (1092 * n^22) + 236364091 / (130680 * n^24) - 657931 / (6 * n^26) + 3392780147 / (50112 * n^28) - 81819049 / (3645 * n^30) + 4272943 / (210 * n^32) - 278261 / (32760 * n^34) + 202366011 / (5460 * n^36) - 33025 / (180 * n^38) + 37 / (n^40)
*/




}