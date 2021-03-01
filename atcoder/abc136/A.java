


import static java.lang.Math.max;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        /*
        array
        int[] arr=new int[5];
        
        for(int i=0;i<5;i++){
            arr[i]=input.nextInt();
        }
        Arrays.sort(arr);
        for(int x:arr){
            System.out.print(""+x+" ");
        }
        System.out.println("");
        */
        /*
        ArrayList: 
        
        ArrayList<Integer>number=new ArrayList<>();
        int n=input.nextInt();
        for(int i=0;i<n;i++){
            int x=input.nextInt();
            number.add(x);
        }
        number.sort(Collections.reverseOrder());
        Iterator it=number.iterator();
        while(it.hasNext()){
            System.out.print(""+it.next()+" ");
        }
        System.out.println("");
        */
        int a=input.nextInt(),b=input.nextInt(),c=input.nextInt();
        System.out.println(""+max(c-(a-b),0));
        
        
    }
}
