#include<stdio.h>
#include<string.h>
void main()
{
    char c[40]="heloow my name is meenakshi";
    int i;
    printf("%s\n\n",c);
    for(i=0; c[i]!='\0'; i++){
        if(i == 0 || c[i-1]== ' '){
            if(c[i]>=97 && c[i]<=122)
                c[i]= c[i]-32;
    }
    if(c[i]!= ' ' && (c[i+1] ==' ' || c[i+1]== '\0')){
        if (c[i] >= 'a' && c[i] <= 'z')
            c[i] = c[i] -32;
    }
}
printf("%s",c);
}
