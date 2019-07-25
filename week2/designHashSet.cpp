class MyHashSet {
private:
  std::vector<int> bucketArray[1000] = {};

  int MyHashFunction(int n){
    return n % 5;
  }
  public:
  /** Initialize your data structure here. */
  MyHashSet() {}

  void add(int key) {
    int bArrayIdx = MyHashFunction(key);
    if(!this->contains(key))       
      bucketArray[bArrayIdx].push_back(key);
  }

  void remove(int key) {
    if (this->contains(key)){
      int bArrayIdx = MyHashFunction(key);
      auto it = std::find(bucketArray[bArrayIdx].begin(), bucketArray[bArrayIdx].end(),key);
      bucketArray[bArrayIdx].erase(it);                               
    }       
  }

  /** Returns true if this set contains the specified element */
  bool contains(int key) {
    int bArrayIdx = MyHashFunction(key);
    bucketArray[bArrayIdx];
    auto it = std::find(bucketArray[bArrayIdx].begin(), bucketArray[bArrayIdx].end(),key);
    return it != bucketArray[bArrayIdx].end();
  }
};
