#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int x;
    printf("Enter the length of password\n");
    do{
        printf("Minimum 7 characters\n");
        scanf("%d", &x);
    }while(x<7);
    char c[95];
    for(int i=33;i<=126;i++)
    {
        c[i-33] = i;
    }
    char password[x+1];
    password[x] = '\0';
    for(int i=0;i<x;i++)
    {
        password[i] = c[rand()%94];
    }
    printf("Generated password is\n%s",password);

    return 0;
}