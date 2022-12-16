# Algoritmo de Prim

## Compilando
```
make compile
```

## Lembrete
Estamos trabalhando com grafo não direcionado

## Entrada

A primeira linha da entrada deve ser composta por quatro números inteiros: **n** e **m**. Onde **n** = número de vértices e **m** = número de arestas.

Em seguida, **m** linhas, que representam as arestas do grafo, cada uma com três inteiros: **v1**, **v2** e **w**. Onde **v1** e **v2** são os vértices conectados pela aresta e **w** é o peso da aresta.

Na última linha, teremos um inteiro **i** que será o vértice inicial pra rodar o programa

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

Primeiro teremos a arvóre geradora, logo após teremos o custo da árvore.

### Exemplo

A saída para o algoritmo executado sobre o grafo de entrada apresentado no arquivo `output.dat` seria:

```
(4,2)
(1,3)
(1,4)
(3,5)
(4,6)
14
```
