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
};

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            // if list1 is NULL return list2
            if (list1 == NULL)
                return list2;

            // if list2 happens to be null return list1
            if (list2 == NULL)
                return list1;
            
            ListNode* ptr = list1;
            if (list1->val > list2->val) {
                ptr = list2;
                list2 = list2->next;
            } else {
                list1 = list1->next;
            }

            ListNode *curr = ptr;

            // Loop till one of the lists doesn't reach NULL
            while (list1 && list2) {
                if (list1->val < list2->val) {
                    curr->next = list1;
                    list1 = list1->next;
                } else {
                    curr->next = list2;
                    list2 = list2->next;
                }
                curr = curr->next;
            }

            // Adding remaining elements of bigger list
            if (!list1)
                curr->next = list2;
            else
                curr->next = list1;

            return ptr;
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