class MyHashMap {
  struct MyHashMapTreeNode {
    int key, value;
    MyHashMapTreeNode* left, *right;
    MyHashMapTreeNode(int k, int v) : key(k), value(v), left(NULL), right(NULL) {}
    ~MyHashMapTreeNode() {}
  };

  MyHashMapTreeNode* insert(MyHashMapTreeNode* root, int key, int value) {
    if (root == NULL) 
      return new MyHashMapTreeNode(key, value);

    if (root->key == key) 
      root->value = value;
    else if (root->key < key) 
      root->right = insert(root->right, key, value);
    else 
      root->left = insert(root->left, key, value);

    return root;
  }
  // recursive approach
  MyHashMapTreeNode* search(MyHashMapTreeNode* root, int key) {
    if (root == NULL) 
      return NULL;
    if (root->key == key) 
      return root;
    else if (root->key > key) 
      return search(root->left, key);
    else 
      return search(root->right, key);
  }

  MyHashMapTreeNode* del(MyHashMapTreeNode* root, int key) {
    if (root == NULL) 
      return NULL;
    if (root->key < key) 
      root->right = del(root->right, key);
    else if (root->key > key) 
      root->left = del(root->left, key);
    else {
      if (root->left == NULL) {
        MyHashMapTreeNode* temp = root;
        root = root->right;
        delete temp;
      }
      else if (root->right == NULL) {
        MyHashMapTreeNode* temp = root;
        root = root->left;
        delete temp;                
      }
      else {
        MyHashMapTreeNode* target = findmin(root->right);
        root->key = target->key;
        root->value = target->value;
        root->right = del(root->right, target->key);
      }
    }
    return root;
  }

  MyHashMapTreeNode* findmin(MyHashMapTreeNode* root) {
    while (root->left) 
      root = root->left;
    return root;
  }

  MyHashMapTreeNode* root;
public:
  /** Initialize your data structure here. */
  MyHashMap() {
    root = NULL;
  }

  /** value will always be non-negative. */
  void put(int key, int value) {
    root = insert(root, key, value);
  }

  /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
  int get(int key) {
    MyHashMapTreeNode* node = search(root, key);
    if (node==NULL) 
      return -1;
    else
      return node->value;
  }

  /** Removes the mapping of the specified value key if this map contains a mapping for the key */
  void remove(int key) {
    root = del(root, key);
  }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
