/*idea is that we will use two pointer, one at head(p) and other at nth distance away from head(n) and 
then we move ahead both pointer node by node till the next (n) pointer becomes NULL. then p 
pointer will give us that node which is nth distace away from end node*/
// fp is pointer previouse to p pointer so we can remove p node easily
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int x) {
        ListNode*p=head,*n=head;  
        while(x--)
        n=n->next;
        if(n==NULL) //n becomes null when we have to delete the first node(head) itself(corner case)
            head=head->next;
        else{
            ListNode*fp;
            while(n){
            fp=p;
            p=p->next;
            n=n->next;
        }
        fp->next=p->next;
        }
        delete p;
      return head;
    }
};