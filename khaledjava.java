import java.util.Scanner;

public class khaledjava {

    public static void main(String[] args) {
        
        int N;
        Scanner obj=new Scanner(System.in);
        System.out.print("enter the size of array \n");
        N=obj.nextInt();
    
        int A[]=new int[N];
        System.out.print("enter the of elements \n");
        for (int i = 0; i < N; i++)
        {
            A[i]=obj.nextInt();
        }
        System.out.print("choose the subset \n");
        int choice[]=new int[N/2];
        int flag=0,XORSum=0;
        System.out.println();
        int again=1;
        for (int i = 0; i < N/2  && again==1; i++)
        {
            choice[i]=obj.nextInt();
            for (int j = 0; j < N; j++)
            {
                if(choice[i] == A[j])
                flag=1;
                // System.out.println("flag is "+flag);
            }
            if(flag==0)
            {
                System.out.print("given element is not present in array A \n");
                break;
            }
            XORSum ^=choice[i];
            System.out.println("wanna enter again [y/n]");
            again=obj.nextInt();
            
        }

        System.out.println("Xor Sum is "+XORSum);



        obj.close();
    }
}