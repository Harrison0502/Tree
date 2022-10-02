#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
//Step1:請使用者輸入聖誕樹所需要的數值
    int a,b,c,d,e;//a:葉子的層數、b:第一層葉子的高度、c:每層葉子比上面一層增加的高度、d:樹幹寬度、e:樹幹高度。
    printf("Please input an integer:\nNumber of layer(between 2 and 5)、\nSide of the top layer(between 3 and 6)、\nGrowth of each layer(between 1 and 5)、\nTrunk-width(An odd between 3 and 9)、\nTrunk-height(between 4 and 10).\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    while(a<2||a>5||b<3||b>6||c<1||c>5||d<3||d>9||d%2==0||e<4||e>10){//限制輸入範圍，若錯誤則要求重新輸入
        printf("Illegal number!!!\nPlease input an integer:\nNumber of layer(between 2 and 5)、\nSide of the top layer(between 3 and 6)、\nGrowth of each layer(between 1 and 5)、\nTrunk-width(An odd between 3 and 9)、\nTrunk-height(between 4 and 10).\n");
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    }
//Step2:請請使用者選擇是否輸入聖誕樹所需符號
    char YN[3];//使用者輸入YES or NO
    char out='#',in='@';//預設out:樹葉邊緣 in:樹葉內部
    char *y="YES",*n="NO";//用於判斷使用者輸入的變數
    printf("Whether to customize the Christmas tree symbol?(YES or NO)\n");
    scanf("%s",YN);
    if(strcmp(YN,y)==0){//判斷若使用者輸入為YES，則請使用者自訂內外層符號out、in
    printf("Please input the Edge and Internal symbols.(EX:# @)\n");
    scanf(" %c %c",&out,&in);
    }
    

//Step3:開始生成聖誕樹葉
    int last=b+(a-1)*c;//算出最後一層有幾排
    int lastRow=1+(last-1)*2;//最後一排有幾個符號
    for(int m=1;m<=a;m++)//生成a層樹葉
    {
        if(m==1){//先生成第一層樹葉
        for(int i=1;i<=b;i++){
            for(int j=1;j<=last-i;j++){
                printf(" ");
            }//先輸出空格
            for(int k=1;k<=i*2-1;k++){
                if(k==1||k==i*2-1||i==b)//當符號為那排的第一個or最後一個or最後一排時，輸出為out
                printf("%c",out);
                else 
                printf("%c",in);//再輸出有多少個in
            }
            printf("\n");
        }
        }
        else{//生成後續層樹葉
        int row=b+(m-1)*c;//算出那一層有幾排
        for(int i=1;i<=row-1;i++){
                for(int j=1;j<=last-i-1;j++){
                    printf(" ");
                }
                for(int k=1;k<=i*2+1;k++){
                    if(k==1||k==i*2+1||i==row-1)//當符號為那排的第一個or最後一個or那層的最後一排時，輸出為f
                    printf("%c",out);
                    else
                    printf("%c",in);
                }
                printf("\n");
            }
        }
        }
    int space=(lastRow-d)/2;//樹幹前有多少空格
    for(int i=1;i<=e;i++){//生成e排樹幹
        for(int j=1;j<=space;j++)
            printf(" ");//生成space個空格
        for(int k=1;k<=d;k++){
            printf("|");//生成d個樹幹符號
        }
        printf("\n");//每層結束換行
    
    }
    return 0;
}
