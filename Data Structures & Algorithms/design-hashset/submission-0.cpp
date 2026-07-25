class MyHashSet {
private:
    int numBuckets;
    vector<list<int>> buckets;

    int hash(int key) {
        return key % numBuckets;
    }

public:
    MyHashSet() {
        numBuckets = 1000;
        buckets.resize(numBuckets);
    }
    
    void add(int key) {
        int idx = hash(key);
        for (int val : buckets[idx]) {
            if (val == key) return; // Already exists
        }
        buckets[idx].push_back(key);
    }
    
    void remove(int key) {
        int idx = hash(key);
        buckets[idx].remove(key); // Standard list remove
    }
    
    bool contains(int key) {
        int idx = hash(key);
        for (int val : buckets[idx]) {
            if (val == key) return true;
        }
        return false;
    }
};