# Super Trunfo - Cidades Brasileiras 🇧🇷

Este é um pequeno jogo inspirado no Super Trunfo, onde duas cartas de cidades (a cadastrar pelo usuário) são comparadas com base em atributos como população, área, PIB, pontos turísticos e densidade populacional, PIB per Capita e Super Poder (cálculo de todos atributos).

---

## 🧠 Sobre o jogo

O jogo permite o cadastro de duas cartas:

- **Carta 1**: A cadastrar
- **Carta 2**: A cadastrar

O usuário escolhe dois atributo no menu para comparar entre as duas cidades, e o programa informa qual delas venceu com base no valor dos atributo escolhidos.

Também é comparado os dois atributos, somados, de uma carta contra a outra.

---

## 📦 Compilação

Você pode compilar usando o `gcc`:

```bash
gcc -o supertrunfo logicaSuperTrunfo.c
```

> Substitua `logicaSuperTrunfo.c` pelo nome do seu arquivo `.c`, se for diferente.

---

## ▶️ Execução

Após compilar, execute o programa com:

```bash
./logicaSuperTrunfo
```

No Windows, use:

```cmd
supertrunfo.exe
```

---

## 📋 Atributos disponíveis para comparação

1. População Total
2. Área Total (em km²)
3. PIB Total
4. Número de pontos turísticos
5. Densidade populacional (habitantes por km²)
6. PIB per Capita
7. Super Poder

---

## 🛠️ Requisitos

- Compilador C (como `gcc`)
- Terminal compatível com UTF-8 (o programa utiliza `setlocale` para acentuação)

---

## obs

Feito como parte de exercícios de lógica e estruturas condicionais em C.

Objetivo: praticar `if/else`, `switch`, operador ternário, uso de variáveis, cálculos e menus interativos.

---