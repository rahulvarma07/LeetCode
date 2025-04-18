/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*>q;
        if(root == NULL) return root;
        Node* ret = root;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i = 0; i < n; i++){
                Node* pres = q.front();
                q.pop();
                if(q.size() > 0 && i != n-1){
                    pres->next = q.front();
                }
                if(pres->left)q.push(pres->left);
                if(pres->right)q.push(pres->right);
            }
        }
        return ret;
    }
};