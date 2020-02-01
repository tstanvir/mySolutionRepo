#include<bits/stdc++.h>
using namespace std;
const int maxx = 200005;
typedef long long ll;
int k;
ll sum=0;
ll arr[maxx];
ll ans[maxx];
ll cnt[maxx*10];
struct query{
    int index,l,r;
    bool operator < (const query &other) const{
        int block_own=l/k;
        int block_other=other.l/k;
        if(block_own==block_other){
            return r<other.r;
        }
        return block_own<block_other;
    }
}Query[maxx];
void add(int x){
    sum-=(cnt[x]*cnt[x]*x);
    cnt[x]++;
    sum+=(cnt[x]*cnt[x]*x);
}
void rmove(int x){
    sum-=(cnt[x]*cnt[x]*x);
    cnt[x]--;
    sum+=(cnt[x]*cnt[x]*x);
}
int main()
{
    //ios::sync_with_stdio(false); cin.tie(0);
    int n,q;
    scanf("%d%d",&n,&q);
    k=sqrt(n);
    for(int i=0;i<n;i++) scanf("%I64d",&arr[i]);
    for(int i=0;i< q;i++){
        int l,r;
        scanf("%d%d",&l,&r);
        l--,r--;
        Query[i].l=l;
        Query[i].r=r;
        Query[i].index=i;
    }
    sort(Query,Query+q);
   // for(int i=0;i<q;i++) cout<<Query[i].l<<" "<<Query[i].r<<endl;
    int L=0,R=-1;
    for(int i=0;i<q;i++){
        while(R<Query[i].r) add(arr[++R]);
        while(R>Query[i].r) rmove(arr[R--]);
        while(L<Query[i].l) rmove(arr[L++]);
        while(L>Query[i].l) add(arr[--L]);
        ans[Query[i].index]=sum;
    }
    for(int i=0;i<q;i++){
        printf("%I64d\n",ans[i]);
    }
    return 0;
}

