#include <iostream>
#include <vector>
#include <string>
using namespace std;

void toUpperCase(vector<char>& ch){

    int j = 2;
    for(int i=0; i<ch.size(); i++){  // 0 2 5 8 11 14... position upper case

        if(j == i){
            if(ch[i] >= 'a' && ch[i] <= 'z'){
                ch[i] = ch[i] - 'a' + 'A';
            }
            j += 3;
        }else{
            if(ch[i] >= 'A' && ch[i] <= 'Z'){
                ch[i] = ch[i] - 'A' + 'a';
            }
        }
    }
}

int main(){
    string input;
    cin >> input;

    vector<char> name(input.begin(), input.end());

    toUpperCase(name);

    for (char ch : name){
        cout << ch;
    }

    cout << endl;

    return 0;
}