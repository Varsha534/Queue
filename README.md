# Queue

A queue is a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order.
We define a queue to be a list in which all additions to the list are made at one end, and all deletions from the list are made at the other end.  The element which is first pushed into the order, the delete operation is first performed on that.

# FIFO Principle of Queue:
- A Queue is like a line waiting to purchase tickets, where the first person in line is the first person served. (i.e. First come first serve).
- Position of the entry in a queue ready to be served, that is, the first entry that will be removed from the queue, is called the front of the queue(sometimes, head of the queue), similarly, the position of the last entry in the queue, that is, the one most recently added, is called the rear (or the tail) of the queue. See the below figure.

![image](https://user-images.githubusercontent.com/125336949/234413328-60973b33-47a8-466b-b9f9-c7af227f1fac.png)

# characteristics of Queue:
- Queue can handle multiple data.
- We can access both ends.
- They are fast and flexible. 

# Queue Representation:

!1.Like stacks, Queues can also be represented in an array: In this representation, the Queue is implemented using the array. Variables used in this case are

- Queue: the name of the array storing queue elements.
- Front: the index where the first element is stored in the array representing the queue.
- Rear: the index where the last element is stored in an array representing the queue.

2. Linked List Representation of Queue:
A queue can also be represented using following entities:

- Linked-lists 
- Pointers 
- Structures

# Basic Operations for Queue in Data Structure:
Some of the basic operations for Queue in Data Structure are:

- Enqueue() – Adds (or stores) an element to the end of the queue..
- Dequeue() – Removal of elements from the queue.

# 1. Enqueue(): 
Enqueue() operation in Queue adds (or stores) an element to the end of the queue.

The following steps should be taken to enqueue (insert) data into a queue:

Step 1: Check if the queue is full.

Step 2: If the queue is full, return overflow error and exit.

Step 3: If the queue is not full, increment the rear pointer to point to the next empty space.

Step 4: Add the data element to the queue location, where the rear is pointing.

Step 5: return success.

![image](https://user-images.githubusercontent.com/125336949/234414084-8240f6b1-7e3e-4dfd-8606-f9264ac8f65d.png)

# 2. Dequeue(): 
Removes (or access) the first element from the queue.

The following steps are taken to perform the dequeue operation:

Step 1: Check if the queue is empty.

Step 2: If the queue is empty, return the underflow error and exit.

Step 3: If the queue is not empty, access the data where the front is pointing.

Step 4: Increment the front pointer to point to the next available data element.

Step 5: The Return success.

![image](https://user-images.githubusercontent.com/125336949/234414158-5146caac-6e33-4af6-bc31-22b3cc512a0c.png)
