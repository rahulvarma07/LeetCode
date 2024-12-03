func hammingWeight(n int) int {
    var ans int = 0
    for n > 0{
        ans += (n&1)
        n = (n>>1)
    }
    return ans
}