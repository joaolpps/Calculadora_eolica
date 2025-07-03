
# 🌬️ Calculadora de Potência de Turbina Eólica

Este é um projeto em linguagem C que calcula a potência gerada por uma turbina eólica com base na velocidade do vento, densidade do ar, raio das pás e coeficiente de potência (Cp).

---

## ⚡ Fórmula Física da Potência Eólica

A potência gerada por uma turbina eólica é calculada com base na energia cinética do vento. A fórmula física usada é:

\[
P = \frac{1}{2} \cdot \rho \cdot A \cdot v^3 \cdot C_p
\]

### Onde:

| Símbolo | Significado                                            | Unidade        |
|---------|---------------------------------------------------------|----------------|
| \(P\)   | Potência gerada pelo vento                              | Watts (W)      |
| \(\rho\)| Densidade do ar (típico: 1.225 kg/m³ ao nível do mar)  | kg/m³          |
| \(A\)   | Área varrida pelas pás (calculada como \(A = \pi r^2\)) | metros quadrados (m²) |
| \(v\)   | Velocidade do vento                                     | metros por segundo (m/s) |
| \(C_p\) | Coeficiente de potência da turbina (eficiência)         | Adimensional (0 < Cp ≤ 0.59) |

---

### 🔎 Observações:
- O **limite teórico de eficiência** de uma turbina é de **59,3%**, conhecido como **Limite de Betz**:
  \[
  C_p \leq 0.593
  \]
- Na prática, turbinas comerciais operam com \(C_p\) entre **0.35** e **0.45**.
- A área \(A\) depende do **raio das pás**:
  \[
  A = \pi \cdot r^2
  \]

---

## 📁 Arquivos

- `main.c`: Código-fonte principal em C.
- `turbina_config.txt`: Arquivo de configuração com o raio das pás e o coeficiente Cp.
- `relatorio_potencia_eolica.txt`: Gerado automaticamente com os resultados após a execução.
- `README.txt`: Instruções para executar localmente ou no Replit.

---

## ▶️ Como executar

### ✅ No Replit:

1. Acesse: [https://replit.com/new/c](https://replit.com/new/c)
2. Substitua o conteúdo do `main.c` com o código fornecido.
3. Adicione um novo arquivo chamado `turbina_config.txt` com o seguinte conteúdo:
   ```
   RaioMetros: 50.0
   CoeficientePotencia: 0.45
   ```
4. Clique em **"Run"**.
5. Insira os dados solicitados no terminal:
   - Densidade do ar (ex: `1.225`)
   - Velocidade mínima do vento (ex: `1`)
   - Velocidade máxima do vento (ex: `10`)
6. O resultado será exibido no terminal e salvo em `relatorio_potencia_eolica.txt`.

---

## 🧠 Exemplo de entrada no terminal

```
Informe a densidade do ar (ex: 1.225): 1.225
Informe a velocidade mínima do vento (m/s): 1
Informe a velocidade máxima do vento (m/s): 5
```

---

## 🔧 Tecnologias

- Linguagem: C (ANSI C)
- Plataforma recomendada: [Replit](https://replit.com) ou compilador GCC local

---

## 📄 Licença

Este projeto está sob a licença MIT. Sinta-se livre para usar, modificar e compartilhar.

---
