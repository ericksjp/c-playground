/* 
    251. Escreva um subprograma  recursivo que receba como entrada  um número inteiro não 
    negativo e cal cule o seu fatorial.  
*/

int main()
{
    int numero;
    printf("Informe um numero inteiro: ");
    scanf("%d",&numero);

    int fat = fatorial(numero);

    printf("%d! = %d",numero,fat);

}

int fatorial(int x)
{
    if (x==0){
        return 1;
    }  else {
        return x * fatorial(x-1);
    }
}
