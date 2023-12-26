#include<bits/stdc++.h>
using namespace std;
int get_element(int arr[],int n){
    if(n==0||n==1)
    cout<<-1<<""<<-1;

    sort(arr,arr+n);
    int smallest = arr[n];
    int largest = arr[n-1];
    cout<<"largest element"<<largest<<endl;
    cout<<"smallest element"<<smallest<<endl;


}
int main(){
    int arr[] ={1,2,4,6,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    get_element(arr,n);
    return 0;

}