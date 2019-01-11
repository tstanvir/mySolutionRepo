#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        bool p1=false,p4=false,p2=false,p3=false;
        int cnt=0;
        int first=0,last=0;
        int lastbr;
        for(int i=s.length()-1;i>=0;i--)
        if(s[i]==']'){ lastbr =  i; break;}
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='[' && !p4 &&!p1) p1=true;
            if(s[i]==']' && p1 && p2 && p3) p4 = true;
            if(s[i]==':' && p1 && i<lastbr) {if(p2){ p3 = true; last = i;}
            else {p2 = true; first=i;}}

        }
        for(int i=first;i<=last;i++)
        {
            if(s[i]=='|') cnt++;

        }
        //cout << khara <<endl;
        if(p1&&p2&&p4&&p3) cout << 4+cnt<<endl;
        else
            cout << -1<<endl;;
    }
    return 0;
}
