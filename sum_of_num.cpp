//Find the Sum of N Natural Numbers in C++
#include <iostream>
using namespace std;
int main() {
    int number ,sum=0;
    cout<<"Enter a number: ";
    cin>>number;
    for(int i=1; i<=number; i++){
        sum+=i;
    }
    cout<<"The sum of "<<number<<" natural numbers is: "<<sum;
    return 0;
}