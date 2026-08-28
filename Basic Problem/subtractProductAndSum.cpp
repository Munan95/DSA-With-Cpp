#include <iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int product = 1;
    int sum = 0;
    int lastDigit = 0;
    int ans = 0;

    while(n != 0){
        lastDigit = n%10;
        product *= lastDigit;
        sum += lastDigit;
        n = n/10;
    }

    ans = product - sum;
    return ans;
}

int main(){
    int n;
    cout <<"n = ";
    cin >> n;
    cout << subtractProductAndSum(n) << endl;

    return 0;
}