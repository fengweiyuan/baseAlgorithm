#ifndef BASEALGORITHM_BST_H
#define BASEALGORITHM_BST_H

#include <iostream>
#include <queue>

using namespace std;

/**
 * 二分查找树类
 */
template<typename Key, typename Value>
class BST {
private:
    struct Node {
        Key key;
        Value value;
        Node *left;
        Node *right;

        Node(Key key, Value value) {
            this->key = key;
            this->value = value;
            this->left = this->right = NULL;
        }
    };

    Node *root;  // 根节点
    int count;   // 二分搜索树总共有多少节点

    /**
      * 向以node为根的二叉搜索树中，插入节点(key,value)
      * 返回插入新节点后的二叉搜索树的根
      * 递归方式
      */
    Node *insert(Node *node, Key key, Value value) {

        if (node == NULL) {
            count++;
            return new Node(key, value);
        }

        if (key == node->key) {
            node->value = value;                          // 如果key相等，把value更新成新传过来的value
        } else if (key < node->key) {
            node->left = insert(node->left, key, value);  // 递归处理完左子树后，就把得到的节点赋值给左子树
        } else {
            node->right = insert(node->right, key, value);
        }

        return node;
    }

//    /**
//     * 插入节点的非递归方式，有bug
//     */
//    Node* insert2(Node *node, Key key, Value value) {
//        while (true) {
//            Node* tmp_node = node;
//
//            if (tmp_node == NULL) {
//                tmp_node = new Node(key, value);
//                break;
//            }
//
//            // node不为空，则开始查找，tmp_node不断移动，直到为空为止，或者匹配上已有key为止。
//
//            if (key > node->key) {
//                tmp_node = node->right;
//            } else if (key < node->key) {
//                tmp_node = node->left;
//            } else {  // key == node->key
//                tmp_node->value = value;
//            }
//        }
//
//        return node;
//
//    }


    bool contain(Node *node, Key key) {

        if (node == NULL)
            return false;
        if (key < node->key) {
            return contain(root->left, key);
        } else if (key > node->key) {
            return contain(root->right, key);
        } else {
            return true;
        }
    }

    Value *search(Node *node, Key key) {
        if (node == NULL) {
            return NULL;
        }
        if (key < node->key) {
            return search(node->left, key);
        } else if (key > node->key) {
            return search(node->right, key);
        } else {
            cout << &(node->value);
            return &(node->value);
        }
    }

    // 对以node为根的二叉搜索树进行前序遍历
    void preOrder(Node *node) {
        if (node != NULL) {
            cout << node->key << endl;
            preOrder(node->left);
            preOrder(node->right);
        }
    }

    // 对以node为根的二叉搜索树进行中序遍历
    void inOrder(Node *node) {
        if (node != NULL) {
            inOrder(node->left);
            cout << node->key << endl;
            inOrder(node->right);
        }
    }

    // 对以node为根的二叉搜索树进行后序遍历
    void postOrder(Node *node) {
        if (node != NULL) {
            postOrder(node->left);
            postOrder(node->right);
            cout << node->key << endl;
        }
    }

    // 使用后续遍历的方式，来释放二叉搜索树的每个节点
    void destory(Node *node) {
        if (node != NULL) {
            destory(node->left);
            destory(node->right);
            delete node;
            count--;
        }
    };


public:
    BST() {
        root = NULL;
        count = 0;
    }

    ~BST() {
        destory(root);
    }

    int size() {
        return count;
    }

    bool isEmpty() {
        return count == 0;
    }

    // 在二分搜索树插入新节点
    void insert(Key key, Value value) {
        insert(root, key, value);
    }

    // 非递归方式
    void insert2(Key key, Value value) {
        root = insert2(root, key, value);
    }

    // 在二分搜索树中查找是否有这个key
    bool contain(Key key) {
        return contain(root, key);
    }

    // 如果返回Value，Value是不能为NULL的
    // 如果返回Node*，则Node结构要定义为public，对外暴露，这也不太好基于数据封装原则
    // 找到Key对应的Value的指针，如果Value不存在，这个指针可以存储NULL
    Value *search(Key key) {
        return search(root, key);
    }

    /**
     * 前序遍历
     */
    void preOrder() {
        preOrder(root);
    }

    /**
     * 中序遍历
     */
    void inOrder() {
        inOrder(root);
    }

    /**
     * 后序遍历
     */
    void postOrder() {
        postOrder(root);
    }

    /**
     * 层序遍历(广度优先遍历)
     * 之前的前序，中序，后序都属于深度优先遍历
     */
    void levelOrder() {
        queue<Node *> q;
        q.push(root);

        // 只要队列不为空则可以继续
        while (!q.empty()) {
            Node *node = q.front();
            q.pop();

            cout << node->key << endl;

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);

        }
    }


};

#endif
