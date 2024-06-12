

// A fast IO program 
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // added the two lines below 
    //ios_base::sync_with_stdio(0);  // check th time by commenting this 2 lines
    //cin.tie(0);    






    // Start the timer
    auto start = chrono::high_resolution_clock::now();
      




    int a = 0, b = 1000000;

    for(int i=0;i<b;i++)
    {
        a++;
        //cout<<a<<endl;
        printf("%d\n",a);
    }





    // End the timer
    auto end = chrono::high_resolution_clock::now();

    // Calculate the duration
    chrono::duration<double> duration = end - start;

    // Print the duration in seconds
    cout << "Execution time: " << duration.count() << " seconds." << endl;







    return 0;
} 
