#include "node.h"
#include <iostream>

int main() {
    /*create root*/
    Node root { 1 }; 
    /* following is the tree after above statement 
  
             1 
            / \ 
            NULL NULL 
    */
  
    root.setLeft(new Node { 2 });
    root.setRight(new Node { 3 }); 
    /* 2 and 3 become left and right children of 1 
                    1 
                    / \ 
                   2     3 
                  / \    /  \ 
               NULL NULL NULL NULL 
    */
  
    root.getLeft().setLeft(new Node(4)); 
    /* 4 becomes left child of 2 
               1 
            /     \ 
            2      3 
            / \     / \ 
    4 NULL NULL NULL 
    / \ 
    NULL NULL 
    */
   // should print 1234
   std::cout << root.getData() 
   << root.getLeft().getData()
   << root.getRight().getData()
   << root.getLeft().getLeft().getData()
   << '\n';
  
    return 0; 
};
