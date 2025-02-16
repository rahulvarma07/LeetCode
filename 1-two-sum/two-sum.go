func twoSum(nums []int, target int) []int {
    myMap := make(map[int]int)
    var ans = []int{0,0}
    for i := 0; i < len(nums); i++{
        var check int = target-nums[i]
        val, found := myMap[check]
        if found{
            ans[0] = val
            ans[1] = i
            return ans
        }
        myMap[nums[i]] = i
    }
    return ans
}