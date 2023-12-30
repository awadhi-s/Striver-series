#include<bits/stdc++.h>
using namespace std;
int if_sorted(int arr[],int n){
    for(int i = 0;i<n;i++){
        if(arr[i+1]>=arr[i]){

        }
       
        else 
        return 0;

    }
     return 1;
}
int main(){
    int arr[] = {1,2,3,4,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<if_sorted(arr,n)<<endl;

}