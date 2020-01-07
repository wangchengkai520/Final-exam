#include<stdio.h>
#include<string.h>
void reverse(char s[],int x, int y){
    int a;
    int b;
    b = y-(x + 1);
    if(x<b){
        a=s[x];
        s[x]=s[b];
        s[b]=a;
        reverse(s,++x,y);
    }
}
int main(){
    char s;
    char t[1000];
    int x = 0;
    int k = 0;
    while((s = getchar()) != '\n'){
        t[x]=s;
        k=++x;
    }
    reverse(t,0,k);
    for(x=0;x<k;x++)
    printf("%c",t[x]);
}
