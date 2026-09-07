#include <iostream>
#include <vector>
using namespace std;

void changeArray(vector<int> &arr2){   //reference by address(alias)
    arr2={10,20,30,40};
    for(int i=0;i<arr2.size();i++){
        cout <<arr2[i]<<" ";
    }
    cout <<endl;
}

int main(){
    // int a= 10;
    // vector<int> arr1 = {1,20,30,40};

    // int* ptr = &a;   //store address of a variable
    // int** parPtr = &ptr;  //store address of a pointer

    // cout <<&a<<endl;
    // cout <<ptr<<endl;
    // cout <<"--------------"<<endl;
    // cout <<"--------------"<<endl;
    // cout <<&ptr<<endl;
    // cout <<parPtr<<endl;
    // cout <<"--------------"<<endl;
    // cout <<"--------------"<<endl;
    // for(int i=0;i<arr1.size();i++){
    //     cout <<arr1[i]<<" ";
    // }
    // cout <<endl;
    // changeArray(arr1);
    // cout <<"--------------"<<endl;
    // for(int i=0;i<arr1.size();i++){
    //     cout <<arr1[i]<<" ";
    // }
    cout <<endl;

    int arr[]={10,20,30,40};
    int* ptr = arr;

    cout <<*(ptr+1)<<endl;  //20
    cout <<*(ptr+3)<<endl;  //40
    ptr++;
    cout <<*ptr<<endl;  //20

    return 0;
}