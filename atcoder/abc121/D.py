def sol(x):
    mod=x&3
    if mod==0:
        return x
    if mod==1:
        return 1
    if mod==2:
        return x+1
    if mod==3:
        return 0


a,b=input().split()
aa=sol(int(a)-1)
bb=sol(int(b))
ans =aa^bb
print(ans)