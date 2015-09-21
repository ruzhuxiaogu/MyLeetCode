 int countNodes(struct TreeNode *root)
{
    
    if(root!=NULL)
    {
      if(root->left==NULL&&root->right==NULL)//叶子节点
          return 1;
      else //其中至少一个子树不为空，那就意味着可能有多个节点。
          //总结点数是左子树节点数+右子树节点数+1（自身节点）
          return countNodes(root->left)+countNodes(root->right)+1;

    }else
        return 0;

}
