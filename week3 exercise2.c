#include <stdio.h>

int main(void)
{
    char studentName[50];
    int test1, test2, assignment;
    int total;

    printf("--- ASSESSMENT ---\n");
    
    printf("Enter student name: ");
    scanf("%49s", studentName);

    printf("Enter Test 1 mark: ");
    scanf("%d", &test1);

    printf("Enter Test 2 mark: ");
    scanf("%d", &test2);

    printf("Enter Assignment mark: ");
    scanf("%d", &assignment);

    total = test1 + test2 + assignment;

    /* Output */
    printf("\n--- RESULTS FOR %s ---\n", studentName);
    printf("Total Mark: %d\n", total);

    if (total >= 75 && total <= 100) 
    {
        printf("Result: Distinction\n");
    }
    else if (total >= 60 && total <= 74) 
    {
        printf("Result: Credit\n");
    }
    else if (total >= 50 && total <= 59) 
    {
        printf("Result: Pass\n");
    }
    else 
    {
        printf("Result: Fail\n");
    }

    return 0;
}