#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct treeNode{  //연결 자료구조로 구성하기 위해 트리의 노드 정의
 	char data;
 	struct treeNode *left;   //왼쪽 서브트리에 대한 링크 필드
 	struct treeNode *right;  //오른쪽 서브트리에 대한 링크 필드
}treeNode;

treeNode* makeRootNode(char data, treeNode* leftNode, treeNode* rightNode)
{     //data를 루트 노드로 하여 왼쪽 서브트리와 오른쪽 서브트리를 연결하는 연산
 	treeNode* root = (treeNode *)malloc(sizeof(treeNode));
 	root->data = data;
 	root->left = leftNode;
	root->right = rightNode;
 	return root;
}

void preorder(treeNode* root)   //이진 트리에 대한 전위 순회 연산
{
 	if(root){
  	   printf("%c", root->data);
 	   preorder(root->left);
 	   preorder(root->right);
 	}
}

void inorder(treeNode* root)    //이진 트리에 대한 중위 순회 연산
{
 	if(root){
 	   inorder(root->left);
 	   printf("%c", root->data);
 	   inorder(root->right);
 	}
}

void postorder(treeNode* root)    //이진 트리에 대한 후위 순회 연산
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
