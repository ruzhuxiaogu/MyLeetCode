class Solution{
public:
       vector<string> binaryTreePaths(TreeNode* root){
        string str="";
        vector<string> vec;
        //如果是一棵空树，返回空的容器。
        if(!root) return vec;
        searchBinaryTreePaths(vec,str,root);
        return vec;
       }
       //注意一定要加引用  & 符号
       void searchBinaryTreePaths(vector<string> &vec,string str,TreeNode* root){
       stringstream ss;
       //叶子节点
       if(!root->left&&!root->right)
       {
            ss<<root->val;//将int转化为string
            str+=ss.str();
            vec.push_back(str);
            return ;
       }
       //非叶子节点
       ss<<root->val;//将int转化为string
       str+=ss.str()+"->";
       //左子树不为空
       if(root->left){
        searchBinaryTreePaths(vec,str,root->left);
       }
       //右子树不为空
       if(root->right){
        searchBinaryTreePaths(vec,str,root->right);
       }
       
       }
};
