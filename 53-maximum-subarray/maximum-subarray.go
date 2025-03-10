func maxSubArray(nums []int) int {
    maxx := -1000000
    sum := 0
    for i := 0; i < len(nums); i++{
        sum += nums[i]
        if sum > maxx{
            maxx = sum
        }
        if sum < 0{
            sum = 0
        }
    }
    return maxx
}