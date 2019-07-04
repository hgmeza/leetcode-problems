class Solution {
public:
  bool isIsomorphic(string s, string t) {
    unordered_map<char, char> sMap, tMap;
    if(s.length() != t.length())
      return false;
    for(int i = 0; i < s.length(); i++){
      if(sMap.find(s[i]) == sMap.end() && tMap.find(t[i]) == tMap.end()){
        sMap[s[i]] = t[i];
        tMap[t[i]] = s[i];
      } else {
        if(sMap[s[i]] != t[i] || tMap[t[i]] != s[i]){
          return false;
        }
      }
    }
    return true;
  }
};
