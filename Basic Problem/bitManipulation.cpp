#include <iostream>
using namespace std;

int checkHamingWeight(int n){
    int count=0;

    while(n != 0){
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }

    return count;
}

int main(){
    int n;

    cout << "n = ";
    cin >> n;

    cout << checkHamingWeight(n) << endl;

    return 0;
}