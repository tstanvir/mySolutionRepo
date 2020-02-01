#include<bits/stdc++.h>
using namespace std;
const int maxx=400005;
typedef long long ll;
ll segT[maxx];
ll arr[maxx];
int n,m;
void build(int nodel,int noder,int pos,int op){
	if(nodel==noder){
	segT[pos]=arr[nodel];
	return;
	}
	int mid=nodel+(noder-nodel)/2;
	build(nodel,mid,2*pos+1,!op);
	build(mid+1,noder,2*pos+2,!op);
	if(op==1){
		segT[pos]=segT[2*pos+1] | segT[2*pos+2];
	}
	else segT[pos]=segT[2*pos+1] ^ segT[2*pos+2];
}
void update(int nodel,int noder,int x,int pos,ll val,int op){
	if(nodel>noder) return;
	if(nodel==noder && nodel==x){
		segT[pos]=val;
		return;
	}
	int mid=nodel + (noder-nodel)/2;
	if(nodel<=x && x<=mid){
		update(nodel,mid,x,2*pos+1,val,!op);
	}
	else {
		update(mid+1,noder,x,2*pos+2,val,!op);
	}
	if(op==1)
	{
		segT[pos]=segT[2*pos+1] | segT[2*pos+2];
	}
	else segT[pos]=segT[2*pos+1] ^ segT[2*pos+2];
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<(int)pow(2,n);i++)
	{
		cin>>arr[i];
	}
	int ht=n%2==0?0:1;
	build(0,(int)pow(2,n)-1,0,ht);
	while(m--)
	{
		int p;
		ll val;
		cin>>p>>val;
		p--;
		update(0,(int)pow(2,n)-1,p,0,val,ht);
		cout<<segT[0]<<endl;
	}


	return 0;
}
