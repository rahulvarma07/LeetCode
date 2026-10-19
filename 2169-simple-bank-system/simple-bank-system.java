class Bank {

    long[] balance;
    int n;

    public Bank(long[] balance) {
        this.balance = balance;
        n = balance.length;
    }
    
    public boolean isValidAccountNumber(int account) {
        return (account >= 1 && account <= n);
    }

    public boolean transfer(int account1, int account2, long money) {
       if(!isValidAccountNumber(account1) || !isValidAccountNumber(account2)) return false;
       if(balance[account1-1] < money) return false;
       balance[account1-1] -= money; // removing money from account 1
       balance[account2-1] += money; // addong money to account 2
       return true;
    }
    
    public boolean deposit(int account, long money) {
        if(!isValidAccountNumber(account)) return false;
        balance[account-1] += money;
        return true;
    }
    
    public boolean withdraw(int account, long money) {
        if(!isValidAccountNumber(account)) return false;
        if(balance[account-1] < money) return false;
        balance[account-1] -= money; // removing 
        return true;
    }
}

/**
 * Your Bank object will be instantiated and called as such:
 * Bank obj = new Bank(balance);
 * boolean param_1 = obj.transfer(account1,account2,money);
 * boolean param_2 = obj.deposit(account,money);
 * boolean param_3 = obj.withdraw(account,money);
 */