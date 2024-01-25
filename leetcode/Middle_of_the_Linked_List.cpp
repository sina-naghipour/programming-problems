#include <iostream>
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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp;
        temp = head;
        int size = 0;
        while(temp->next != nullptr){
            temp = temp->next;
            size++;
        }

        for (int i = 0; i < size/2; i++)
        {
            head = head->next;
        }
        if(size%2 == 1)
            return head->next;
        return head;   
    }
};


int main(){
    Solution solution = Solution();
    ListNode* head;
    head->val = 1;
    ListNode* two;
    two->val = 2;
    ListNode* three;
    three->val = 3;
    ListNode* four;
    four->val = 4;
    ListNode* five;
    five->val = 5;

    head->next = two;
    two->next = three;
    three->next = four;
    four->next = five;

    cout << solution.middleNode(head);
    return 0;
}