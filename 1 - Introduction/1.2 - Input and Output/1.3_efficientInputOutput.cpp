/*
It is often recommended to use scanf/printf instead of cin/cout for fast input and output.
 However, you can still use cin/cout and achieve the same speed as scanf/printf by including the following
  two lines in your main() function:

ios::sync_with_stdio(0);
cin.tie(0);



*/

// A fast IO program
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // added the two lines below
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    string x;
    cin >> a >> b >> x;
    cout << a << " " << b << " " << x << endl;

    return 0;
}
