class MyHashSet {
public:
    vector<bool> hashSet;
    MyHashSet() {
        hashSet.resize(1e6+1);
    }
    
    void add(int key) {
        hashSet[key] = 1;
    }
    
    void remove(int key) {
        hashSet[key] = 0;
    }
    
    bool contains(int key) {
        return hashSet[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */