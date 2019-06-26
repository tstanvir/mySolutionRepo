#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=n;;i++)
        {
            int sum=0;
            int bal=i;
            while(bal)
            {
                sum+=(bal%10);
               bal/=10;
            }
            if(sum%4==0){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
