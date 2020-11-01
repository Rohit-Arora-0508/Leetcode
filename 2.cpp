/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        
       
           int carry=0;
        ListNode *head=NULL;
        ListNode *tail=NULL;
           while(l1!=NULL|| l2!=NULL)
           {
               ListNode*temp=new ListNode();
               if(l1 && l2)
               {
                   temp->val=(l1->val+l2->val+carry)%10;
                   carry=abs(l1->val+l2->val+carry)/10;
                   l1=l1->next;
                   l2=l2->next;
               }
               
              else if(l1)
              {
                  temp->val=(l1->val+carry)%10;
                   carry=abs(l1->val+carry)/10;
                   l1=l1->next;
              }
               else if(l2)
               {
                   temp->val=(l2->val+carry)%10;
                   carry=abs(l2->val+carry)/10;
                   l2=l2->next;
               }
              
               if(!tail )
               {
                   if(head)
                   {tail=temp;head->next=tail;}
               }
               else 
               {tail->next=temp;tail=tail->next;}
                if(!head)
                { head=temp;}
           }
        if(carry==1)
        {
             ListNode*temp=new ListNode(1);
            if(!head->next)
            {head->next=temp;}
            else{
             tail->next=temp;tail=tail->next;
            }
        }
        return head;
    }
};
