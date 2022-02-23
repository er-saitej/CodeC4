# Data Structures and STL
##### Containers
> Containers are the object which stores other objects. | Data Structures. - Manages storage space, mostly through iterators.\
> Vector, Stack, Map, Queue, etc.\
> Iterators are the objects which acts like a pointers.\
##### Sequence Containers - linear storage of data.
> Array - Has fixed size - Continuous memory allocation.\
> Vector - Dynamically changes size based on the number of elements. - Continuous memory allocation.\
> Deque - Doubly ended queue - Can expand both from the front and back. - Continuous memory allocation.\
> Forward List - Singly linked list - Can expand in front direction. - Dynamic memory allocation.\
> List - Doubly linked list - Can expand both front and back - Dynamic memory allocation.\
##### Associative Containers - stores in an ordered fashion
> Set - stores multiple elements [will not store duplicate elements] and elements are ordered.\
> Multiset - stores duplicate elements as well and elements are ordered.\
> Map - stores key value pairs [doesn't store duplicate keys] and elements are ordered using keys. - Uses binary search tree [time complexity increases].\
> Multimap - stores key value pairs which can contain [key and multiple values associated with it] - Uses binary search tree [time complexity increases].\
##### Unordered Associative Containers
> Unordered Set - stores unique elements in a set. [Search Operation - O(1), Insert Operation - O(1)] - stores elements directly inside memory, so doesn't need binary search tree resulting less time complexity.\
> Unordered Map - Hash table [Insertion - O(1), Lookup - O(1), Deletion - O(1)] - stores elements directly inside memory, so doesn't need binary search tree resulting less time complexity.\
> Unordered multiset - Set where multiple values can be stores.\
> Unordered multimap - Hash table resulting where multiple values can be stored in a key.\
##### Container Adapter - Uses other containers or STL to implement particular data structure
> Stack - Last in First out - (push, pop) - restricts functionality of a sequence containers.\
> Queue - First in First out - (enqueue, dequeue) - restricts functionality of a sequence containers.\
> Priority queue - Heap DS - (Can insert elements into heap and can remove minimum or maximum element). [uses log(n) time for all operations].\