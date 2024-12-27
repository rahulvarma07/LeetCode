func searchMatrix(matrix [][]int, target int) bool {
    n := len(matrix)
    m := len(matrix[0])

    for i := 0; i < n; i++ {
        if target >= matrix[i][0] && target <= matrix[i][m-1] {
            low := 0
            high := m-1
            for low <= high {
                mid := (low + high)/2
                if matrix[i][mid] == target{
                    return true
                }else if matrix[i][mid] < target{
                    low = mid+1
                }else{
                    high = mid-1
                }
            }
        }
    }
    return false
}