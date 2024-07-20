import java.util.*;
public class demo {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the size of Array");
        int n =s.nextInt();
        int a[]=new int[n];
        System.out.println("Enter the element");
        for(int i=0;i<n;i++){
            
            a[i]=s.nextInt();
        }
        for(int i=0;i<n;i++){
            System.out.println(a[i]);
        }
    }
}

