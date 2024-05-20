//  --> Sum of digits of a given number n. 

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    
    int sum=0;
    while(n>0){
        int lastDigit = n%10;
        sum += lastDigit; // Updating the sum 
        n /= 10; // dividing the updated digit by 10
    }
    cout<<sum<<endl;
    return 0;
}
