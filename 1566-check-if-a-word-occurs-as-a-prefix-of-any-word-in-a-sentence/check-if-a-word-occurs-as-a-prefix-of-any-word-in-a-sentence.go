func isPrefixOfWord(sentence string, searchWord string) int {
    ans := 0
    str := ""
    for i := 0; i < len(sentence); i++{
        if searchWord == str{
            return ans+1
        }
        if sentence[i] == ' '{
            str = ""
            ans++
        }else{
            str += string(sentence[i])
        }
    }
    if searchWord == str {
        return ans+1
    }
    return -1
}