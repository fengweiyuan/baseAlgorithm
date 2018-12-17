#include "bst.h"
#include <iostream>
using namespace std;

int main() {
    BST<int,string> bst;
    bst.insert(3,"myvalue");
    
    cout << bst.contain("mykey") << endl;

    cout << bst.levelOrder();
//
//    cout << bst.search("mykey") << endl;
    return 0;
}