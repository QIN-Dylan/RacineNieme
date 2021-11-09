#include <stdio.h>
double power(double n, double p){
    if(n == 1){
        return 1;
    } else {
        double pow = n;
        for(int i = 1; i < p; i++){
            pow = pow * n;
        }
        return pow;
    }
}
int main(){
    // // RACINE CUBIQUE
    // double n = 84;
    // double rCube;
    // while(rCube*rCube*rCube <= n){
    //     rCube = rCube + 0.01;
    // }
    // printf("Racine de cubique de %lg est : %lg\n",n , rCube);

    // //RACINE N-IEME
    // double nb = 1000000;
    // int rNieme = 5;
    // double nbApresVirgule = 0.00001;
    // double racine;
    // double rc;
    // while(rc <= nb){
    //     racine = racine + nbApresVirgule;
    //     rc = racine;
    //     for(int i = 0; i < rNieme-1; i++){
    //         rc = rc * racine;
    //     }
    // }
    // printf("Resultat : racine %i-ieme de %lg : %lg\n", rNieme, nb, racine);

    //RACINE N-IEME par ITERATION
    double nb = 54;
    int p = 2;
    double ampina = 1;
    int apresVirgule = 2;
    int countVirgule = 0;
    double diviseur = 1;
    double borneInf = 0;
    double max = 0;
    while(max <= nb && countVirgule <= apresVirgule){
        borneInf = borneInf + ampina;
        max = power(borneInf, p);
        if(max > nb){
            borneInf = borneInf - ampina;
            diviseur = diviseur * 10;
            ampina = 1/diviseur;
            max = power(borneInf, p);
            countVirgule++;
        }
    }
    printf("Resultat : %lg\n", borneInf);
    
    
    return 0;
}