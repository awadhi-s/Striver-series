# include<bits/stdc++.h>
using namespace std;
int largest(vector<int> &a,int n){
    int maxi = a[0];
    for(int i =0;i<n;i++){
        if(a[i]>maxi){
            maxi = a[i];
        }
    }
    return maxi;
}

int main(){
    vector<int> a = {2,4,6,8,7};
    int n = a.size();
    cout<<"the largest element is"<<largest(a,n)<<endl;

}