class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
          vector<bool>vis(1000);//to keep record of the visited number to avoid duplicates
      unordered_map<int,int>mymap;//to count the number so that we can match it with other set of vector given
      vector<int>ans;
      for(int i=0;i<nums1.size();i++)
        mymap[nums1[i]]++;
      for(int i=0;i<nums2.size();i++)
      {
        if(mymap.find(nums2[i])!=mymap.end()&&!vis[nums2[i]])// if we found nums2 element in map that means it is present in nums1. then we have to check if it is visited then we have to skip it to avoid duplicates otherwise add to the vector ans turn visited to be true.
          ans.push_back(nums2[i]),vis[nums2[i]]=true;
      }return ans;
        
    }
    
};