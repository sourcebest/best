#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct treeNode{  //���� �ڷᱸ���� �����ϱ� ���� Ʈ���� ��� ����
 	char data;
 	struct treeNode *left;   //���� ����Ʈ���� ���� ��ũ �ʵ�
 	struct treeNode *right;  //������ ����Ʈ���� ���� ��ũ �ʵ�
}treeNode;

treeNode* makeRootNode(char data, treeNode* leftNode, treeNode* rightNode)
{     //data�� ��Ʈ ���� �Ͽ� ���� ����Ʈ���� ������ ����Ʈ���� �����ϴ� ����
 	treeNode* root = (treeNode *)malloc(sizeof(treeNode));
 	root->data = data;
 	root->left = leftNode;
	root->right = rightNode;
 	return root;
}

void preorder(treeNode* root)   //���� Ʈ���� ���� ���� ��ȸ ����
{
 	if(root){
  	   printf("%c", root->data);
 	   preorder(root->left);
 	   preorder(root->right);
 	}
}

void inorder(treeNode* root)    //���� Ʈ���� ���� ���� ��ȸ ����
{
 	if(root){
 	   inorder(root->left);
 	   printf("%c", root->data);
 	   inorder(root->right);
 	}
}

void postorder(treeNode* root)    //���� Ʈ���� ���� ���� ��ȸ ����
{
 	if(root){
 	   postorder(root->left);
 	   postorder(root->right);
 	   printf("%c", root->data);
 	}
}

void main()
{
 	treeNode* n11 = makeRootNode('H', NULL, NULL);
 	treeNode* n10 = makeRootNode('I', NULL, NULL);
 	treeNode* n9 = makeRootNode('J', NULL, NULL);
 	treeNode* n8 = makeRootNode('K', NULL, NULL);

 	treeNode* n7 = makeRootNode('D', n11, NULL);
	treeNode* n6 = makeRootNode('E', n10, n9);
	treeNode* n5 = makeRootNode('F', NULL, NULL);
	treeNode* n4 = makeRootNode('G', NULL, n8);

 	treeNode* n3 = makeRootNode('B', n7, n6);
 	treeNode* n2 = makeRootNode('C', n5, n4);

	treeNode* n1 = makeRootNode('A', n3, n2);

 	printf("\n preorder : ");
 	preorder(n1);

 	printf("\n inorder : ");
 	inorder(n1);

 	printf("\n postorder : ");
 	postorder(n1);

 	getchar();
}
