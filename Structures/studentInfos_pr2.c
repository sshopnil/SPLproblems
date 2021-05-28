#include<stdio.h>

typedef struct
{
    char name[50];
    char id[50];
    float cg;
}infos;

int main()
{
    infos arr[100];
    int n, i = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);
    
    while (i < n)
    {
        printf("\nName: ");
        scanf("%s", arr[i].name);
        printf("ID: ");
        scanf("%s", arr[i].id);
        printf("CGPA: ");
        scanf("%f", &arr[i].cg);
        i++;
    }
    
    for(i = 0; i < n; i++)
    {
        printf("Student %d: \n", i+1);
        printf("Name:%s\n", arr[i].name);
        printf("ID: %s\n", arr[i].id);
        printf("CGPA: %.2f\n", arr[i].cg);
    }

    return 0;
}
