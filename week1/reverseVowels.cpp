bool isVowels(char c) {
  switch(tolower(c)) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      return true;
    default:
      return false;
  }
}

class Solution {
public:
  string reverseVowels(string s) {
  int front = 0, rear = s.size()-1;
  for (int i = front; i < rear; i++) {
    if (isVowels(s[i])) {
      front = i;
      for (int j = rear; j > front; j--) {
        if (isVowels(s[j])) {
          rear = j;
          swap(s[front], s[rear]);
          break;
        }
      }
      rear--;
    }
  }
  return s;
  }
};