# 🌬️ Calculadora de Potência de Turbina Eólica

Este é um projeto em linguagem C que calcula a potência gerada por uma turbina eólica com base na velocidade do vento, densidade do ar, raio das pás e coeficiente de potência (Cp).

---

## 📐 Fórmula utilizada

A potência gerada é calculada pela fórmula física:

\[
P = 0.5 \times \rho \times A \times v^3 \times Cp
\]

Onde:

- `P` = Potência gerada (Watts)  
- `ρ` = Densidade do ar (kg/m³)  
- `A` = Área varrida pelas pás (m²), calculada como π × raio²  
- `v` = Velocidade do vento (m/s)  
- `Cp` = Coeficiente de potência da turbina (entre 0 e 0.59)

---

## 📁 Arquivos

- `main.c`: Código-fonte principal em C.
- `turbina_config.txt`: Arquivo de configuração com o raio das pás e o coeficiente Cp.
- `relatorio_potencia_eolica.txt`: Gerado automaticamente com os resultados após a execução.
- `README.txt`: Instruções detalhadas para executar localmente ou no Replit.

---

## ▶️ Como executar

### ✅ No Replit:

1. Acesse: [https://replit.com/new/c](https://replit.com/new/c)
2. Substitua o conteúdo do `main.c` com o código fornecido.
3. Adicione um novo arquivo chamado `turbina_config.txt` e preencha com:
RaioMetros: 50.0
CoeficientePotencia: 0.45
4. Clique em **"Run"**.
5. Insira no terminal os seguintes dados:
- Densidade do ar (ex: `1.225`)
- Velocidade mínima do vento (ex: `1`)
- Velocidade máxima do vento (ex: `10`)
6. O programa exibirá os resultados no terminal e criará um relatório `relatorio_potencia_eolica.txt`.

---

## 🧠 Exemplo de entrada no terminal

Informe a densidade do ar (ex: 1.225): 1.225
Informe a velocidade mínima do vento (m/s): 1
Informe a velocidade máxima do vento (m/s): 5


---

## 📌 Observações

- Os valores podem ser ajustados no arquivo `turbina_config.txt` conforme o modelo de turbina que você deseja simular.
- Você pode modificar o incremento da velocidade (por exemplo, de 0.5 em 0.5 m/s) diretamente no `for` do código.

---

## 🔧 Tecnologias

- Linguagem: C (ANSI C)
- Plataforma recomendada: [Replit](https://replit.com) ou compilador GCC local

---
