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
    void reverse_node(ListNode* node){
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
//        return length;
    }

    void reorderList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return;
        ListNode* pre = head;
        ListNode* cur = pre;
        while(cur->next != nullptr && cur->next->next != nullptr){
            pre = pre->next;
            cur = cur->next->next;
        }
        ListNode* mid = pre->next;
        pre->next = NULL;
        reverse_node(mid);
        // cur = head;
        ListNode* cur = head;
        pre = head;
        while (pre != nullptr && cur != nullptr)
        {
            ListNode* tmp = cur->next;
            cur->next = pre->next;
            pre->next = cur;
            pre = pre->next->next;
            cur = tmp;
        }
    }
};