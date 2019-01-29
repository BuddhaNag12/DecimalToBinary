

//list all the binary by giving a range
// it converts decimal number into binary

//Author Buddha

#include <stdio.h>
#include <stdlib.h>

void findBinary();
int binary=0;
int main()
{
    int end=0;
    int start=0;
    int i=0;
    printf("Enter start range:");
    scanf("%d",&start);
    printf("Enter The End range:");
     scanf("%d",&end);
     puts("List of Binary in given range:\n");
    for(i=start;i<=end;i++)
    {
        printf("%d=",i);
        findBinary(i);
        printf("\n");
    }

    return 0;
}

void findBinary(int decimal){

while(decimal!=0)
    {
        binary=decimal%2;
        decimal=decimal/2;
        printf("%d",binary);
    }

}
