import 'dart:collection';

class Node {
  double data;
  Node? next;

  Node(this.data);
}

Node? head;

Node? findMiddle(Node? head) {
  Node? slow = head;
  Node? fast = head;
  while (fast != null && fast.next != null && fast.next!.next != null) {
    slow = slow!.next;
    fast = fast.next!.next;
  }
  return slow;
}

Node? merge(Node? list1, Node? list2) {
  if (list1 == null) return list2;
  if (list2 == null) return list1;

  Node? mergedHead;

  if (list1.data < list2.data) {
    mergedHead = list1;
    mergedHead.next = merge(list1.next, list2);
  } else {
    mergedHead = list2;
    mergedHead.next = merge(list1, list2.next);
  }
  return mergedHead;
}

Node? mergeSort(Node? head) {
  if (head == null || head.next == null) {
    return head;
  }

  Node? middle = findMiddle(head);
  Node? left = head;
  Node? right = middle!.next;
  middle.next = null;

  left = mergeSort(left);
  right = mergeSort(right);

  return merge(left, right);
}

Node? insert(Node? head, double x) {
  Node temp1 = Node(x);
  if (head == null) {
    head = temp1;
  } else {
    Node? newNode = head;
    while (newNode!.next != null) {
      newNode = newNode.next;
    }
    newNode.next = temp1;
  }
  return head;
}

SplayTreeMap<double, String> receiver(Map<double, String> hashmap) {
  for (var key in hashmap.keys) {
    head = insert(head, key);
  }

  head = mergeSort(head);

  SplayTreeMap<double, String> sortedMap = SplayTreeMap();
  Node? current = head;
  while (current != null) {
    sortedMap[current.data] = hashmap[current.data]!;
    current = current.next;
  }

  return sortedMap;
}

void main() {
  Map<double, String> hashmap = {
    2.0400: "This is two",
    1.0030: "This is one",
    4.0005: "This is fourth",
    3.1000: "This is three",
    5.0450: "This is five"
  };

  SplayTreeMap<double, String> sortedMap = receiver(hashmap);

  for (var entry in sortedMap.entries) {
    print('${entry.key}: ${entry.value}');
  }
}
