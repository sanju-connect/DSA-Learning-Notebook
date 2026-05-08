abstract class animal {
    abstract void walk();
}

class horse extends animal {
    public void walk() {
        System.out.println("Walks on Four Legs");
    }
}

class chicken extends animal {
    public void walk() {
        System.out.println("Walks on Two Legs");
    }
}

public class abstraction {
    public static void main(String[] args) {
        horse Horse = new horse();
        Horse.walk();
    }
}