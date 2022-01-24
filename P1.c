#include <stdio.h>
struct Tree
{
  char data;
  Tree *left;
  Tree *right;
  Tree(char data) 
    { 
        this -> data = data; 
        left = NULL;
        right = NULL; 
    }     };
bool SymmetricBt(Tree *root_s1, Tree *root_s2){
  if(!root_s1 && !root_s2){
    return true;}
  else{
    if(root_s1 && root_s2){
      if(root_s1 -> data == root_s2 -> data){
        return SymmetricBt(root_s1 -> left, root_s2 -> right) &&
         SymmetricBt(root_s1 -> right, root_s2 -> left); } }
    return false;
  } }
int main() {
  Tree *root = new Tree('1'); 
  root -> left = new Tree('3'); 
  root -> right = new Tree('3'); 
  root -> left -> left = new Tree('4'); 
  root -> left -> right = new Tree('6');
  root -> right -> left = new Tree('6');
  root -> right -> right = new Tree('4');
  if (SymmetricBt(root, root)){
    printf("The binary tree is symmetric.\n");
  }
  else{
    printf("The binary tree is asymmetric.");  }
  return 0;
}