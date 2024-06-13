/*
If amout of data is unknown, we can use a loop to read data until the end of file is reached.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    while (cin >> a)
    {
        cout << a << endl;
    }

    return 0;
}

/*
This loop reads elements from the input one after another, until there is no more data available in the input.
*/