/* Data de submissao:
 * Nome: Igor Peterossi Lopes
 * RA: 174929
 */

#include <stdio.h>

int string_length(char*);
void reverse_words(char*);

const int tam_buffer = 100; /* Tamanho máximo da string que pode ser armazenada */

int main() {

  char buffer[tam_buffer]; /* Buffer que armazena a string que será trabalhada */
  char temp = 0; /* Variável auxiliar que armazena caracteres da string */
  int i, j, k; /* Variáveis que armazenam as posições de começo e fim da palavra */
  int len = 0; /* Variável que armazena o tamanho da string */

  fgets(buffer, tam_buffer, stdin); /* Recebemos pelo console a string */
  printf("%s", buffer);

  return 0;

}

/* Função que retorna o tamanho da string */
int string_length(char str[]) {
   int size = 0;

   while( str[size] != '\0') /* Iteramos pela string até alcançarmos o seu caractere de fim */
      size ++;

   return size;	
}
