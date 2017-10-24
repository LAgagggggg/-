#include <stdio.h>
#include <string.h>
#define N 11
int i,j;
int k;
int ln;
int n;
char * s;
char map[100][100];
void go_right(){
    j++;
}
void go_left(){
    j--;
}
void go_down(){
    i++;
}
void go_up(){
    i--;
};
void left_down(){
    go_left();
    go_down();
}
void right_up(){
    go_right();
    go_up();
}
void go(){
    while(1){
        if(j+1 < n){
            go_right();map[i][j] = s[k];k++;
            if(k == ln +1) return;
        }
        else{
            go_down(); map[i][j] = s[k];k++;
            if(k == ln +1) return;
        }
        
        while(1){
            left_down();
            if(j >= 0 && i< n) {
                map[i][j]=s[k]; k++;
                if(k == ln +1) return;
            }
            else break;
        }
        j++;i--;
        
        if(i+1 < n){
            go_down();map[i][j] = s[k];k++;
            if(k == ln +1) return;
        }
        else{
            go_right();map[i][j] = s[k];k++;
            if(k == ln +1) return;
        }
        
        while(1){
            right_up();
            if(i>=0 && j<n){
                map[i][j]=s[k]; k++;
                if(k == ln +1) return;
            }
            else break;
        }
        i++;j--;
    }
}
void print(){
    i=j=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        printf("%c",map[i][j]);
        printf("\n");
    }
}
void S(char s[],int n){
    ln = strlen(s);
    k=0;
    i=j=0;
    map[i][j] = s[k];k++;
    go();
    print();
    return;
}
int main(){
    int lettercnt,i;
    scanf("%d",&n);
    lettercnt=n*n;
    char * raws =(char *)(malloc(lettercnt*sizeof(char)));
    s =(char *)(malloc(lettercnt*sizeof(char)));
    scanf("%s",raws);
    int rawindex=0,index=0;
    for(i=0;i<lettercnt;i++){
        s[index]=raws[rawindex];
        index++;rawindex++;
        if(raws[rawindex]=='\0'){
            rawindex=0;
        }
    }
    S(s,n);
    return 0;
}
