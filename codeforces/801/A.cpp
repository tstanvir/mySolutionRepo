#include<bits/stdc++.h>
using namespace std;
#define p printf
#define s scanf
#define ll long long
#define pb push_back
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    IOS;
    string t;
    while(cin>>t)
    {
    int count=0;
	int found1=t.find("VV");
	bool bal=false;
	while(found1!=std::string::npos)
	{
		if(found1+2<t.size()-1 && t.at(found1+2)=='K'){found1=t.find("VV",found1+3); continue;}
		else {t.at(found1+1)='K'; bal=true; break;}
	}

	int found2=t.find("KK");
	while(!bal && found2!=std::string::npos)
	{
		if(found2-1>=0 && t.at(found2-1)=='V'){found2=t.find("KK",found2+1); continue;}
		else {t.at(found2)='V'; break;}
	}
	//cout<<t<<endl;
    int found;
    found=t.find("VK");
    while(found!=std::string::npos)
    {
		count++;
		found=t.find("VK",found+2);
    }
    cout<<count<<endl;
    }
	return 0;
}
