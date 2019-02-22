#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool b;
        for(int i=0,j=n-1;i<(n/2);i++,j--)
        {
            b=false;
            if(s[i]==s[j]) b=true;
            else if(s[i]<s[j]){char a=++s[i],c=--s[j]; if(a==c) b=true;}
            else if(s[i]>s[j]) {char a=--s[i],c=++s[j]; if(a==c) b=true;}
            //cout<<b<<endl;
            if(b==false) break;
        }
        if(!b) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
	}
	return 0;
}
