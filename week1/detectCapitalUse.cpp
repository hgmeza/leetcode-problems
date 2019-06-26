class Solution {
public:
  bool detectCapitalUse(string word) {
    bool first_upper = toupper(word[0]) == word[0];
    int lower_cnt = 0, upper_cnt = 0;
    
    for(int i = 1; i < word.size(); ++i) {
      if(toupper(word[i]) != word[i]) ++lower_cnt;
      else ++upper_cnt;
      if(upper_cnt > 0 && (!first_upper || lower_cnt > 0))
          return false;
    }
    return true;
  }
};
