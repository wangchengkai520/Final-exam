#include<stdio.h>

#include<stdlib.h>

int main(int argc,char*argv[]){
    double a[100];
    int s=1;
    int t=0;
    int b=0;
    double temp;
    if(argc==1){
        printf("The program needs at least one integer parameter to run!\n");
    }
    else{
    for(s=1;s<argc;s++,t++){
        if(*argv[s]>'0'&&*argv[s]<'9')
        {
            a[t]=atof(argv[s]);
            }else{
               printf("The parameter has to be an integer format!\n");
               return 0;  
            }
    }
    for(b=0;b<argc-2;b++){
     if(a[b]<a[b+1]) 
{
temp=a[b];
a[b]=a[b+1];
a[b+1]=temp;}
}
printf("Min parameter is %g\n",a[argc-2]);
return 0;
}
}