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
    ListNode* removeElements(ListNode* head, int val) {

        if(head==nullptr)
        return nullptr;


        ListNode* sentinel=new ListNode;
        sentinel->next=head;
        ListNode* temp=sentinel;


        while(temp && temp->next!=nullptr){

            if(temp->next->val==val){
                ListNode* Todelete=temp->next;
                temp->next=temp->next->next;
                delete Todelete;

            }

            else
            temp=temp->next;
        }

        return sentinel->next;

        
    }
};