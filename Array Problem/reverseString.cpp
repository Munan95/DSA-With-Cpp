#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& name){
    int st = 0;
    int end = name.size()-1;
    while(st<end){
        swap(name[st++],name[end--]);
    }
}

int main(){

    string input;
    cin >> input;

    vector<char> name(input.begin(), input.end());

    reverseString(name);

    for (char ch : name){
        cout << ch;
    }

    cout << endl;

    return 0;
}