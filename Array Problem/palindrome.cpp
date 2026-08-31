#include <iostream>
#include <string>
#include <cctype>  //for use: isalnum() & tolower()
using namespace std;

bool isPalindrome(string s){

    int st = 0;
    int end = s.length()-1;

    while(st <= end){

        if(!isalnum(s[st])){    //isalnum() check alphanumeric
            st++; continue;
        }

        if(!isalnum(s[end])){
            end--; continue;
        }

        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }

        st+=1;
        end-=1;
    }

    return true;
}

int main(){
    string s;

    cout <<"string = ";
    //cin >> s;       // take as input one word
    getline(cin,s); // take as input the entire line

    cout <<isPalindrome(s)<<endl;

    return 0;
}