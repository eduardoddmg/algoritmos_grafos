# Algoritmo de Prim

## Compilando
```
make compile
```

## Lembrete
Estamos trabalhando com grafo não direcionado

## Entrada

A primeira linha da entrada deve ser composta por quatro números inteiros: **n** e **m**, **d**. Onde **n** = número de vértices e **m** = número de arestas.

A segunda linha da entrada deve ser composta por dois inteiros, **s** e **t**. Onde **s** é o vértice de origem e **t** é o vértice de destino.

Em seguida, **m** linhas, que representam as arestas do grafo, cada uma com três inteiros: **v1**, **v2** e **w**. Onde **v1** e **v2** são os vértices conectados pela aresta e **w** é o peso da aresta.

Lembrando que para o algoritmo funcionar corretamente os vérticos devem ser de 1 a n.

Essa entrada pode ser feita interativamente pelo terminal, ou por meio de arquivo de texto.

### Exemplo

Exemplo contido no arquivo `input.dat`.

```
6 8
1 2 5
1 3 4
1 4 2
1 6 6
2 4 1
2 5 7
3 5 6
4 6 1
```

## Executando

```
./prim < input.dat ou
make run
```

## Saída

A saída será composta de uma linha, no formato `´Arvore MST: `. Onde teremos a árvore geradora mínima.
E também teresmo o custo da árvore

### Exemplo

A saída para o algoritmo executado sobre o grafo de entrada apresentado no arquivo `output.dat` seria:

```
Arvore MST: 
(4,2)
(1,3)
(1,4)
(3,5)
(4,6)
Custo: 14
```
