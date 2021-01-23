n,x=input().split()
x=float(x)
n=int(n)
n=n+1
sum=0.0
sum=float(sum)
ans=-1
ans=int(ans)
for i in range(1,n):
    ele,p=input().split()
    ele=float(ele)
    p=float(p)
    sum=sum+((ele*p)//100.0)
    #print(sum)
    if (sum>x and ans==-1):
        ans=i
    if(x==0 and p>0 and ans==-1):
        ans=i
print(ans)
    
    