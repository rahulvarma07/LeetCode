class ATM {

    int[] denominations = {20, 50, 100, 200, 500};
    int[] deposits =  new int[5];

    public ATM() {
        
    }
    
    public void deposit(int[] banknotesCount) {
        for(int i = 0; i < banknotesCount.length; i++) {
            deposits[i] += banknotesCount[i];
        }
    }
    
    public int[] withdraw(int amount) {
        int[] ans = new int[5];
        for(int i = 4; i >= 0 && amount > 0; i--) {
            int minNotes = Math.min(amount/denominations[i], deposits[i]);
            amount -= (minNotes * denominations[i]);
            ans[i] = minNotes;
        }
        if(amount > 0) {
            ans = new int[]{-1};
        }else {
            for(int i = 0; i < ans.length; i++) deposits[i] -= ans[i];
        }
        return ans;
    }
    
}

/**
 * Your ATM object will be instantiated and called as such:
 * ATM obj = new ATM();
 * obj.deposit(banknotesCount);
 * int[] param_2 = obj.withdraw(amount);
 */