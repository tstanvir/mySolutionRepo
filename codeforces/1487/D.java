

import static java.lang.Math.sqrt;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    private static long next(ArrayList<Long> arr,Long target,long cnt)  
    {  
       long start=0,end=arr.size()-1;
    
        long ans=cnt;
        while (start <= end) {  
            int mid=(int) (start + end) / 2;  
    
            // Move to right side if target is  
            // greater.  
            if (arr.get(mid) <= target) {  
                start = mid + 1;  
            }  
    
            // Move left side.  
            else {  
                ans = mid;  
                end = mid - 1;  
            }  
        }  
        return ans;  
    } 
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int t=input.nextInt();
        long a=3;
        long asq=a*a-1;
        long b=asq/2;
        long c=(long) sqrt((a*a)+(b*b));
        long MOD=(long)1e9+7;
        long cnt=0;
        ArrayList<Long> validC = new ArrayList<>();
        while(a<=b && b<=c && c<=MOD){
            validC.add(c);
            cnt++;
            a+=2;
            asq=a*a-1;
            b=asq/2;
            c=(long) sqrt((a*a)+(b*b));
        }
        for(int i=0;i<t;i++){
            long n=input.nextLong();
            System.out.println(next(validC, n,cnt));
        }
    }
}
