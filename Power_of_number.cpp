// This method handles all cases, 
// when exponent/bases are integers/decimals or positive/negative
// pow function is contained in math.h library
#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
    double base = 1.5;
    double expo1 = 2.5;
    double expo2 = -2.5;
    double res1, res2;
    // calculates the power
    res1 = pow(base, expo1);
    res2 = pow(base, expo2);
    cout << base << " ^ " << expo1 << " = " << res1 << endl;
    cout << base << " ^ " << expo2 << " = " << res2 << endl;
    return 0;
}