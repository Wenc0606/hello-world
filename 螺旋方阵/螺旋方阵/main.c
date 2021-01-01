#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[10][10];
    int i,j,k;
    int t=(n+1)/2;//轮数
    int st=0;
    int count=1;
    if(n%2==0){
    for(k=1;k<=t;k++){
        for(i=st;i<n-1-st;i++){
            a[st][i]=count;
            count++;
        }
        for(j=st;j<n-1-st;j++){
            a[j][n-st-1]=count;
            count++;
        }
        for(i=n-st-1;i>st;i--){
            a[n-st-1][i]=count;
            count++;
        }
        for(j=n-st-1;j>st;j--){
            a[j][st]=count;
            count++;
        }
        st++;
    }
    }
    if(n%2==1){
        for(k=1;k<=t-1;k++){
            for(i=st;i<n-1-st;i++){
                a[st][i]=count;
                count++;
            }
            for(j=st;j<n-1-st;j++){
                a[j][n-st-1]=count;
                count++;
            }
            for(i=n-st-1;i>st;i--){
                a[n-st-1][i]=count;
                count++;
            }
            for(j=n-st-1;j>st;j--){
                a[j][st]=count;
                count++;
            }
            st++;
        }
        a[(n-1)/2][(n-1)/2]=n*n;
        
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%3d",a[i][j]);
            
    }
        printf("\n");
    }
    
    return 0;
}
