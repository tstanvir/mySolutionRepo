n=int(input())
lo=1
hi=n
val=n+1
ans=0
while(lo<=hi):
	mid=(lo+hi)//2
	sum=((1+mid)*mid)//2
	if(sum>val):
		hi=mid-1
	else:
		ans=mid
		lo=mid+1
print(n-ans+1)