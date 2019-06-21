class Solution {
public:
  vector<int> sortArrayByParity(vector<int>& A) {
    // vector<int> ans;
    // for(int i = 0; i < A.size(); i++){
    //   if(A[i] % 2 == 0)
    //     ans.push_back(A[i]);
    // }
    // for(int i = 0; i < A.size(); i++){
    //   if(A[i] % 2 != 0)
    //     ans.push_back(A[i]);
    // }
    // return ans;
    // More efficient solution:
    vector<int> even, odd;
    for(int i = 0; i < A.size(); i++){
      if(A[i] % 2 == 0){
        even.push_back(A[i]);
      } else {
        odd.push_back(A[i]);
      }
    }
    even.insert(even.end(), odd.begin(), odd.end());
    return even;
  }
};