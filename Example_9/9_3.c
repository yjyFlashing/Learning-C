#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 统计选票
 * */
int main()
{
    struct Candidate{
        char name[20];
        int count;
    };
    struct Candidate person[3] = {"Li",0,"Sun",0,"Zhang",0};
    char vote_name[20];
    printf("Vote is going:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%s",vote_name);
        for (int j = 0; j < 3; j++)
        {
            if (strcmp(vote_name,person[j].name) == 0)
            {
                person[j].count++;
            }            
        }   
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s   %d\n",person[i].name,person[i].count);
    }
    system("pause");
    return 0;
}