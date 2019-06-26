class Solution {
public:
  int titleToNumber(string s) {
    if(s.empty())
        return 0;
    int num = 0;
    int col = 0;
    
    for(int i = s.size() - 1;i >= 0; i--){
      num = num +(s[i]-64)*pow(26,col); 
      col++;
    }
    return num;
  }
};
