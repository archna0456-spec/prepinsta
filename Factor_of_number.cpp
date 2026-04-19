//C++ Program Factors of a number
#include <bits/stdc++.h>
using namespace std;

//main Program
int main()
{
    int num;
    
    num=100;
    
    cout << "Factors of " << num << " are: " << endl;  
    
    // finding and printing factors b/w 1 to num
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
            cout << i << " ";
    }
}

// Time Complexity: O(N)