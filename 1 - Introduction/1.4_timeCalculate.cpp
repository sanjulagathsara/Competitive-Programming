

// A fast IO program 
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(0);  // check th time by commenting this 2 lines
    cin.tie(0);    

    // Start the timer
    auto start = std::chrono::high_resolution_clock::now();
      
    int a = 0, b = 65000;

    for(int i=0;i<b;i++)
    {
        a++;
        cout<<a<<endl;
    }

    // End the timer
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate the duration
    std::chrono::duration<double> duration = end - start;

    // Print the duration in seconds
    std::cout << "Execution time: " << duration.count() << " seconds." << std::endl;

    return 0;
} 
