func canMakeSubsequence(str1 string, str2 string) bool {
    var j int = 0
    for i:=0; i < len(str1) && j < len(str2);i++{
        if str1[i] == str2[j]{
            j++
        }else{
            var ch rune = 'a'
            if str1[i] != 'z' {
                ch = rune(str1[i]+1)
            }
            if ch == rune(str2[j]){
                j++
            }
        }
    }
    return j >= len(str2)
}