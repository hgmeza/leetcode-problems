class Solution {
public:
  vector<string> uncommonFromSentences(string A, string B) {
    unordered_map<string, int> freqMap;
    string mergedSentences =  A + " " + B;
    stringstream ss(mergedSentences);
    string word;
    while(ss >> word) {
      freqMap[word]++;
    }
    vector<string> ans;
    auto it = freqMap.begin();
    while(it != freqMap.end()) {
      if(it->second == 1)
        ans.push_back(it->first);
      ++it;
    }
    return ans;
  }
};
