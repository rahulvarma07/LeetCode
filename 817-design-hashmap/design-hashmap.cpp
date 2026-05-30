class MyHashMap {
public:
    int n = 1e6+2;
    vector<int> myMap;
    MyHashMap() {
        myMap = vector<int>(n, -1);
    }
    
    void put(int key, int value) {
        myMap[key] = value;
    }
    
    int get(int key) {
        return myMap[key];
    }
    
    void remove(int key) {
        myMap[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */