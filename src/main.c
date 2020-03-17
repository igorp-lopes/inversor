/* Data de submissao:
 * Nome: Igor Peterossi Lopes
 * RA: 174929
 */

#include <stdio.h>

int string_length(char *);
void reverse_words(char *);

const int tam_buffer = 100; /* Tamanho máximo da string que pode ser armazenada */

int main()
{

   char buffer[tam_buffer]; /* Buffer que armazena a string que será trabalhada */

   fgets(buffer, tam_buffer, stdin); /* Recebemos pelo console a string */
   reverse_words(buffer); /* Invertermos as palavras na string */
   printf("%s", buffer);

   return 0;
}

/* Função que inverte cada palavra na string */
void reverse_words(char *buffer)
{

   char temp = 0;           /* Variável auxiliar que armazena caracteres da string */
   int i, j, k;             /* Variáveis que armazenam as posições de começo e fim da palavra */
   int len = 0;             /* Variável que armazena o tamanho da string */

   len = string_length(buffer);      /* Obtemos o tamanho da string */

   for (i = 0, j = 0; j < len; j++)
   { /* Iteramos pela string */

      if ((buffer[j] == ' ') || (j == len - 1))
      { /* Testamos se encontramos um espaço ou chegamos ao final da string */

         /* Armazenamos a posição da ultima letra da palavra */
         if (j < len - 1)
         {
            k = j - 1;
         }
         else
         {
            k = j;
         }

         /* Devemos desconsiderar a quebra de linha ao inverter os caracteres */
         if (buffer[j] == '\n')
         {
            k--;
         }

         /* Iteramos sob a porção do buffer que contém a palavra */
         while (i < k)
         {
            temp = buffer[i];      /* Salvamos o caracter do apontador do inicio em uma variável auxiliar */
            buffer[i] = buffer[k]; /* Passamos o caracter do apontador do final na posição do apontador do inicio */
            buffer[k] = temp;      /* Passamos o caracter do apontador do inicio na posição do apontador do final */
            i++;                   /* Avançamos o apontador do inicio para próxima posição da palavra */
            k--;                   /* Recuamos o apontador do final para a posição anterior */
         }

         i = j + 1; /* Atualizamos o apontador do início para apontar para a próxima palavra da string */
      }
   }

   return;
}

/* Função que retorna o tamanho da string */
int string_length(char str[])
{
   int size = 0;

   while (str[size] != '\0') /* Iteramos pela string até alcançarmos o seu caractere de fim */
      size++;

   return size;
}