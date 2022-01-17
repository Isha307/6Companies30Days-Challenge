vector<string>ans;
    string s="";
	for(int i=1;i<=N;i++){
	    int a=i;
	    while(a){
	        int b= a%2;
	        s=to_string(b)+s;
	        a=a/2;
	    }
	    ans.push_back(s);
	    s="";
	}
	return ans;
