#include<stdio.h>
#include<string.h>
void main(){
    char c[10];
    int i=0,countv=0,countc=0;
    printf("enter the string:");
    gets(c);

    while(c[i]!='\0'){
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'){
          countv=countv+1;  
        }
        else
        {
            countc=countc+1;
        }
        i++;
    }


    printf("number of vowel:%d\n",countv);
    printf("number of consonent:%d\n",countc);
    

}