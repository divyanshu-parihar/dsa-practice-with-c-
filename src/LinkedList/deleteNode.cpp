#include<bits/stdc++.h>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* ptr = node->next;
        node->val = ptr->val;
        node->next = ptr->next;
        
        delete ptr;
    }
};