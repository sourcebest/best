void preorder(treeNode* root)   //���� Ʈ���� ���� ���� ��ȸ ����
{
 	if(root){
  	   printf("%c", root->data);
 	   preorder(root->left);
 	   preorder(root->right);
 	}
}