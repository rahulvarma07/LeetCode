class SeatManager {
    TreeSet<Integer> treeSet = new TreeSet<>();
    int cnt;
    int seats;
    public SeatManager(int n) {
        this.seats = n;
        cnt++;
    }
    
    public int reserve() {
        if(treeSet.isEmpty()) {
            return cnt++;
        }else {
            int ans = treeSet.first();
            treeSet.remove(ans);
            return ans;
        }
    }
    
    public void unreserve(int seatNumber) {
        treeSet.add(seatNumber);
    }
}

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager obj = new SeatManager(n);
 * int param_1 = obj.reserve();
 * obj.unreserve(seatNumber);
 */