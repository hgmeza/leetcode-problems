class Solution {
public:
  int firstUniqChar(string s) {
    int firstIdx = 0;
    int freq[26] = {0};
    
    for(char c : s)
      freq[c - 'a']++;
    
    for(char c : s) {
      if(freq[c - 'a'] == 1)
        return firstIdx;
      firstIdx++;
    }
    return -1;
  }
};
