package bank;

class account {
    public String name;
    protected String email;
    private String password;

    public String getPassword(String pass) {
        return this.password;
    }

    public String setPassword() {
        return this.password;
    }
    public class Bank {
    public static void main(String[] args) {
        account account1 = new account();
        account1.name = "Rishav";
        account1.email = "sanjay.ghosh.connect@gmail.com";
        account1.setPassword("abcd");
        System.out.println(account1.getPassword);
    }
}
}