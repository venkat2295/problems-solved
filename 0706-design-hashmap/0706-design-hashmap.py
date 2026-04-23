class ListNode:
    def __init__(self, key=-1, value=-1, next=None):
        self.key = key
        self.value = value
        self.next = next

class MyHashMap:
    def __init__(self):
        # Using a prime number for size helps distribute keys better
        self.size = 1000
        self.table = [ListNode() for _ in range(self.size)]

    def _hash(self, key):
        return key % self.size

    def put(self, key: int, value: int) -> None:
        curr = self.table[self._hash(key)]
        # Traverse the list in the bucket
        while curr.next:
            if curr.next.key == key:
                curr.next.value = value
                return
            curr = curr.next
        # Key not found, add new node at the end
        curr.next = ListNode(key, value)

    def get(self, key: int) -> int:
        curr = self.table[self._hash(key)].next
        while curr:
            if curr.key == key:
                return curr.value
            curr = curr.next
        return -1

    def remove(self, key: int) -> None:
        curr = self.table[self._hash(key)]
        while curr.next:
            if curr.next.key == key:
                curr.next = curr.next.next
                return
            curr = curr.next