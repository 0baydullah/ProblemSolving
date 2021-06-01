#include<stdio.h>
#include<string.h>
int main()
{
    char num1[101];
    char num2[101];
  
    scanf("%s %s",num1,num2);
 
    
 
    for(int i=0;i<strlen(num1);i++){
        if(num1[i] == num2[i]){
            printf("0");
        }
        else{
            printf("1");
        }
    }
    return 0;
}