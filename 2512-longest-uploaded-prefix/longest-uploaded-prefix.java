class LUPrefix {
    int elem = 0;
    HashSet<Integer> hs = new HashSet<>();
    public LUPrefix(int n) {
       
    }
    
    public void upload(int video) {
        hs.add(video);
        while(hs.contains(elem + 1)) {
            elem++;
        }
    }
    
    public int longest() {
        return elem;
    }
}

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix obj = new LUPrefix(n);
 * obj.upload(video);
 * int param_2 = obj.longest();
 */