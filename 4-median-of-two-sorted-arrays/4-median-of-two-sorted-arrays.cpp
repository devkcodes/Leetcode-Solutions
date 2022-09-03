class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size=nums1.size()+nums2.size();
        if(size==0){
            return double(0);
        } else if(size==1){
            if(nums1.size()==1){
                return double(nums1[0]);
            } else{
                return double(nums2[0]);
            }
        }
        
        int i=0;
        int j=0;
        vector<int> med;
        
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                med.push_back(nums1[i]);
                i++;
            } else{
                med.push_back(nums2[j]);
                j++;
            }
        }
        
        if(i==nums1.size()){
            while(j<nums2.size()){
                med.push_back(nums2[j]);
                j++;
            }
        }
        
        if(j==nums2.size()){
            while(i<nums1.size()){
                med.push_back(nums1[i]);
                i++;
            }
        }
        
        for(int i: med){
            cout<<i<<" ";
        }
        
        if(size%2 == 1)
            return double(med[size/2]);
        else{
            return double(med[size/2] + med[size/2-1])/2;
        }
        
    }
};