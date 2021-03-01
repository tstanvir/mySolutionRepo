


import static java.lang.Math.sqrt;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n=input.nextInt();
        int cnt=0;
        while(n>=1){
            int val=n;
            int cnt1=0;
            while(val>0){
                cnt1++;
                val/=10;
            }
            if((cnt1&1)!=0){
                cnt++;
            }
            n--;
        }
        System.out.println(""+cnt);
    }
}
