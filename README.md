# Lista Encadeanda em C 

 ##Introdução

> Este código implementa uma lista ligada de produtos em C, onde cada produto é representado por uma estrutura Produtos. A lista é mantida usando ponteiros, e os produtos são adicionados, removidos e impressos usando as funções addItem, removerItem e imprimirLista, respectivamente. A função aloca é responsável por alocar dinamicamente memória para novos itens na lista. Esse código é útil para entender como funciona uma lista ligada em C e pode ser utilizado como base para projetos maiores.
>
>Na cabeça do nosso codigo fizemos uma lista ligada de produtos, onde cada produto é representado pela estrutura Produtos. A lista é mantida usando ponteiros, onde cada elemento da lista aponta para o próximo.
A estrutura Produtos possui dois campos:
nome[100]: um vetor de caracteres que representa o nome do produto.
prox: um ponteiro para a próxima estrutura Produtos na lista.
A função aloca é responsável por alocar dinamicamente memória para uma estrutura Produtos usando a função malloc.
A função addItem adiciona um novo item à lista, recebendo a cabeça da lista e o nome do produto como argumentos. Ela percorre a lista até encontrar o último elemento e adiciona um novo item na lista, configurando o ponteiro prox do último elemento para o novo item.
A função imprimirLista imprime todos os itens da lista, começando da cabeça da lista e percorrendo a lista até encontrar um elemento cujo ponteiro prox é nulo.
A função removerItem remove um item da lista a partir do nome do produto, percorrendo a lista e encontrando o item a ser removido. Ela libera a memória alocada para o item removido com a função free.



##
>Codigo Feito para apredizado, o qual eu tive que implementar uma lista encadeada em C
>
>E nisso, logo apos de monta toda a estrutura da lista usamos uma logica que é a seguinte:
![Primeiraparte](https://github.com/eriklisboa1/Lista-Encadeada-C/blob/main/github.png)

>Aqui escolhemos qual produto queremos acessar, os exemplos usados por mim foram: LIVORS/SMARTPHONE/MERCADO
>
>Vamos supor que o usuario escolheu a opção 2, Smartphone, o programa ira mostrar isso agora:
![Segundaparte](https://github.com/eriklisboa1/Lista-Encadeada-C/blob/main/github1.png)
>Aqui o programa ira da 3 opções, e fica a criterio do usuario que ele quer adicionar/remover/mostrarlista
>Vamos supor aogra que o usuario escolha a opção 1, Adicionar smartphone:
![Terceiraparte](https://github.com/eriklisboa1/Lista-Encadeada-C/blob/main/github2.png)
>Aonde o resultado vai para um for, exemplo se você colocar 3 ele ira pedir pra adicionar um smartphone 3x:
![Quartafoto](https://github.com/eriklisboa1/Lista-Encadeada-C/blob/main/github3.png)
>Quando voce termina de colocar ele volta para o menu inicial aonde voce pode adicionar mais produtos e depois pedir para o mostrar, um exemplo do que foi pedido na imagem anterior:
![]Quintafoto](https://github.com/eriklisboa1/Lista-Encadeada-C/blob/main/git1.png)
>Essa parte é apertando o 4 para o mostrar tudo, mas da pra manipular varias coisas, voce pode adicionar mais produtos e também remover em outras parte e mesmo assim ele ira mostrar tudo quando acabar de adiciona ou remover. 
