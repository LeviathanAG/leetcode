#include<bits/stdc++.h>
using namespace std;
int main() {
    int n1 = 52;
    int n2 = 10;

    
    int a = max(n1, n2); // 52
    int b = min(n1, n2); // 10
    int remainder;

    while (b != 0) {
        remainder = a % b; // Calculate the remainder
        a = b;             // The new 'a' is the old 'b'
        b = remainder;     // The new 'b' is the remainder
    }

    // The GCD 
    cout << "GCD is " << a << endl;
}
