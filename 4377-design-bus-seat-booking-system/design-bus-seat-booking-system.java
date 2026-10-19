class BusBooking {
    int[][] seat;
    int totalTime = 0;
    int minTime = 0; 

   /*
        0  0  0 0
       a1 b1 c1 d1 
       1  1  1  1
       a2 b2 c2 d2 
   */

    public BusBooking(int n) {
        seat = new int[n][4];
    }
    
    public void toggle(String seats) { 
        int col = seats.charAt(0) - 'A';
        int row = Integer.parseInt(seats.substring(1));
        
        if(seat[row-1][col] != 0) {
            totalTime -= seat[row-1][col];
            seat[row-1][col] = 0;
            minTime--;
        }else {
            minTime++;
            if(col == 0) { // A 
                if(seat[row-1][1] != 0) { // adj seat booked
                    seat[row-1][0] = 3;
                    totalTime += 3;
                }else { // adj seat not booked
                    seat[row-1][0] = 1;
                    totalTime ++;
                }
            }else if(col == 3) {
                if(seat[row-1][2] != 0) {
                    totalTime += 3;
                    seat[row-1][3] = 3;
                }else {
                    seat[row-1][3] = 1;
                    totalTime++;
                }
            }else {
                seat[row-1][col] = 1;
                totalTime++;
            }
        }
    }
    
    public int getTotalTime() {
        return totalTime;
    }
    
    public int getMinTime() {
        return minTime;
    }
}

/**
 * Your BusBooking object will be instantiated and called as such:
 * BusBooking obj = new BusBooking(n);
 * obj.toggle(seat);
 * int param_2 = obj.getTotalTime();
 * int param_3 = obj.getMinTime();
 */