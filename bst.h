#pragma once

class BST {
private:
    struct Node {
        int data;
        Node* left;
        Node* right;
        Node(int val) : data(val), left(nullptr), right(nullptr) {}
    };

    Node* root;

public:
    BST();
    void insert(int value);
    bool search(int value);
};