# Data Structure B
---
Programs developed during the Data Structure Course

## Sort Algorithms

### Bubble Sort

### Selection Sort

### Insertion Sort

### Quick Sort

## Grafos

Um grafo G={V,E} é composto por um conjunto `V` de *vértices* e um conjunto E de *enlaces* (arestas). Cada aresta é composta por um par não ordenado ($v_i$, $v_j$), onde $v_i$ e $v_j$ são vértices do grafo.

Quando tomamos as arestas como pares ordenados, associamos sentido às arestas (de $v_i$ para $v_j$) e denominamos o grafo de **dirigido** ou **dígrafo**.

Um **grafo completo** de `N` vértices, denotados por $k_n$ possui uma aresta conectando cada par de vértice. 

#### Conceitos básicos

* **laço**: é uma aresta que conecta um vértice consigo mesmo.
* **arestas paralelas**: são arestas que conectam o mesmo par de vértices.
* **grafo simples** (ou elementar): não possui laços ou arestas paralelas. 
* **multigrafo**: possui arestas paralelas.
* **pseudografo**: possui pelo menos um laço.
* **Adjacência**: arestas adjacentes possuem um vértice em comum e vértices adjacentes possuem pelo menos uma aresta conectando-os.
* **grau**: de um vértice é o número de arestas incidentes nele.

Em **dígrafos**, o número de arestas incidentes determina o grau de entrada e o número de arestas dissidentes determina o grau de saida.

#### Caminhos

Um caminho é uma sequência de vértices $(v_i, v_{i+1},\cdots, v_j)$ onde cada par $(v_k, v_{k+1})$ é uma aresta do grafo.

Quando não houver vértices repetidos, dizemos que o caminho é simples ou elementar.

Sem arestas repetidas, o caminho é chamado de **trajeto**.

Um **circuito** parte e retorna ao mesmo vértice, sem repetição de arestas. Caso também não hava repetição de vértice, teremos um **ciclo**.

Um caminho **Hamiltoniano** passa por todos os vértices de um grafo, sem repetição de vértices.

Um caminho **Euleriano**, é um ciclo que passa por todas as arestas de um grafo.

#### Grafos Ponderados

Podemos associar grandezas às arestas de um grafo, que podem representar, por exemplo, distâncias, custos, tempo, velocidade, vazão.

#### Matriz de Adjacências

Forma de representar as arestas de um grafo (ou o próprio grafo) e os valores associados às arestas.