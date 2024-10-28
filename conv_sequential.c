#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(){
    // ---- input and malloc A, F ----
    int NA, NF;
    scanf("%d %d", &NA, &NF);
    long long *A = malloc(sizeof(long long) * NA);
    long long *F = malloc(sizeof(long long) * NF);

    for(int i = 0; i < NA; i++){
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < NF; i++){
        scanf("%d", &F[i]);
    }
    // ---- end input and malloc----

    // implement here
    int x = NA-NF+1;
    long long *result = malloc(sizeof(long long) * x);
    for(int i = 0; i < x; i++){
        long long res = 0;
        for(int j = 0; j < NF; j++){
            res += A[i+j] * F[NF-j-1];
        }
        result[i] = res;
    }
    

    for(int i = 0; i < x; i++){
        printf("%lld\n", result[i]);
    }

    // ---- free memory ----
    free(result);
    free(F);
    free(A);
    // ---- end free ----
    return 0;
}

