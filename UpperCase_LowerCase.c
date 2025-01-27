#include <stdio.h> 
#include<string.h> 
int main() 
{ 
    char ch[21]; 
    printf("Enter your character: "); 
    //scanf("%s",&ch); 
     
    gets(ch); 
    for(int i=0;i<=strlen(ch);i++) 
    { 
        if(ch[i]>='A' && ch[i]<='Z') 
        { 
            ch[i] = ch[i]+32; 
        } 
        else if(ch[i]>=97 && ch[i]<=122) 
        { 
            ch[i] = ch[i] -32; 
        } 
    } 
    printf("\nConverted letter: %s",ch); 
    return 0; 
} 