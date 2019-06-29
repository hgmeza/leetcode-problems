class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.length()!=t.length()) return false;
      int a[26] = {0};
      for(auto & ch: s) a[ch-'a']++;
      for(auto & ch: t) {
        a[ch-'a']--;
        if(a[ch-'a']<0) return false;
      }
      return true;                      
    }
};
