#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,d,e;//number of layer,side of the top layer,growth of each layer,trunk width,trunk height
    printf("Please input number of layer、side of the top layer、growth of each layer、trunk-width、trunk height.\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    for(int m=0;m<a-1;m++){
        if(m==0){
        for(int i=0;i<b;i++){
            for(int j=0;j<=b-i;j++){
                printf(" ");
            }
            for(int k=0;k<=i*2;k++){
            printf("@");
            }
            printf("\n");
        }
        }
        else{
            for(int i=0,star=1;i<b+2;i++,star+=c){
                for(int j=0;j<=b-i-1;j++){
                    printf(" ");
                }
                for(int k=0;k<=star+2;k++){
                printf("@");
                }
                printf("\n");
            }
        }
        }
}
