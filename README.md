# Algoritmos de Ordenação

Este repositório contém implementações em C++. Os algoritmos foram desenvolvidos como parte do estudo de Estrutura de Dados na UNEMAT.

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
```

### Execução

```bash
./bubble_sort.exe
./insertion_sort.exe
./selection_sort.exe
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

## 🧪 Funcionalidades Comuns

Todos os programas incluem:

- **`generateRandomList(int n)`**: Gera uma lista de números aleatórios
- **`printList(int* list, int n)`**: Exibe a lista na tela
- **`swap(int* l, int* r)`**: Troca dois elementos (usado no Bubble e Selection Sort)
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
