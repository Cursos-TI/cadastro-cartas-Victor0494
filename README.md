# 🃏 Desafio Super Trunfo - Países

Este projeto faz parte de um desafio acadêmico proposto pela empresa fictícia **MateCheck**, cujo objetivo é desenvolver, em linguagem C, um sistema inicial do jogo **Super Trunfo**, utilizando o tema **Países (Cidades)**.

O sistema permite o **cadastro de cartas**, o **cálculo de propriedades derivadas** e a **comparação entre duas cartas**, respeitando regras específicas para cada atributo.

---

## 🎯 Objetivo do Projeto

Desenvolver um programa em C que:

- Cadastre cartas representando cidades
- Calcule propriedades adicionais
- Permita a comparação entre duas cartas
- Determine a vencedora da rodada com base em regras definidas

O desafio está dividido em três níveis: **Novato**, **Aventureiro** e **Mestre**, onde cada nível adiciona novas funcionalidades ao sistema.

---

## 🧩 Níveis do Desafio

### 🟢 Nível Novato
No nível Novato, o foco é o **cadastro das cartas**.

Cada carta representa uma cidade e contém as seguintes propriedades:

- População
- Área
- PIB
- Número de pontos turísticos

📌 O usuário insere os dados via terminal e o sistema exibe todas as informações cadastradas.

---

### 🟡 Nível Aventureiro
No nível Aventureiro, o sistema passa a calcular propriedades adicionais:

- **Densidade Populacional**  
  (População ÷ Área)
- **PIB per Capita**  
  (PIB ÷ População)

Esses valores são calculados automaticamente e exibidos junto com os demais dados da carta.

---

### 🔴 Nível Mestre
No nível Mestre, o sistema permite a **comparação entre duas cartas**.

#### 🔍 Regras de Comparação:
- O usuário escolhe **dois atributos diferentes** para comparação.
- Para cada atributo:
  - **Ganha a carta com maior valor**
  - **Exceção:** Densidade Populacional → vence a carta com **menor valor**
- Após as comparações:
  - Os valores dos atributos escolhidos são somados
  - A carta com a **maior soma vence a rodada**
  - Se as somas forem iguais → **Empate**

---

## 📋 Atributos Disponíveis para Comparação

Durante o jogo, o usuário pode escolher entre os seguintes atributos:

1. População  
2. Área  
3. PIB  
4. Número de pontos turísticos  
5. Densidade demográfica  

⚠️ O sistema utiliza **menus dinâmicos**, garantindo que o mesmo atributo não possa ser escolhido duas vezes na mesma rodada.

---

## 🖥️ Como Compilar o Programa

Certifique-se de ter um compilador C instalado (ex: **GCC**).

No terminal, execute:

```bash
gcc CartasSuperTrunfo.c -o super_trunfo
```

▶️ Como Executar

Após a compilação, execute:

```bash
./super_trunfo
```


🧪 Exemplo de Uso (Fluxo Simplificado)

O programa solicita os dados da Carta 1

Em seguida, solicita os dados da Carta 2

Exibe os dados cadastrados e os valores calculados

Mostra o menu de atributos para comparação

O usuário escolhe:

Primeiro atributo → resultado exibido

Segundo atributo → resultado exibido

O sistema soma os atributos e exibe:

Soma de cada carta

Carta vencedora ou empate
