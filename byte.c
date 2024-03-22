/* Exercício.: Implemente uma aplicação que mostre os valores contidos em um byte, com 
    apenas um bit igual a 1, movimentando o bit ativo da esquerda para direita.
    
    Luiz Damas.
 */
#include<stdio.h>


int main(int argc, char const *argv[])
{
    int i;
    unsigned char var = 0xff & 0x80;
    for (size_t i = 0; i <= 8; i++)
    {
        printf("i.:%ld <<>> valor.: %d\n", i, var >> i);
    }
    
    return 0;
}
