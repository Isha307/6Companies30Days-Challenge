class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int count = 0;
        int mul=1, l=0;
        for(int r=0;r<n;r++){
            mul *= a[r];
            while(mul>=k && l<r)
              mul /= a[l++];
            if(mul<k)
              count += r-l+1;
        }
        return count;
    }
};
