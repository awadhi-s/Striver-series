#include<iostream>
using namespace std;
void reverse(int arr[],int start, int end){
    if(start>=end)
    return;

        int temp = arr[start];
       arr[ start] = arr[end];
       arr[end] = temp;
    
    reverse(arr, start+1, end-1);
}
void printArray(int arr[], int size) 
{ 
   for (int i = 0; i < size; i++){ 
   cout << arr[i] << " "; 
  
   cout << endl; }
    
}
int main(){
    int arr[] ={1,2,3,4,5,6,7};
    int n = sizeof(arr);
    printArray(arr, 6);
    reverse(arr, 0, 5);
    cout<<"reverse array is "<<endl;
    printArray(arr, 6);
    return 0;
}