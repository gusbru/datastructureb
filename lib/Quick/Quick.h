/** Quick Sort.
 * 
 * E o algoritmo de ordenacao mais rapido (em media).
 * Consistem em tomar um elemento aleatorio da sequencia (pivo)
 * e particionar os elementos em duas subsequencias:
 *     - uma com elementos menores que o pivo
 *     - uma com elementos maiores que o pivo
 * 
 * O metodo e aplicado recursivamente as sub-sequencias
 * ate que a ordenacao seja obtida
 */

#ifndef __QUICK_H_INCLUDED__
#define __QUICK_H_INCLUDED__

#include "../Array/Array.h"

class Quick : public Array
{
private:
  int pivo, N;
  int i, j;

public:
  Quick(int N);
  void sort() override;
  void sort(int esq, int dir);
};

#endif // QUICK_H_INCLUDED__