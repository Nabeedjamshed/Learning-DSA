#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    Node* insert(int element, int pos) {
        Node* temp = new Node(element);

        if (pos < 1) {
            cout << "Invalid position" << endl;
            delete temp;
            return head;
        }

        if (pos == 1) {
            temp->next = head;
            head = temp;
            return head;
        }

        Node* current = head;
        int currentpos = 1;

        while (current != nullptr && currentpos < pos - 1) {
            current = current->next;
            currentpos++;
        }

        if (current == nullptr) {
            cout << "Position exceeds the length of the list" << endl;
            delete temp;
            return head;
        }

        temp->next = current->next;
        current->next = temp;
        return head;
    }
    // Node* insertion_sort(Node* head) {
    //     if (head == nullptr) {
    //         return nullptr;
    //     }

    //     Node* dummy = new Node(0);
    //     dummy->next = head;
    //     Node* prev = head;
    //     Node* cur = head->next;

    //     while (cur != nullptr) {
    //         if (cur->data >= prev->data) {
    //             prev = cur;
    //             cur = cur->next;
    //         } else {
    //             Node* tmp = dummy;
    //             while (tmp->next != nullptr && cur->data > tmp->next->data) {
    //                 tmp = tmp->next;
    //             }

    //             prev->next = cur->next;
    //             cur->next = tmp->next;
    //             tmp->next = cur;
    //             cur = prev->next;
    //         }
    //     }

    //     Node* sortedHead = dummy->next;
    //     delete dummy;  
    //     return sortedHead;
    // }
    // Node* bubble_sort(Node* head){
    //     Node *a, *b;
    //     int temp;
    //     a = head;
    //     if (a == nullptr)
    //     {
    //         cout << "List is empty" << endl;
    //     }
    //     else
    //     {
    //         for (a; a->next != nullptr; a = a->next)
    //         {
    //             for (b = a->next; b != nullptr; b = b->next)
    //             {
    //                 if (a->data > b->data)
    //                 {
    //                     temp = a->data;
    //                     a->data = b->data;
    //                     b->data = temp;
    //                 }
    //             }
    //         }
    //     }
    //     return head;
    // }
    // Node* selection_sort(Node* head) {
    //     Node* temp = head;

    //     while (temp != nullptr) {
    //         Node* minNode = temp;
    //         Node* r = temp->next;

    //         while (r != nullptr) {
    //             if (r->data < minNode->data) {
    //                 minNode = r;
    //             }
    //             r = r->next;
    //         }

    //         int tempData = temp->data;
    //         temp->data = minNode->data;
    //         minNode->data = tempData;

    //         temp = temp->next;
    //     }
    //     return head;
    // }

    // Node* findMiddle(Node* head) {
    //     Node* slow = head;
    //     Node* fast = head;
    //     while (fast != nullptr && fast->next != nullptr && fast->next->next != nullptr) {
    //         slow = slow->next;
    //         fast = fast->next->next;
    //     }
    //     return slow;
    // }

    // Node* merge(Node* list1, Node* list2) {
    //     if (list1 == nullptr) return list2;
    //     if (list2 == nullptr) return list1;

    //     Node* mergedHead = nullptr;

    //     if (list1->data < list2->data) {
    //         mergedHead = list1;
    //         mergedHead->next = merge(list1->next, list2);
    //     } else {
    //         mergedHead = list2;
    //         mergedHead->next = merge(list1, list2->next);
    //     }
    //     return mergedHead;
    // }

    // Node* mergeSort(Node* head) {
    //     if (head == nullptr || head->next == nullptr) {
    //         return head;
    //     }

    //     Node* middle = findMiddle(head);
    //     Node* left = head;
    //     Node* right = middle->next;
    //     middle->next = nullptr;

    //     left = mergeSort(left);
    //     right = mergeSort(right);

    //     return merge(left, right);
    // }

    void display(Node* head) {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};

int main() {
    LinkedList list;
    list.head = list.insert(4, 1);
    list.head = list.insert(1, 2);
    list.head = list.insert(5, 3);
    list.head = list.insert(3, 4);
    list.head = list.insert(2, 4);

    cout << "Original list: ";
    list.display(list.head);

    list.head = list.insertion_sort(list.head);

    cout << "Sorted list: ";
    list.display(list.head);

    return 0;
}






// function bubble_sort(head):
//     if head is null:
//         display "List is empty"
//     else:
//         for a = head to a.next != NULL:
//             for b = a.next to b != NULL:
//                 if a.data > b.data:
//                     temp = a.data
//                     a.data = b.data
//                     b.data = temp
//                 end if
//             end for
//         end for
//     end if
//     return head
// end function


// function selection_sort(head):
//     temp = head
//     while temp is not null:
//         minNode = temp
//         r = temp.next

//         while r is not null:
//             if r.data < minNode.data:
//                 minNode = r
//             end if
//             r = r.next
//         end while
//         tempData = temp.data
//         temp.data = minNode.data
//         minNode.data = tempData

//         temp = temp.next
//     end while
//     return head
// end function


// function insertion_sort(head):
//     if head is null:
//         return null

//     dummy = new Node(0)
//     dummy.next = head
//     prev = head
//     cur = head.next

//     while cur is not null:
//         if cur.data >= prev.data:
//             prev = cur
//             cur = cur.next
//         else:
//             tmp = dummy
//             while tmp.next is not null and cur.data > tmp.next.data:
//                 tmp = tmp.next
            
//             // Perform the insertion
//             prev.next = cur.next
//             cur.next = tmp.next
//             tmp.next = cur
//             cur = prev.next
//         end if
//     end while

//     sortedHead = dummy.next
//     delete dummy
//     return sortedHead
// end function



// function findMiddle(head):
//     slow = head
//     fast = head

//     while fast is not null and fast.next is not null and fast.next.next is not null:
//         slow = slow.next
//         fast = fast.next.next

//     return slow
// end function

// function merge(list1, list2):
//     if list1 is null:
//         return list2
//     if list2 is null:
//         return list1

//     if list1.data < list2.data:
//         mergedHead = list1
//         mergedHead.next = merge(list1.next, list2)
//     else:
//         mergedHead = list2
//         mergedHead.next = merge(list1, list2.next)

//     return mergedHead
// end function

// function mergeSort(head):
//     if head is null or head.next is null:
//         return head

//     middle = findMiddle(head)
//     left = head
//     right = middle.next
//     middle.next = null

//     left = mergeSort(left)
//     right = mergeSort(right)

//     return merge(left, right)
// end function


function partition(start, end):
    pivotValue = end.data
    pIndex = start

    for current = start to current != end:
        if current.data < pivotValue:
            swap(pIndex.data, current.data)
            pIndex = pIndex.next
        end if
    end for

    swap(pIndex.data, end.data)
    return pIndex
end function

function quickSort(start, end):
    if start is null or start == end:
        return start

    pivot = partition(start, end)

    if pivot != null and start != pivot:
        temp = start
        while temp.next != pivot:
            temp = temp.next
        temp.next = null
        quickSort(start, temp)
        temp.next = pivot
    end if

    if pivot != null and pivot.next != end:
        quickSort(pivot.next, end)
    end if

    return start
end function

function sort():
    tail = head
    while tail != null and tail.next != null:
        tail = tail.next
    end while

    head = quickSort(head, tail)
end function
