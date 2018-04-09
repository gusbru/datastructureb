/** Selection Sort.
 * 
 * O metodo de ordenacao por selecao procura reduzir
 * o numero de trocas do processo.
 * 
 * Para isso, a cada etapa, identifica o menor
 * elemento da sequencia e troca-o com o elemento
 * mais a esquerda. O processo continua com a
 * sub-sequencia restante ate que tudo esteja
 * ordenado
 */

#ifndef __SELECTION_H_INCLUDED__
#define __SELECTION_H_INCLUDED__

#include "../Array/Array.h"

class Selection : public Array 
{
private:
  int N, minIdx;

public:
  Selection(int N);
  void sort() override;

};

#endif // __SELECTION_H_INCLUDED__