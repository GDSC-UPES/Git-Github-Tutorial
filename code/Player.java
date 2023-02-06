public class Player
{
    String name;
    int age;
    Player(String a, int b)
    {
        name=a;
        age=b;
    }
    void printinfo()
    {
        System.out.println("Name:" +name);
        System.out.println("Age: " +age);
    }
}

class Cricket_Player extends Player
{
    String str;

    Cricket_Player(String a, int b, String c)
    {
        super(a, b);
        str=c;
    }
    void printinfo()
    {
        super.printinfo();
        System.out.println("Type:" +str);
    }
}

class Football_Player extends Player
{
    String str;

    Football_Player(String a, int b, String c)
    {
        super(a, b);
        str=c;
    }
    void printinfo()
    {
        super.printinfo();
        System.out.println("Type:" +str);
    }
}

class Hockey_Player extends Player
{
    String str;

    Hockey_Player(String a, int b, String c)
    {
        super(a, b);
        str=c;
    }
    void printinfo()
    {
        super.printinfo();
        System.out.println("Type:" +str);
    }
}

class players
{
    public static void main(String[] args)
    {
       Cricket_Player cricket= new Cricket_Player("Aman", 20, "Badminton");
       Football_Player football= new Football_Player("Messi", 35, "Football");
       Hockey_Player hockey= new Hockey_Player("Sachin", 50, "Cricket");
       cricket.printinfo();
       football.printinfo();
       hockey.printinfo();
    }
}
