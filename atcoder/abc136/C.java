


import static java.lang.Math.sqrt;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        solve(arr,n);
    }
    public static void solve(int[] arr,int n){
        for(int i=n-2;i>=0;i--){
            if(arr[i]>arr[i+1] && arr[i]-arr[i+1]>1){
                System.out.println(""+"No");
                return;
            }
            if(arr[i]>arr[i+1] && arr[i]-arr[i+1]==1){
                arr[i]--;
            }
        }
        System.out.println("Yes");
    }
}
