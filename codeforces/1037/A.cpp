#include<bits/stdc++.h>

using namespace std;

#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


#define np std::string::npos

int main()

{
    IOS;
    double n;
    while(cin>>n)
    {
        int bal=0;
         long long sum=0;
        for(int i=1;i<=n;i=sum+1 )
        {
            bal++;
           sum+=i;
           if(sum>=n) {cout<<bal<<endl; break;}

        }
    }
    return 0;

}

