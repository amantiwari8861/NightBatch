class abc
{
    public static void main(String[] args) {
        
        int flag;
        do {
            try {
                int a=5/0;
                flag=0;
                throw new NullPointerException;

            }
            finally
            {
                System.out.print("perform div");
                flag=1;
            }
        } while (flag==1);
    }
}