class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& v) {
      unordered_map<string,vector<string>> s;
      for(auto x: v){
          string t = x;
          sort(t.begin(), t.end());
          s[t].push_back(x);
      }
      vector<vector<string> > mp;
      for (auto p : s) { 
            mp.push_back(p.second);
        }
        return mp;  
    }
};
