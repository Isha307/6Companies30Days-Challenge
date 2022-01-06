class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size(),maxi=0;
        vector<int> prefix(n,0),suffix(n,0);
        for(int  i= n-2;i>=0;i--) 
            if(arr[i]>arr[i+1]) suffix[i] = suffix[i+1]+1;
        for(int i=0;i<n;i++){
            if(i>0 && arr[i]>arr[i-1]) prefix[i] = prefix[i-1]+1;
            if(prefix[i] && suffix[i]) maxi = max(maxi, prefix[i]+suffix[i]+1);
        }
        return maxi;
    }
};
