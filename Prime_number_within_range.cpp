# include <iostream>
using name space std;
int main(){
    int n1,n2; 
    cout<<"Enter the range: ";
    cin>>n1>>n2;
    cout<<"prime numbers between "<<n1<<" and "<<n2<<" are: ";
    for (int i=n1; i<=n2; i++){
        int count=0;
        for (int j=1; j<=i;j++){
            if (i%j==0){
                count++;
            }
        }
        if (count==2){
            cout<<i<<" ";
        }
    }
    return 0;
}