# Tree usage/applications

## applications
  - Manage information that naturally forms a hierarchy. (For example, the file system on a computer or hierarchical routing)
  - manage a sorted is of data
  - multi-stage decision-making

## usage
  - Trees (with some ordering e.g., BST) provide moderate access/search (quicker than Linked List and slower than arrays).
  - Trees provide moderate insertion/deletion (quicker than Arrays and slower than Unordered Linked Lists).
  - Like Linked Lists and unlike Arrays, Trees don’t have an upper limit on number of nodes as nodes are linked using pointers.

# Properties

## A) The maximum number of nodes at level `l` of a binary tree is 2<sup>l</sup>. 

### Base case
All binary trees have one root node at the first level (level 0) which agrees with 
at l == 0, 2<sup>0</sup> == 1

### Inductive step
Denote the maximum number of nodes for a tree of height `l` as n<sub>l</sub>
#### assume
2<sup>l</sup> == n<sub>l</sub>

By definition each node of a binary tree has at most 2 children

Therefore each successive level has at most 2 times the number of nodes as the previous level

So for the level following level `l` we would have a maximum of 

2 * 2<sup>l</sup> == 2<sup>l+1</sup> == n<sub>l+1</sub>

Q.E.D.

## B) The maximum number of nodes in a binary tree of height `h` is 2<sup>h</sup> – 1

### Base case
All binary trees have one root node at the first level (a tree of height 1) which agrees with 
at h == 1, 2<sup>1</sup> - 1 == 1

### Inductive step
Denote the maximum number of nodes in a binary tree of height `h` as n<sub>h</sub>

The index of the maximum level of a tree of height `h` will be `h-1` since levels are zero indexed

and the height of a tree is the sum of all levels of the tree
#### assume 
2<sup>h</sup> - 1 == n<sub>h</sub>

the total nodes in a tree of height h + 1 will be

the max number of nodes in a tree of height h + the max nodes in the final level of a tree of height h + 1

from A) the the maximum number of nodes at the final level of a tree of height h will be

2<sup>h - 1</sup>

therefore the the maximum number of nodes at the final level of a tree of height h + 1 will be

2<sup>h</sup>

thus 

(2<sup>h</sup> - 1) + (2<sup>h</sup>) == n<sub>h+1</sub>

(2 * 2)<sup>h</sup> - 1 == n<sub>h+1</sub>

2<sup>h + 1</sup> - 1 == n<sub>h+1</sub>

Q.E.D.

## C) In a binary tree with `n` nodes, minimum possible height is Log<sub>2</sub>(n+1)

Denote the minimum possible height in a binary tree with `n` nodes as h<sub>min</sub>

A tree will have minimum height when the tree is maximally dense.

from B) we have 2<sup>h<sub>min</sub></sup> – 1 == n

solving for h<sub>min</sub> we have

2<sup>h<sub>min</sub></sup> == n + 1

h<sub>min</sub> == Log<sub>2</sub>(n+1)

Q.E.D.

## D) A binary tree with `L` leaves has a height, `h` of at least Log<sub>2</sub>(L) + 1

### Base case
All binary trees have one root node at the first level (a tree of height 1) which agrees with 
`h` == 1, `L` == 1, 1 >= Log<sub>2</sub>(1) + 1

### Inductive step
Denote the the minimal height of a tree with `L` leaves as h<sub>min</sub>
#### assume
Log<sub>2</sub>(L) + 1 == h<sub>min</sub>

A tree will have minimum height when the tree is maximally dense.

Denote the the number of leaves at the next level to be L<sub>next</sub>

from A) we have that maximum number of leaves of the next level will be

L<sub>next</sub> =< 2<sup>(h<sub>min</sub>+1) - 1</sup> 

Log<sub>2</sub>(L<sub>next</sub>) =< (h<sub>min</sub> + 1) - 1

Log<sub>2</sub>(L<sub>next</sub>) + 1 =< (h<sub>min</sub> + 1)

Q.E.D.

## E) In binary tree where every node has 0 or 2 children, the number of leaf nodes is always one more than nodes with two children.
```
L = T + 1

Where L = Number of leaf nodes

T = Number of internal nodes with two children
```

# Types of binary trees

## Full Binary Tree
- A Binary Tree is a full binary tree if every node has 0 or 2 children. 
- In a Full Binary Tree, number of leaf nodes is the number of internal nodes plus 1

## Complete Binary Tree
- A Binary Tree is a complete Binary Tree if all the levels are completely filled except possibly the last level and the last level has all keys as left as possible

## Perfect Binary Tree
- A Binary tree is a Perfect Binary Tree in which all the internal nodes have two children and all leaf nodes are at the same level. 

## Balanced Binary Tree
- A binary tree is balanced if the height of the tree is O(Log n) where n is the number of nodes.

## A degenerate (or pathological) tree
- A Tree where every internal node has one child. 

# Handshaking Lemma

In every finite undirected graph, an even number of vertices will always have odd degree.

The handshaking lemma is a consequence of the degree sum formula (also sometimes called the handshaking lemma):

&sum;<sub>u &straightepsilon; v</sub> deg(v) == 2&vert;E&vert;