#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr,int n,int m,int allowUnit){
    int paint = 0,painter=1;

    for(int i=0;i<n;i++){
        if(arr[i] > allowUnit){
            return false;
        }

        if(paint+arr[i]<=allowUnit){
            paint+=arr[i];
        }else{
            painter++;
            paint=arr[i];
        }
    }
    return painter > m ? false : true;
}

int painterPartition(vector<int> arr,int n,int m){
    if(m>n){
        return -1;
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum+=arr[i];
    }

    int st=0;
    int end=sum;
    int ans=-1;

    while (st<=end){
        int mid = st+(end-st)/2;

        if(isValid(arr,n,m,mid)){
            ans=mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }
    
    return ans;
}

int main(){
    //vector<int> arr = {10,10,10,10};
    vector<int> arr = {40,30,10,20};
    int n=4,m=2;

    cout <<painterPartition(arr,n,m)<<endl;

    return 0;
}