# 🌬️ Calculadora de Turbina Eólica

Este é um projeto acadêmico desenvolvido em linguagem C no ambiente online [Replit](https://replit.com). A proposta é simular o funcionamento de uma turbina eólica, calculando a potência gerada com base em dados técnicos e velocidades do vento informadas pelo usuário.

---

## 🧠 Sobre o Projeto

O programa foi criado como parte de um projeto acadêmico com foco em programação estruturada em C e aplicações práticas em energia renovável. Ele demonstra como conceitos de física e matemática podem ser integrados a soluções computacionais.

---

## 🎯 Objetivo

O objetivo é permitir o cálculo da potência gerada por uma turbina eólica, de forma simples e didática, usando entradas como:
- Diâmetro do rotor
- Densidade do ar
- Eficiência total do sistema
- Coeficiente de potência
- Velocidades do vento

---

## 📁 Estrutura do Código

```
calculadora_turbina_eolica/
├── main.c                          # Código fonte principal
├── turbina_config.txt             # Arquivo com dados técnicos da turbina
├── velocidades.txt                # Arquivo com velocidades do vento (opcional)
├── relatorio_potencia_eolica.txt # Arquivo gerado com os resultados
├── calculadora_de_turbina/        # Pasta com funções auxiliares (separação de lógica)
├── Makefile                       # Script de compilação automática
└── .replit / replit.nix           # Configurações do ambiente Replit
```

---

## 🚀 Como Usar no Replit

1. Acesse [https://replit.com](https://replit.com)
2. Crie um novo Repl com linguagem **C**
3. Copie os arquivos do projeto para dentro do ambiente
4. No terminal do Replit, compile com:

```bash
gcc main.c -o main
```

5. Execute o programa:

- Com entrada por arquivo:
```bash
./main turbina_config.txt velocidades.txt
```

- Ou entrada manual:
```bash
./main turbina_config.txt
```

---

## 📄 Exemplo de Arquivo de Configuração (`turbina_config.txt`)

```
diametro=50
densidade_ar=1.225
coeficiente_potencia=0.4
eficiencia_total=0.9
```

## 📄 Exemplo de Arquivo de Velocidades (`velocidades.txt`)

```
5
6
7.5
9
```

---

## ✅ Saída Esperada

```
Velocidade: 5.00 m/s → Potência: 520.13 W
Velocidade: 6.00 m/s → Potência: 748.99 W
Velocidade: 7.50 m/s → Potência: 1180.64 W
Velocidade: 9.00 m/s → Potência: 1755.72 W
```

---

Este projeto foi feito exclusivamente no **Replit**, com foco em aprendizado e aplicação de conceitos acadêmicos em programação C e energia renovável.
