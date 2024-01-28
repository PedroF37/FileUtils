#ifndef _FILEUTILS_H
#define _FILEUTILS_H


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Cuida de verificar se arquivo tem extensão,
 * retorna extensão ou NULL */
char *has_extension(char *filename);

/* Implementação de strstr reversa. Recebe a string alvo,
 * a substring para procurar no final da string e o tamanho
 * (quantos caracteres) */
char *rev_strstr(char *haystack, char *needle, size_t len);

/* Implementação de strdup() */
char *duplicate(char *source);

/* Cuida de criar um caminho de arquivo ou diretório.
 * Ex: /home/usuario/Documentos/texto.txt */
char *create_pathname(char *base, char *name);

/* Cuida de remover o ultimo caracter da string */
void remove_last_char(char *itemname, int reject);

/* Cuida de remover os últimos caracteres da string */
void remove_last_chars(char *itemname, int start_reject, size_t size);


#endif
