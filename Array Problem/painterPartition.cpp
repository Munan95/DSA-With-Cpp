#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr,int n,int m,int allowUnit){
    int time = 0,painter=1;

    for(int i=0; i<n; i++){
        if(arr[i] > allowUnit){
            return false;
        }

        if(time+arr[i] <= allowUnit){
            time += arr[i];
        }else{
            painter++;
            time = arr[i];
        }
    }
    return painter <= m; 
}

int maximum_Smallest_Time(vector<int> arr,int n,int m){
    if(m>n){
        return -1;
    }
    
    int sum = 0;
    for (int i=0; i<n; i++){
        sum += arr[i];
    }

    int st = 0;
    int end = sum;
    int ans = -1;

    while (st <= end){
        int mid = st + (end-st)/2;

        if(isValid(arr,n,m,mid)){ //Left
            ans = mid;
            end = mid-1;
        }else{ //Right
            st = mid+1;
        }
    }
    
    return ans;
}

int main(){
    //vector<int> arr = {10,10,10,10};
    vector<int> arr = {40,30,10,20}; //number of paint's of unit's of array
    int n = 4; //number of paints 
    int m = 2; //number of painters

    cout <<"Ans:"<<maximum_Smallest_Time(arr,n,m)<<endl;

    return 0;
}