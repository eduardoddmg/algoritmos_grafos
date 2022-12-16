# Algoritmo de Dijkstra

## Compilando
```
make compile
```

## Lembrete
Estamos trabalhando com grafo não direcionado

## Entrada

A primeira linha da entrada deve ser composta por quatro números inteiros: **n** e **m**. Onde **n** = número de vértices e **m** = número de arestas.

Em seguida, **m** linhas, que representam as arestas do grafo, cada uma com três inteiros: **v1**, **v2** e **w**. Onde **v1** e **v2** são os vértices conectados pela aresta e **w** é o peso da aresta.

Lembrando que para o algoritmo funcionar corretamente os vérticos devem ser de 1 a n.

Essa entrada pode ser feita interativamente pelo terminal, ou por meio de arquivo de texto.

A última linha da entrada deve ser composta por dois inteiros, **i** e **l**. Onde **i** é o vértice de origem e **l** é o vértice de destino.

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
1 5
```

## Executando

```
./dijkstra < input.dat ou
make run
```

## Saída

A saída será composta de uma linha, no formato `1:distancia ... n:distancia`. Onde teremos a distância do vértice inicial aos demais vértices do grafos.
E também teremos a distância do vértice inicial ao vértice final `distancia de x ate y eh dist`

### Exemplo

A saída para o algoritmo executado sobre o grafo de entrada apresentado no arquivo `output.dat` seria:

```
1:0 2:3 3:4 4:2 5:10 6:3 
distancia de 1 ate 5 eh 10
```
