#include <stdbool.h>
typedef struct StackNode{
    int data;
    struct StackNode *next;
}stk;

stk* newNode(int data){
    stk *s = (stk*)malloc(sizeof(stk));
    s->data = data;
    s->next = NULL;
    return s;
}

bool isEmpty(stk *root){
    return !(root);
}

void push(stk **root,int data){
    stk *s = newNode(data);
    s->next = *root;
    *root = s;
}

void pop(stk **root){
    if(isEmpty(*root))
        return;
    stk* temp = *root;
    *root = (*root)->next;
    free(temp);
}

int peek(stk *root){
    if(isEmpty(root))
        return;
    return root->data;
}

int largestRectangleArea(int* A, int n1) {
    stk *s=NULL;
    //initialize(s,n1);
    int max_area=0;
    int tp;
    int area_with_top = 0;
    int i = 0;
    while(i<n1){
        if (isEmpty(s) || A[peek(s)] <= A[i])
            push(&s,i++);
        else{
            tp = peek(s);
            pop(&s);
            area_with_top = A[tp]*(isEmpty(s) ? i : i-peek(s)-1);
            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }
    while(isEmpty(s) == false){
        tp = peek(s);
        pop(&s);
        area_with_top = A[tp]*(isEmpty(s) ? i : i-peek(s)-1);
        if (max_area < area_with_top)
            max_area = area_with_top;
    }
    return max_area;
}
