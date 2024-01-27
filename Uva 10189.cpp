#include<stdio.h>
int main(){
    int n,m,i,j,x=0;
    while(scanf("%d %d",&n,&m)){
        if(n==0&&m==0)
            break;
        if(x>0)
            printf("\n");
        char arr[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf(" %c",&arr[i][j]);
                if(arr[i][j]!='*')
                    arr[i][j]=0;
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(arr[i][j]=='*')
                    continue;
                if(j!=0&&arr[i][j-1]=='*')
                    arr[i][j]+=1;
                if(j!=m-1&&arr[i][j+1]=='*')
                    arr[i][j]+=1;
                if(i!=0&&j!=0&&arr[i-1][j-1]=='*')
                    arr[i][j]+=1;
                if(i!=0&&arr[i-1][j]=='*')
                    arr[i][j]+=1;
                if(i!=0&&j!=m-1&&arr[i-1][j+1]=='*')
                    arr[i][j]+=1;
                if(i!=n-1&&j!=0&&arr[i+1][j-1]=='*')
                    arr[i][j]+=1;
                if(i!=n-1&&arr[i+1][j]=='*')
                    arr[i][j]+=1;
                if(i!=n-1&&j!=m-1&&arr[i+1][j+1]=='*')
                    arr[i][j]+=1;
            }
        }
        x++;
        printf("Field #%d:\n",x);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(arr[i][j]=='*')
                    printf("*");
                else
                    printf("%d",arr[i][j]);
            }
            printf("\n");
        }
    }
return 0;
}












    
