#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x):val(x),left(NULL),right(NULL){}
};

void flatten(TreeNode *root){
    vector<TreeNode *> v;
    pre_order(root,v); 
        v.push_back(NULL);
        for(int i=0; i<v.size(); i++){
            if (v[i]){
                cout<<v[i].val<<"->";
                v[i]->left = NULL;
                v[i]->right = v[i+1];
            }
        }
}
void pre_order(TreeNode *root,&vector<TreeNode*> v)){
    v.push_back(root);
    if(root->left!=NULL){
        pre_order(root->left);
    }
    if(root->right!=NULL){
        pre_order(root->right);
    }
}

int main(){


}
