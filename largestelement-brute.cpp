#include<bits/stdc++.h>
using namespace std;
int largest (vector<int>& a,int n){
    sort(a.begin(),a.end());
    return a[n-1];


    

}
int main(){

    vector<int> a = {2,4,6,3,6,9};
    int n = a.size();
    cout<<"the largest element is:"<<largest(a,n)<<endl;


}