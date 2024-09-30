#include <stdio.h>
#include <stdlib.h>

int main(){
    // ---- input and malloc A, F ----
    int NA, NF;
    scanf("%d %d", &NA, &NF);
    int *A = malloc(sizeof(int) * NA);
    int *F = malloc(sizeof(int) * NF);

    for(int i = 0; i < NA; i++){
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < NF; i++){
        scanf("%d", &F[i]);
    }
    // ---- end input and malloc----

    // implement here
    int x = NA-NF+1;
    int *result = malloc(sizeof(int) * x);
    for(int i = 0; i < x; i++){
        int res = 0;
        for(int j = 0; j < NF; j++){
            res += A[i+j] * F[NF-j-1];
        }
        result[i] = res;
    }

    for(int i = 0; i < x; i++){
        printf("%d\n",result[x])
    }

    // ---- free memory ----
    free(result);
    free(F);
    free(A);
    // ---- end free ----
    return 0;
}

