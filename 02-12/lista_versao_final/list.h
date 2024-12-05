#ifndef LIST_H
#define LIST_H

#include "list_conf.h"

typedef struct _list* List;

List list(void);
void list_push_back(List l, UserData data); 
void list_push_front(List l, UserData data);
void list_print(List l) ;

/*
 * EXERCíCIOS 
 */

/* Nível: 🐥 ---------------------------------------------------------------- */
/* Retorna o número de elementos contidos na lista l */
// int list_size(List l);

/* Retorna o dado do primeiro nó da lista */
// UserData list_front(List l);

/* Retorna o dado do último nó da lista */
// UserData list_last(List l);

/* Se a lista contém um nó armazenando @data, retorna o endereço do nó.
 * Caso contrário, retorna NULL */
// Node list_search(List l, UserData data);


/* Nível: 🍎 -----------------------------------------------------------------*/ 

/* Concatena a lista @q no final da lista @l */
// void list_concat(List l, List q)

/* Remove todos os nós que armazenam o valor de @data */
// void list_delete(List l, UserData data);

/* Remove o primeiro elemento da lista */
// void list_delete_front(List l);

/* Remove o último elemento da lista */
// void list_delete_back(List l);

/* Nível: 🧙 ---------------------------------------------------------------- */ 

// ALERT: Esse nível não será cobrado em nenhuma avaliação, já que são conceitos
// avançados de C. Porém, caso você tenha interesse, são exercícios bem instrutivos
// que farão com que a sua compreensão sobre ponteiros seja aprofundada.

/* Se você prestar atenção, definir o tipo do dado da lista como UserData não
 * criou uma lista 100% genérica, já que, ao fazer isso, todas as listas do 
 * nosso programa passaram a ter o tipo apelidado por UserData.
 * Entretanto é muito comum termos, em um mesmo programa, mais de uma lista e 
 * lista que armazenam tipos distintos. 

 * Para fazer uma lista verdadeiramente genérica, teremos que definir o tipo 
 * do campo data da estrutura _node como sendo do tipo `void *`. O tipo `void *`
 * é um ponteiro genérico. O funcionamento é basicamente o de um ponteiro normal,
 * mas você será obrigado a fazer casting quando precisar acessar os dados armazenados.
 * Leia [1] para uma breve introdução ao uso de `void *`.

 * 1: https://www.geeksforgeeks.org/void-pointer-c-cpp/

 * Mudar o tipo do dado armazenado em _node não será a única modificação que você
 * terá que fazer. Veja, se o tipo de endereço passou a ser genérico, isso significa
 * que, por exemplo, `list_delete(List l, void* e)` não sabe interpretar o dado
 * cuja remoção é requerida. O usuário da biblioteca list sabe como o dado deve
 * ser interpretado, mas a biblioteca, genérica, não sabe. 
 * Por isso, na função ` list_delete`, por exemplo, e em outras, o usuário da
 * biblioteca também terá que passar o endereço de uma FUNÇÃO como argumento. 
 * Essa função será responsável por dizer se o nó armazena ou não o elemento buscado.
 * Leia [2] para um breve exemplo sobre como passar uma função como argumento em C.

 * 2: https://www.w3resource.com/c-programming-exercises/c-snippets/how-do-you-pass-a-function-as-a-parameter-in-c.php

 */

  // EXERCÍCIO: adapte toda a interface da sua biblioteca list para torná-la verdadeiramente genérica
  // O programa cliente deveria ser capaz de instanciar, por exemplo, uma lista de ints e uma de chars ao mesmo tempo.


#endif
