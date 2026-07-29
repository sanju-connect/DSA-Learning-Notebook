class student {
    String name;
    int age;

    student() {
        name = "Sanju";
        age = 18;
    }
    void show()
    {
        System.out.println("name="+name);
        System.out.println("age="+age);
    }
    public static void main(String[] args) {
        student ob = new student();
        student ob2 = new student();
        ob.name="anurag";
        ob.age=20;
        ob.show();
    }

}
