#include <stdio.h>
int main()
{
    char name[32], item[50],outlet_name[18] = "mordern furniture";
    char amount[5];
    FILE *ptr;
    ptr = fopen("recipt.txt", "w+");
    printf("enter teh name :");
    scanf("%s", name);
    printf("enter the item purchased : ");
    scanf("%s", item);
    printf("total amount : ");
    scanf("%s",&amount);
    fputs("thanks ", ptr);
    fseek(ptr, 0, SEEK_END);
    fputs(name, ptr);
    fputs(" for purchasing ", ptr);
    fseek(ptr, 0, SEEK_END);
    fputs(item, ptr);
    fputs(" from ",ptr);
    fseek(ptr,0,SEEK_END);
    fputs(outlet_name,ptr);
    fseek(ptr,0,SEEK_END);
    fputs("\nyour payable amount is ",ptr);
    fseek(ptr,0,SEEK_END);
    fputs(amount,ptr);
    fseek(ptr,0,SEEK_END);
    fputs("\nplease visit ",ptr);
    fseek(ptr,0,SEEK_END);
    fputs(outlet_name,ptr);
    fseek(ptr,0,SEEK_END);
    fputs(" for any kind of problems .we plan to serve you again soon.",ptr);
    
}