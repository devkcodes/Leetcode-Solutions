class Solution {
public:
bool isPalindrome(ListNode* head) {

    //since we know how to check whether array is palindrome or not
    //we are using vector to store value of each node in it.
    vector<int> vec;
    ListNode *temp = head;
    while(temp!=NULL)
    {
        vec.push_back(temp->val);
        temp = temp->next;
    }
    
    //now we are checking whether the vector is palidrome or not .
    
    int s=0;
    int e =vec.size()-1;
    while(s<e)
    {
        if(vec[s] != vec[e])
            return false;
        s++;
        e--;
    }
    return true;
}
};