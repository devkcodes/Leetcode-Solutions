class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        //result vector
        vector<int> result; 
        
        //we take a map to store Sum - current num, 
        //thus, we can find the other number in map if sum exists. 
        map<int, int> sumNumber; 
        map<int, int>::iterator it;
        
        for(int i=0; i<nums.size(); i++)
        {
            it = sumNumber.find(nums[i]);
            //find and push in map. 
            if(it == sumNumber.end())
            {
                //insert in map 
                sumNumber[target - nums[i]] = i;
            }
            else
            {
                result.push_back(sumNumber[nums[i]]);
                result.push_back(i);
                return result; 
            }
        }
        
        //return empty array
        return result;
    }
};