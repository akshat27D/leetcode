//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	   // void solution(string s , int l , int h , vector<string> ans){
	   //     if(l==h){
	   //         ans.push_back(s);
	   //     }
	   //     for(int i=l;i<=h;i++){
	   //         swap(s[l],s[i]);
	   //         solution(s,l+1,h,ans);
	   //         swap(s[l],s[i]);
	   //     }
	   //     return ans;
	        
	   // }
		vector<string>find_permutation(string s)
		{
		    // Code here there
		     sort(s.begin(),s.end());
            vector<string>v;
            v.push_back(s);
          while(next_permutation(s.begin(),s.end())){
               v.push_back(s);
           }
           return v;
		    
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends