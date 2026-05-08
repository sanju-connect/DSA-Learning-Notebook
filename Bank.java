class account {
    public String name;
    protected String email;
    private String password;

    public String getPassword() {
        return this.password;
    }

    public void setPassword(String Pass) {
        this.password = Pass;
    }
}


public class Bank {
    public static void main(String[] args) {
        account account1 = new account();
        account1.name = "Sanjay Ghosh";
        account1.email = "sanjay.ghosh.connect@gmail.com";
    }
}