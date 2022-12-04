/*
Example 1:

Input:
S = "aeroplane"
Output: alanepero
Explanation: alanepero  
The vowels and cosonants are arranged 
alternatively with vowels shown in bold.
Also, there's no lexicographically smaller
string possible with required conditions.


Example 2:

Input: 
S = "mississippi"
Output: -1
Explanation: The number of vowels is 4 
whereas the number of consonants is 7.
Hence, there's no way to arrange the
vowels and consonants alternatively.
*/

    public:
    string rearrange (string S, int N)
    {
        // your code here
         vector<int> vow(26,0) , cons(26);
        int c1=0,c2=0;
        for(auto &it : S)
        {
            if(it=='a' || it=='i' || it=='e' || it=='o' || it=='u') vow[it-'a']++;
            else 
            {
                c2++;
                cons[it-'a']++;
                continue;
            }
            c1++;
        }
        if(abs(c1-c2)>1) return "-1";
        string ans;
        int l=0,r=0;
        bool f=true;
        while(l<26 && vow[l]==0) l++;
        while(r<26 && cons[r]==0) r++;
        if(c1>c2) 
        {
            ans+= (char)('a'+l);
            vow[l]--;
            f=false;
        }
        else if(c2>c1)
        {
            ans+= (char)('a'+r);
            cons[r]--;
        }
        while(l<26&& r<26)
        {
         while( l<26 && vow[l]==0) l++;
         while(r<26 && cons[r]==0) r++;
          if(f) 
          {
            ans+= (char)('a'+l);
            vow[l]--;
          }
          else 
          {
             ans+= (char)('a'+r);
            cons[r]--;
          }
          f= !f;
        }
        return ans;
    }
};
