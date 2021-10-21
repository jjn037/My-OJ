//
// Created by jianan on 2021/10/21.
//

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
    int reverse_node(ListNode* node){
        ListNode* pre = NULL;
        ListNode* cur = node;
        int length = 0;
        while(cur != nullptr){
            ListNode* tmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = tmp;
            length ++;
        }
        node = pre;
        return length;
    }

    void reorderList(ListNode* head) {
        if(head == nullptr) return ;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        int length = reverse_node(dummy);
        ListNode* new_head = new ListNode(0);
        ListNode* head_dummy = new_head;
        for(int i = 0; i < length / 2; i++){
            head_dummy->next = head;
            head = head->next;
            head_dummy = head_dummy->next;
            head_dummy->next = dummy;
            dummy = dummy->next;
            head_dummy = head_dummy->next;
        }
        if(length % 2 == 1){
            head_dummy->next = head->next;
        }
        else
            head_dummy->next = nullptr;
        head = new_head->next;
    }
};