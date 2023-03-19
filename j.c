#include<stdio.h>
void home();
int win(int y);
char joshi[]={'0','1','2','3','4','5','6','7','8','9'};
int main(){
    printf("\n");
    printf("--TIC TAC TOE--\n\n");
    printf("    |    |    \n");
    printf(" 1  | 2  |  3 \n");
    printf("____|____|____\n");
    printf("    |    |    \n");
    printf(" 4  | 5  |  6 \n");
    printf("____|____|____\n");
    printf("    |    |    \n");
    printf(" 7  | 8  |  9 \n");
    printf("    |    |    \n");
    int play=1,put,check=-1;
    char g[100],k[100];
    printf("Enter First Player Name=");
    scanf("%s",g);
    printf("Enter Second Player Name=");
    scanf("%s",k);
    while(check==-1){
        play=(play%2==0) ? 2 : 1;
    char click=(play==1) ? 'X' :'O';
    if(play==1){
        printf("%s Please Enter number=",g);
    } else 
    printf("%s Please Enter number=",k);
    scanf("%d",&put);
    if(put<1 || put>9){
        printf("Invalid Number");
    }
    joshi[put]=click;
    home();
    int result=win(play);
    if(result==1){
       printf("%s is Winner.",g);
        return 0;
    }
     else if(result==-1){
       printf("%s is Winner.",k);
       return 0;
     }
        else if(result==0){
        printf("Draw");
        return 0;
    }
    play++;
    }
    return 0;
}
void home(){
    printf("\n");
    printf("--TIC TAC TOE--\n\n");
    printf("    |    |    \n");
    printf(" %c  | %c  | %c  \n",joshi[1],joshi[2],joshi[3]);
    printf("____|____|____\n");
    printf("    |    |    \n");
    printf(" %c  | %c  | %c \n",joshi[4],joshi[5],joshi[6]);
    printf("____|____|____\n");
    printf("    |    |    \n");
    printf(" %c  |  %c | %c \n",joshi[7],joshi[8],joshi[9]);
    printf("    |    |    \n");
    printf("\n\n");
}
int win(int y){
    if(y==1){
    if(joshi[1]==joshi[2]&&joshi[2]==joshi[3]){
    return 1; }
    if(joshi[1]==joshi[4]&&joshi[4]==joshi[7]){
    return 1; }
    if(joshi[7]==joshi[8]&&joshi[8]==joshi[9]){
    return 1;}
    if(joshi[3]==joshi[6]&&joshi[6]==joshi[9]){
    return 1;}
    if(joshi[1]==joshi[5]&&joshi[5]==joshi[9]){
    return 1;}
    if(joshi[3]==joshi[5]&&joshi[5]==joshi[9]){
    return 1;}
    if(joshi[3]==joshi[5]&&joshi[5]==joshi[7]){
    return 1;}
    if(joshi[2]==joshi[5]&&joshi[5]==joshi[8]){
    return 1;}
    }
    else  if(y!=1){
    if(joshi[1]==joshi[2]&&joshi[2]==joshi[3]){
    return -1; }
    if(joshi[1]==joshi[4]&&joshi[4]==joshi[7]){
    return -1; }
    if(joshi[7]==joshi[8]&&joshi[8]==joshi[9]){
    return -1;}
    if(joshi[3]==joshi[6]&&joshi[6]==joshi[9]){
    return -1;}
    if(joshi[1]==joshi[5]&&joshi[5]==joshi[9]){
    return -1;}
    if(joshi[3]==joshi[5]&&joshi[5]==joshi[9]){
    return -1;}
    if(joshi[3]==joshi[5]&&joshi[5]==joshi[7]){
    return -1;}
    if(joshi[2]==joshi[5]&&joshi[5]==joshi[8]){
    return -1;}
    }
     int count =0;
     for(int h=1;h<=9;h++){
        if(joshi[h]=='X'||joshi[h]=='O')
        count++;
     }
     if(count==9){
        return 0;
     }
}