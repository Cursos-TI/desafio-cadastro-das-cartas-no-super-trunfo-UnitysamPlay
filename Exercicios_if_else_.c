// inicio do programa
// este programa compara  dois numeros inteiros e verifica se eles sao iguais ou diferentes, pares ou impares e qual deles e maior
// autoria: tiago carmo
int main() {






//============================================
// variaveis de entrada  e saida
    int numero1 =10;
    int numero2 = 20;
    int resultado;
    float temperatura = 22,5;
//============================================
// solicitando dados do usuario
    printf ("============================================\n");
    printf ("digite o primeiro numero: ");
    scanf ("%d", &numero1);
    printf ("digite o segundo numero: ");
    scanf ("%d", &numero2);
    printf (" digite a temperatura:");
    scanf("%f", &temperatura);
    
    if (numero1 > numero2) {
        printf (" O primeiro numero e maior que o segundo numero\n");
    } else if (numero1 < numero2) {
        printf (" O segundo numero e maior que  o primeiro numero\n");
    }
    if (numero1 == numero2) {
        printf (" os numeros sao iguais\n");
    } else {
        printf (" os numeros sao diferentes\n");
    } if (numero1 %2 == 0) {
        printf (" o primeiro numero e par\n");
    } else {
        printf (" o primeiro numero e impar\n");
    } if (numero2 %2 == 0) {
        printf (" o segundo numero e par\n");
    } else {
        printf (" o segundo numero e impar\n");
    } if (temperatura > 28) {
        printf (" temperatura esta alta,está calor, Beba agua\n");
    } else if (temperatura <=15) {
        printf (" temperatura esta baixa, esta frio, use um casaco\n");
    } else if (temperatura > 15 && temperatura <= 28) {
        printf (" A temperatura esta agradavel\n");
    } else {}
    }
    
    
    
    

    return 0;




    // fim do programa
    }
        
