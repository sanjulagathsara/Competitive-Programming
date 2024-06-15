#include <bits/stdc++.h>

using namespace std;

int main(){

/*
set is a collection of distinct objects, considered as an object in its own right. For example, the numbers 1, 2, and 3 are distinct objects when considered separately, but when they are considered collectively, they form a single set of size three, written {1,2,3}.
size of the set is denoted by |S|

new set can be created by listing its elements between curly brackets
S = {1, 2, 3}
*/

set<int> S;
S.insert(1);
S.insert(2);
S.insert(3);


/*
set can also be defined by a property that its members must satisfy
S = {x | x > 0}
this means that S is the set of all x such that x is greater than 0

set can also be defined by a property that its members must satisfy and a condition
S = {x | x > 0, x < 5}
this means that S is the set of all x such that x is greater than 0 and less than 5

set can also be defined by a property that its members must satisfy and a condition and a transformation
S = {x^2 | x > 0, x < 5}
this means that S is the set of all x^2 such that x is greater than 0 and less than 5

New sets can be contructed from existing sets using set operations
- union
-- S = {1, 2, 3}
-- T = {3, 4, 5}
-- S U T = {1, 2, 3, 4, 5}
*/

set<int> T;
T.insert(3);
T.insert(4);
T.insert(5);
set<int> U;

set_union(S.begin(), S.end(), T.begin(), T.end(), inserter(U, U.begin()));

printf("Union: ");
for (auto i = U.begin(); i != U.end(); i++)
{
    printf("%d ", *i);
}


/*
- intersection
-- S = {1, 2, 3}
-- T = {3, 4, 5}
-- S ∩ T = {3}
*/

set<int> V;

set_intersection(S.begin(), S.end(), T.begin(), T.end(), inserter(V, V.begin()));

printf("Intersection: ");
for (auto i = V.begin(); i != V.end(); i++)
{
    printf("%d ", *i);
}

/*
- difference
-- S = {1, 2, 3}
-- T = {3, 4, 5}
-- S - T = {1, 2}
*/

set<int> W;

set_difference(S.begin(), S.end(), T.begin(), T.end(), inserter(W, W.begin()));

printf("Difference: ");
for (auto i = W.begin(); i != W.end(); i++)
{
    printf("%d ", *i);
}

/*
- complement
-- S = {1, 2, 3}
-- U = {1, 2, 3, 4, 5}
-- S' = U - S = {4, 5}

*/

set<int> X;

set_difference(U.begin(), U.end(), S.begin(), S.end(), inserter(X, X.begin()));

printf("Complement: ");
for (auto i = X.begin(); i != X.end(); i++)
{
    printf("%d ", *i);
}

}