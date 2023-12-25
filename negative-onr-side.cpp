#include<iostream>
using namespace std;
int seperate(int arr[], int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]>0){
        arr[j]=i;
        }
        else 
        {swap(arr[j],arr[i]);}
        i++;


        return i;
        


    }




}
int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
int main(){
int arr[] ={-12,11,-13,-5,6,-7,5,-3,};
   int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<print(arr,8)<<endl;
   
    cout<<seperate(arr,8)<<endl;

    



    return 0;
}