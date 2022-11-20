class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
          int m = flowerbed.size() , count=0 , i=0;

	while(i<m-1)
	{

	//checking two adjacent position and maintaining variable i accordingly 
    if(!flowerbed[i] && !flowerbed[i+1]){
        count++;
        i += 2;
    }
    else if(flowerbed[i]==1)
        i += 2;
    else if(flowerbed[i+1]==1)
        i += 3;
		
}
    
// checking for last index in case n is odd
if(i<m && flowerbed[i]==0)
    count++;

    
return count>=n;
        
    }
};