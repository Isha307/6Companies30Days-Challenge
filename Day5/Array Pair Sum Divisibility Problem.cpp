class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n= nums.size(),rem,freq;
        if(n%2!=0) return false;
        unordered_map<int,int> m;
        for(auto x:nums)
           m[x%k]++;
        if(m[0] %2 != 0) 
            return false;
        for(auto x : m)
        {   rem = x.first;
            freq = x.second;
            if(rem!= 0 && m[k-rem] != freq)
                return false;
        }
        return true;
        
    }
};
