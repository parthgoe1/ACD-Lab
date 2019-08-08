#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct Node
{
    char* label;
    struct Node* ptr_0;
    struct Node* ptr_1;
};


int main()
{
    struct Node *ptr;

    struct Node* q0 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* q1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* q2 = (struct Node*)malloc(sizeof(struct Node));

    q0->label = "q0";
    q1->label = "q1";
    q2->label = "q2";

    q0->ptr_0 = q1;
    q1->ptr_0 = q1;
    q2->ptr_0 = q1;

    q0->ptr_1 = q0;
    q1->ptr_1 = q2;
    q2->ptr_1 = q0;

    ptr = q0;
    char c;

    printf("Enter a number");
    scanf("%c", &c);

    while(c != '$')
    {
        if(c == '0')
        {
            ptr = ptr->ptr_0;
        }
        else if(c == '1')
        {
            ptr = ptr->ptr_1;
        }

        printf("Enter next number");
        scanf("%c", &c);
        scanf("%c", &c);
    }

    printf(ptr->label);
    if(ptr->label == "q2")
    {
        printf("string verified");
        return 0;
    }
    else
    {
        printf("not verified");
        return 0;
    }
}
