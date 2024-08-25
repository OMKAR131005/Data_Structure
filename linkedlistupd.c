#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main(){

    //CREATION
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;


    //allocate memory to each node
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth= (struct node*)malloc(sizeof(struct node));
   
       //provide data and link to next
    first -> data = 10;
    first -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = fourth;

    fourth -> data = 40;
    fourth -> next = NULL;


    //TRAVERSAL AND PRINT
    printf("Traversal and printing of linkedlist\n");
    struct node* current = first; 

    while(current != NULL){
        printf("%d\t",current -> data);
        current = current -> next;
    }
   
    print("\n")
    //UPDATE
    printf("Updation and printing of linkedlist\n");
    int fData, newData;

    printf("Enter which data you want change : ");
    scanf("%d",&fData);
    printf("Enter new data : ");
    scanf("%d",&newData);

    current = first;
    while(current -> data != fData){
        current = current -> next;
        break;
    }

    current -> data = newData;

    current = first;
    while(current != NULL){
        printf("%d\t",current -> data);
        current = current -> next;
    }

    return 0;
}