# Algoritmos de Ordenação

Este repositório contém implementações de algoritmos de ordenação em C++. Os algoritmos foram desenvolvidos como parte do estudo de Estrutura de Dados na UNEMAT.

## 🔍 Algoritmos Implementados

### 1. Bubble Sort

**Arquivo:** `bubble_sort.cpp`

O Bubble Sort é um algoritmo simples que funciona comparando elementos adjacentes e trocando-os se estiverem na ordem errada. O processo é repetido até que nenhuma troca seja necessária.

#### Como funciona:
- Compara pares de elementos adjacentes
- Troca elementos se estiverem fora de ordem
- Repete o processo até que nenhuma troca seja feita
- Usa uma otimização que reduz o limite de comparação a cada iteração

#### Complexidade:
- **Tempo:** O(n²) no pior caso, O(n) no melhor caso
- **Espaço:** O(1)

#### Características:
- ✅ Algoritmo estável
- ✅ Implementação simples
- ❌ Ineficiente para listas grandes

### 2. Insertion Sort

**Arquivo:** `insertion_sort.cpp`

O Insertion Sort constrói a lista ordenada elemento por elemento, inserindo cada novo elemento na posição correta dentro da parte já ordenada.

#### Como funciona:
- Percorre a lista da esquerda para a direita
- Para cada elemento, encontra sua posição correta na parte ordenada
- Desloca elementos maiores para a direita
- Insere o elemento na posição correta

#### Complexidade:
- **Tempo:** O(n²) no pior caso, O(n) no melhor caso
- **Espaço:** O(1)

#### Características:
- ✅ Algoritmo estável
- ✅ Eficiente para listas pequenas
- ✅ Adaptativo (rápido para listas quase ordenadas)
- ✅ Online (pode ordenar conforme recebe dados)

### 3. Selection Sort

**Arquivo:** `selection_sort.cpp`

O Selection Sort funciona encontrando repetidamente o menor elemento da parte não ordenada e colocando-o no início da parte ordenada.

#### Como funciona:
- Encontra o menor elemento da lista não ordenada
- Troca com o primeiro elemento da parte não ordenada
- Move a fronteira entre as partes ordenada e não ordenada
- Repete até que toda a lista esteja ordenada

#### Complexidade:
- **Tempo:** O(n²) em todos os casos
- **Espaço:** O(1)

#### Características:
- ❌ Algoritmo não estável (pode alterar ordem de elementos iguais)
- ✅ Faz o número mínimo de trocas
- ❌ Performance consistente independente dos dados de entrada

### 4. Quick Sort

**Arquivo:** `quick_sort.cpp`

O Quick Sort é um algoritmo eficiente de ordenação baseado na estratégia de divisão e conquista. Ele seleciona um elemento como pivô e particiona a lista em duas sublistas: uma com elementos menores que o pivô e outra com elementos maiores. O processo é repetido recursivamente para as sublistas.

#### Como funciona:
- Escolhe um pivô (geralmente o último elemento)
- Particiona a lista em torno do pivô
- Recursivamente ordena as sublistas à esquerda e à direita do pivô
- Não é um algoritmo estável

#### Complexidade:
- **Tempo:** O(n log n) no caso médio, O(n²) no pior caso
- **Espaço:** O(log n) devido à pilha de recursão

#### Características:
- ❌ Algoritmo não estável
- ✅ Muito eficiente para listas grandes
- ✅ Utiliza divisão e conquista
- ❌ Pior caso ocorre quando a partição é muito desbalanceada

## 🛠️ Como Compilar e Executar

### Pré-requisitos

- Compilador C++ (como `g++` ou `clang++`)

### Compilação

Para compilar qualquer um dos arquivos, use o terminal:

```bash
g++ -o programa arquivo.cpp
```

Exemplos:

```bash
g++ -o bubble_sort bubble_sort.cpp
g++ -o insertion_sort insertion_sort.cpp
g++ -o selection_sort selection_sort.cpp
g++ -o quick_sort quick_sort.cpp
```

### Execução

```bash
./bubble_sort.exe
./insertion_sort.exe
./selection_sort.exe
./quick_sort.exe
```

Ou usando a task do VS Code:

- Abra o arquivo desejado
- Use `Ctrl+Shift+P` → "Tasks: Run Task" → "C/C++: g++.exe build active file"

## 📊 Comparação de Performance

| Algoritmo      | Melhor Caso | Caso Médio | Pior Caso | Estável | Espaço |
| -------------- | ----------- | ---------- | --------- | ------- | ------ |
| Bubble Sort    | O(n)        | O(n²)      | O(n²)     | ✅      | O(1)   |
| Insertion Sort | O(n)        | O(n²)      | O(n²)     | ✅      | O(1)   |
| Selection Sort | O(n²)       | O(n²)      | O(n²)     | ❌      | O(1)   |
| Quick Sort     | O(n log n)  | O(n log n) | O(n²)     | ❌      | O(log n) |

## 🧪 Funcionalidades Comuns

Todos os programas incluem:

- **`generateRandomList(int n)`**: Gera uma lista de números aleatórios
- **`printList(int* list, int n)`**: Exibe a lista na tela
- **`swap(int* l, int* r)`**: Troca dois elementos (usado no Bubble, Selection e Quick Sort)
- **Função principal**: Demonstra o algoritmo com uma lista de 20 elementos

## 📈 Quando Usar Cada Algoritmo


### Use Bubble Sort quando:
- Implementação simples for prioridade
- Lista for muito pequena
- Precisar de um algoritmo estável

### Use Insertion Sort quando:
- Lista for pequena (< 50 elementos)
- Lista estiver quase ordenada
- Precisar ordenar dados conforme chegam

### Use Selection Sort quando:
- Quiser minimizar o número de trocas
- Memória for extremamente limitada
- Performance consistente for importante

### Use Quick Sort quando:
- Lista for grande (centenas ou milhares de elementos)
- Performance for prioridade
- Não for necessário manter a ordem de elementos iguais (não estável)
- Espaço extra limitado (usa apenas pilha de recursão)

## 📚 Conceitos Aprendidos

Este projeto demonstra:

- Algoritmos de ordenação básicos
- Análise de complexidade temporal e espacial
- Gerenciamento de memória em C++
- Ponteiros e referências
- Geração de números aleatórios
- Modularização de código

## 👨‍💻 Autor

<p>
  <img src="https://github.com/vitorlinsbinski.png" alt="Foto de perfil do GitHub" width="80" style="border-radius: 50%;" />
</p>

<p>
  <b>Vitor Linsbinski</b><br/>
  <a href="https://www.linkedin.com/in/vitorlinsbinski">LinkedIn</a> • 
  <a href="https://github.com/vitorlinsbinski">GitHub</a>
</p>

---
