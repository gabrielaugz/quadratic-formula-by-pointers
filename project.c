void raizes(float A, float B, float C, float *x1, float *x2){

    float tri = 0;

    tri = (B*B) - 4*A*C;

    if (tri < 0){
        printf("\nO discriminante eh menor que 0. Nao ha solucao para os reais.");
        } else if (tri == 0){
            *x1 = (-B+sqrt(tri))/2*A;
            printf("\nExiste apenas uma raiz.");
            printf("\nX1 = %f", *x1);
            } else if (tri > 0){
                *x1 = (-B+(sqrt(tri)))/2*A;
                *x2 = (-B-(sqrt(tri)))/2*A;
                printf("\nExistem duas raizes.");
                printf("\nX1 = %f", *x1);
                printf("\nX2 = %f", *x2);
            }
}

void valores(float *aa, float *bb, float *cc){

    do{
    printf("Digite o valor de A: ");
    scanf("%f", aa);
    } while(*aa == 0);

    printf("Digite o valor de B: ");
    scanf("%f", bb);

    printf("Digite o valor de C: ");
    scanf("%f", cc);

}

void main(){

    float a, b, c, r1 = 0, r2 = 0;

    valores(&a, &b, &c);

    raizes(a, b, c, &r1, &r2);
}
