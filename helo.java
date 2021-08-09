class helo
{
    public static void main(String[] args) {
        
        System.out.println("good morning");
        synchronized(args)
        {
            System.out.println("sir");
            try {
                args.wait();
            } catch (InterruptedException e) {

            }

        }
        System.out.println("mam");
    }
}