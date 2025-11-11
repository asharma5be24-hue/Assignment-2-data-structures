#include <stdio.h>

int main(){
    int n,i,j;
    printf("Enter size: ");
    scanf("%d",&n);

    int diag[n];
    printf("Enter diagonal elements:\n");
    for(i=0;i<n;i++) scanf("%d",&diag[i]);

    printf("Diagonal Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",i==j?diag[i]:0);
        printf("\n");
    }

    int tri[3*n-2];
    printf("Enter tri-diagonal elements:\n");
    for(i=0;i<3*n-2;i++) scanf("%d",&tri[i]);

    printf("Tri-diagonal Matrix:\n");
    int k=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j) printf("%d ",tri[k++]);
            else if(i==j+1 || i+1==j) printf("%d ",tri[k++]);
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
