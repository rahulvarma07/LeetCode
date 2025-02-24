func majorityElement(nums []int) int {
    ans := nums[0]
    cnt := 1
    for i := 0; i < len(nums); i++{
        if(nums[i] == ans){
            cnt++
        }else{
            cnt--
        }

        if(cnt == 0){
            ans = nums[i]
            cnt = 1
        }
    } 
    return ans  
}