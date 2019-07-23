class Solution {
public:
  int uniqueMorseRepresentations(vector<string>& words) {
    string code[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    auto it = words.begin();
    set<string> stringSet;
    for(it; it != words.end(); it++) {
      string word = *it;
      string s="";

      for(int i = 0; i < word.length(); i++) 
        s += code[word[i]-'a'];
      stringSet.insert(s);
    }
    return stringSet.size();
  }
};
