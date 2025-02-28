#include<stdio.h>
#define size 4
int history[size];
int top=-1;
void push(int n){
    if(top<size-1){
        top++;
        history[top]=n;
    }
    else{
        top+=2;
        printf("Please clear your all search history!\n");
    }
}
void pop(){
    history[top]=0;
    top--;
}
int main(){
    int n;
    printf("How many time you want to search: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(top<=size){
        int m;
        printf("Please! search: ");
        scanf("%d",&m);
        push(m);
        }
        else {
            i=n;
        }
    }
    printf("All the search history are : \n");
    if(top>=size)top=size-1;
    for(int i=top;i>=0;i--){
        printf("%d\n",history[i]);
    }
    int b;
    printf("If you want to delete some history from history list , press 1 : ");
    scanf("%d",&b);
    if(b==1){
        int c;
        printf("How many history you want to delete : ");
        scanf("%d",&c);
        for(int i=0;i<c;i++){
            pop();
        }
        printf("Now, the search history is : \n");
        for(int i=top;i>=0;i--){
            printf("%d\n",history[i]);
        }
    }
    else {
        printf("You cannot want to delete history from history list!");
    }
    return 0;
}
