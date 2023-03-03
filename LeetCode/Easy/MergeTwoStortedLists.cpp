/**
 * @file MergeTwoStortedLists.cpp
 * 
 * Definition for singly-linked list
 * struct ListNode {
 *      int val;
 *      ListNode *next;
 *      ListNode() : val(0), next(nullptr) {}
 *      ListNode(int x) : val(x), next(nullptr) {}
 *      ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * 
 * Plan:
 *      Maintain a head and tail pointer on the merged linked list.
 * 
 *      Then choose the head of the merged linked list by comparing the first node of both linked lists.
 *      For all subsequent nodes in both lists, you can choose the smaller current node and link
 *      it ot the tail of the merged list, and moving the current pointer of that list one step forward.
 * 
 *      You keep doing this while there are some remaining elements in both the lists.
 * 
 *      If there are still some elements in only one of the lists, you link this remaining list to the tail of the merged list.
 * 
 *      Initially, the merged linked list is NULL.
 * 
 *      Compare the value of the first two nodes and make the node with the smaller value the head node of the merged linked list.
 * 
 *      Since it's the first and only node in the merged list, it will also be the tail.
 * 
 *      Then move head1 one step forward.
 * 
 *      Time Complexity O(n + m)
 * 
 */

#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
    void AddNode(int x) {
        ListNode* tmp = new ListNode;
        tmp->val = x;
        tmp->next = nullptr;

        if (head == nullptr) {
            
        }
    }
};

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            
        }
};

int printListVals(ListNode* rootNode)
{

    while (rootNode->next != nullptr) {
        std::cout << rootNode->val << std::endl;
        rootNode = rootNode->next;
    }
    std::cout << rootNode->val << std::endl;
}

int main()
{
    ListNode a;

    a.



    return 0;
}