class Solution {
public:
  string longestCommonPrefix(vector<string>& strs) {
  string prefix = "";
  if(strs.empty())
    return prefix;

  int size = strs.size();
  int swl = strs[0].size(); //swl:shortest word length
  
  for(int i = 1; i < size; i++) {
    if(strs[i].size() < swl) {
      swl = strs[i].size();
    }
  }
        
  for(int j = 0; j < swl; j++) {
    for(int i = 0; i < size -1; i++) {
      if(strs[i][j] != strs[i+1][j])
        return prefix;
      }
      if (j < swl)
        prefix += strs[0][j];
  }
  // cout << prefix << endl;
  return prefix;
  }
};
