class MyHashSet {
public:
    /** Initialize your data structure here. */
    vector<bool> ans;
    MyHashSet() {
        vector<bool> hm(1000001, 0);
        ans = hm;
    }
    
    void add(int key) {
        ans[key] = 1;
    }
    
    void remove(int key) {
        ans[key] = 0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return ans[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
