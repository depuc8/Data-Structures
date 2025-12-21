# A BUNCH OF POINTERS
A linked list is basically a bunch of nodes stuck together with pointers.
Each node holds some data and a pointer that tells you where the next node lives in memory.

If a node stores the address of only the next node, it’s called a singly linked list.
If it stores the addresses of both the previous and the next nodes, that’s a doubly linked list.

There’s also a circular linked list, which works like a singly linked list, except the last node doesn’t point to NULL — it points back to the head, forming a loop.

For now, this repo only has an implementation of a singly linked list,
but I might add more variants later as I go.
