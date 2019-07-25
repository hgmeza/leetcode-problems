class Solution {
public:
  bool isAnagram(unordered_map<char,int> umap1, unordered_map<char,int> umap2) {
    for(auto e : umap1)
      if(umap1[e.first] != umap2[e.first])
        return false;
    return true;
  }
  
  vector<int> findAnagrams(string s, string p) {
    vector<int> result;
    unordered_map<char,int> umap1, umap2;
    int slen = s.length(), plen = p.length();

    if(plen > slen)
      return result;

    for(auto ch : p)
      umap1[ch] += 1;

    for(int index = 0, index2 = 0; index2 <= slen; index2++) {
      if(index2-index == plen) {
        if(umap1.size() == umap2.size() && isAnagram(umap1, umap2))
          result.push_back(index);
        umap2[s[index2]] += 1; umap2[s[index]] -= 1;

        if(umap2[s[index]] == 0)
          umap2.erase(s[index]); index++;
     } else {
        umap2[s[index2]] += 1;
      }  
    }

    return result;
  }
};
