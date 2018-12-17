#include "bst.h"
#include <iostream>
using namespace std;

int main() {
    BST<string,string> bst;
    bst.insert("mykey","myvalue");
    
    cout << bst.contain("mykey") << endl;
//
//    cout << bst.search("mykey") << endl;
    return 0;
}