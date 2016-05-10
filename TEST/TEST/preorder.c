void preorder(treeNode* root)   //이진 트리에 대한 전위 순회 연산
{
 	if(root){
  	   printf("%c", root->data);
 	   preorder(root->left);
 	   preorder(root->right);
 	}
}