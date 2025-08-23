#include<iostream>
#include<vector>

using namespace std;

struct ListNode {
          int val;
          ListNode *next;
          ListNode() : val(0), next(nullptr) {}
          ListNode(int x) : val(x), next(nullptr) {}
          ListNode(int x, ListNode *next) : val(x), next(next) {}
      };
  
ListNode* mergeKLists(vector<ListNode*>& lists) {
    if (lists.empty()) return nullptr;
    if (lists.size() == 1) return lists[0];
    
    ListNode* mergedList = nullptr;
    ListNode** tail = &mergedList;
    
    while (true) {
        int minIndex = -1;
        for (int i = 0; i < lists.size(); ++i) {
            if (lists[i] != nullptr && (minIndex == -1 || lists[i]->val < lists[minIndex]->val)) {
                minIndex = i;
            }
        }
        
        if (minIndex == -1) break; // All lists are empty
        
        *tail = lists[minIndex];
        tail = &((*tail)->next);
        lists[minIndex] = lists[minIndex]->next;
    }
    
    return mergedList;
}

int main() { 

    vector<ListNode*> lists;
    // Example: Creating 3 sorted linked lists
    ListNode* list1 = new ListNode(1, new ListNode(4, new ListNode(5)));
    ListNode* list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
    ListNode* list3 = new ListNode(2, new ListNode(6));
    
    lists.push_back(list1);
    lists.push_back(list2);
    lists.push_back(list3);
    
    ListNode* mergedList = mergeKLists(lists);
    
    // Print merged list
    while (mergedList) {
        cout << mergedList->val << " ";
        mergedList = mergedList->next;
    }
    
    return 0;
}