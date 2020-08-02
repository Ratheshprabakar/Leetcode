class MyHashSet {
public:
    int *hash_set;
    /** Initialize your data structure here. */
    MyHashSet() {
        hash_set=(int *)calloc(1000001,sizeof(int));    
    }
    
    void add(int key) {
        hash_set[key]=1;
    }
    
    void remove(int key) {
        hash_set[key]=0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return (hash_set[key]==1);
        
    }
};
