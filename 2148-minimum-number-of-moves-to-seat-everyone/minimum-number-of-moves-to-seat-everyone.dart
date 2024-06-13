class Solution {
  int minMovesToSeat(List<int> seats, List<int> students) {
    seats.sort();
    students.sort();
    int n = seats.length;
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += (seats[i] - students[i]).abs();
    }
    return ans;
  }
}