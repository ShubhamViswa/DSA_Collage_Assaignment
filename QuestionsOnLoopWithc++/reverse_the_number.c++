// Find the reverese of a given number n.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    
    int reversed_digit = 0;
    while(n>0){
        int last_digit = n % 10;
        reversed_digit = reversed_digit*10 + last_digit;
        n /= 10;
    }
    cout<<reversed_digit<<endl;
    return 0;
}
