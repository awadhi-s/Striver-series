#include<bits/stdc++.h>
using namespace std;
int kth(int arr[], int n, int k){
    sort(arr, arr + n);
    return arr[k-1];
}
int main(){
    int arr[]={6,5,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    cout<<"kth element is"<<kth(arr,n,k)<<endl;
    return 0;
}