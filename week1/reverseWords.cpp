// class Solution {
// public:
//   string reverseWords(string s) {
//     istringstream is_string(s);
//     string my_word;
//     string ans;
//     while(is_string >> my_word){
//         reverse(my_word.begin(),my_word.end());
//         ans += my_word+" ";
//     }
//     ans.erase(prev(ans.end()));
//     return ans;
//   }
// };
// better solution:
class Solution {
public:
  string reverseWords(string s) {
    string word;
    string d = ""; 
    stringstream iss(s); 
    while (iss >> word) {
      reverse(word.begin(),word.end());
      d += word+' ';
    }
    d.pop_back();
    return d;
  }
};
