#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *array[3][3] = {{"q0", "q1","q0"},{"q1", "q1", "q2"},{"q2", "q1","q0"}};
    int i, j;
    char c;
    char *start = "q0";

    int number(char *q)
    {
        if(q == "q0")
        {
            return 0;
        }
        else if(q == "q1")
        {
            return 1;
        }
        else if(q == "q2")
        {
            return 2;
        }
    }

    printf("Enter a number");
    scanf("%c", &c);

    while(c != '$')
    {
        if(c == '0')
        {
            start = array[number(start)][1];
        }
        else if(c == '1')
        {
            start = array[number(start)][2];
        }

        printf("Enter next number");
        scanf("%c", &c);
        scanf("%c", &c);
    }

    printf(start);
    if(start == "q2")
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

