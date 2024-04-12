#include <bits/stdc++.h>
using namespace std;

class BST
{
private:
    struct Node
    {
        int data;
        Node* left;
        Node* right;
    };
    Node* root = nullptr;

    void destroy(Node* node) {
        if (node) {
            destroy(node->left);
            destroy(node->right);
            delete node;
        }
    }

public:
    BST() {}
    ~BST() {
        destroy(root);
    }

    void add(int val) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->left = nullptr;
        newNode->right = nullptr;
        if (root == nullptr)
        {
            root = newNode;
            return;
        }
        Node* temp = root;
        Node* parent = nullptr;
        while (temp != nullptr)
        {
            parent = temp;
            if (val <= temp->data)
            {
                temp = temp->left;
            }
            else
            {
                temp = temp->right;
            }
        }
        if (val <= parent->data)
        {
            parent->left = newNode;
        }
        else
        {
            parent->right = newNode;
        }
    }

    void display_BFS() {
        if (root == nullptr)
        {
            cout << "Tree is empty\n";
            return;
        }
        else
        {
            queue<Node*> q;
            q.push(root);
            while (!q.empty())
            {
                Node* temp = q.front();
                q.pop();
                cout << temp->data << ' ';
                if (temp->left != nullptr)
                {
                    q.push(temp->left);
                }
                if (temp->right != nullptr)
                {
                    q.push(temp->right);
                }
            }

        }
    }
};

int main()
{
    BST tree;
    tree.add(10);
    tree.add(5);
    tree.add(15);
    tree.add(3);
    tree.add(7);
    tree.add(12);
    tree.add(18);
    tree.display_BFS();

    return 0;
}
