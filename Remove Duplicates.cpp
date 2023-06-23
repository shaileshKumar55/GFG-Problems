  int n = S.size();
	    
        unordered_map<char, bool> m;
	    
	    int i =0,j = 0;
	    
	    char temp;
	    
	    while(S[j]!='\0')
	    {
	        temp = S[j];
	        if(m[temp]==0)
	        {
	            m[temp]=1;
	            S[i] = S[j];
	            i++;
	        }
	        j++;
	    }
	    S.resize(i);
	    return S;
