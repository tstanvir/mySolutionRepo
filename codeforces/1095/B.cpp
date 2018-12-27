#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
   
    cin>>n;
    int arra[n];
    for(int i=0;i<n;i++)cin>>arra[i];
    sort(arra,arra+n);
    int l = arra[1]-arra[0];
    int r = arra[n-1]-arra[n-2];
    if(l>r) {cout<<arra[n-1]-arra[1]<<endl;}
    else if(l<=r){
        cout<< arra[n-2]-arra[0]<<endl;
    }
return 0;
}