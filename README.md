# 🧠 Implementação do Método de Tablô Semântico em C

Este projeto apresenta uma implementação simplificada do método de Tablô Semântico (Semantic Tableaux) utilizando a linguagem C, com o objetivo de demonstrar a verificação de satisfatibilidade de fórmulas da lógica proposicional.

---

## 📌 Objetivo

Desenvolver um protótipo capaz de:

- Representar fórmulas lógicas simples
- Aplicar regras básicas do método de tableaux
- Identificar ramos abertos (satisfatíveis) e fechados (contradições)
- Servir como base prática para análise de custo computacional

---

## 🧠 Conceitos abordados

- Lógica Proposicional
- Método do Tablô Semântico
- Verificação de satisfatibilidade
- Estruturas de dados em C
- Análise inicial de complexidade

---

## ⚙️ Funcionalidades

- Suporte a operadores:
  - `!` → negação  
  - `&` → conjunção (AND)  
  - `|` → disjunção (OR)

- Verificação de contradições em um conjunto de literais  
- Simulação de expansão de ramos para operadores AND e OR  

---

## 💻 Exemplo de uso

### Entrada:
```
A&B
```

### Saída:
```
Ramo aberto (satisfatível)
```

---

### Entrada:
```
A|!A
```

### Saída:
```
Ramo aberto: A
Ramo aberto: !A
```

---

## 🚀 Como executar

### 1. Compile o código:
```bash
gcc tableau.c -o tableau
```

### 2. Execute:
```bash
./tableau
```

---

## 📁 Estrutura do projeto

```
.
├── main.c
└── README.md
```

---

## ⚠️ Limitações

Este projeto é uma versão simplificada e didática, contendo as seguintes limitações:

- Não possui parser completo para expressões complexas
- Não suporta parênteses ou precedência de operadores
- Não implementa lógica de predicados (apenas proposicional)
- Não constrói árvore completa de tableaux
- Não realiza backtracking completo

---

## 🔬 Possíveis melhorias

- Implementação de um parser completo (com suporte a parênteses)
- Representação das fórmulas como árvore (AST)
- Implementação formal das regras α e β
- Construção da árvore completa de tableaux
- Medição de desempenho (tempo e número de ramos)
- Suporte a mais operadores lógicos (→, ↔)

---

## 📊 Aplicações

- Ensino de lógica computacional
- Base para análise de algoritmos de decisão
- Sistemas de verificação formal
- Inteligência Artificial (raciocínio lógico)

---

## 📚 Contexto acadêmico

Este projeto pode ser utilizado como apoio em estudos relacionados a:

- Engenharia de Software
- Ciência da Computação
- Métodos formais
- Teoria da Computação

---

## 👨‍💻 Autor

Desenvolvido como parte de estudos sobre lógica computacional e análise de algoritmos.
