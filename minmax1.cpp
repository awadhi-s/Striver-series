#include <bits/stdc++.h>
using namespace std;
struct Pair{
    int min;
    int max;

};
Pair getminmax(int arr[], int n){
    Pair minmax;
    sort(arr, arr + n);
    minmax.min = arr[0];
    minmax.max  = arr[n-1];
    return minmax;

    
}
int main(){
    int arr[]={5,4,6,8,1,2,9};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    Pair minmax = getminmax(arr,n);
    cout<< "min element is"<<minmax.min<<endl;
    cout<<"max element is"<<minmax.max<<endl;
    return 0;
}