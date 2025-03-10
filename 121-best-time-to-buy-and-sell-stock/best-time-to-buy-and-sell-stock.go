func maxProfit(prices []int) int {
    ans := 0
    maxx := prices[0]
    for i := 1; i < len(prices); i++{
        if ans < (prices[i]-maxx){
            ans = (prices[i]-maxx)
        }
        if prices[i] < maxx{
            maxx = prices[i]
        }
    }
    return ans
}