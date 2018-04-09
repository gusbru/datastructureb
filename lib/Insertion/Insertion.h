/** Insertion Sort.
 * O metodo de ordenacao por insercao pode ser
 * visto como um metodo para ordenar cartas de 
 * um baralho.
 * 
 * A cada fase, uma carta e inserida em uma sequencia
 * ordenada. Para isso e identificado seulocal de insercao.
 * 
 * Ao serem inseridas todas as cartas, a sequencia completa
 * estara ordenada
 */

#ifndef __INSERTION_H_INCLUDED__
#define __INSERTION_H_INCLUDED__

#include "../Array/Array.h"

class Insertion : public Array
{
private:
  int N, key, i, j;

public:
  Insertion(int N);
  void sort() override;
};

#endif // __INSERTION_H_INCLUDED__
