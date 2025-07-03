# 🌬️ Calculadora de Potência de Turbina Eólica

Este é um projeto em linguagem C que calcula a potência gerada por uma turbina eólica com base na velocidade do vento, densidade do ar, raio das pás e coeficiente de potência (Cp).

---

## ⚡ Fórmula Física da Potência Eólica

A potência gerada por uma turbina eólica é calculada com base na energia cinética do vento. A fórmula física usada é:

**P = 0.5 × ρ × A × v³ × Cp**

### Onde:

| Símbolo | Significado                                              | Unidade                   |
|---------|----------------------------------------------------------|---------------------------|
| **P**   | Potência gerada pelo vento                               | Watts (W)                 |
| **ρ**   | Densidade do ar (tipicamente 1.225 kg/m³ ao nível do mar)| kg/m³                     |
| **A**   | Área varrida pelas pás *(A = π × r²)*                    | metros quadrados (m²)     |
| **v**   | Velocidade do vento                                      | metros por segundo (m/s)  |
| **Cp**  | Coeficiente de potência da turbina (eficiência)          | Adimensional (0 < Cp ≤ 0.59) |

> Obs.: O **Cp** tem como limite teórico máximo o valor de **0.593**, conhecido como **Limite de Betz**.

---

## 📁 Arquivos

- `main.c`: Código-fonte principal em C.
- `turbina_config.txt`: Arquivo de configuração com o raio das pás e o coeficiente Cp.
- `relatorio_potencia_eolica.txt`: Gerado automaticamente com os resultados.
- `README.txt`: Instruções para executar localmente ou no Replit.

---

## ▶️ Como executar

### ✅ No Replit:

1. Acesse: https://replit.com/new/c
2. Substitua o conteúdo do `main.c` com o código fornecido.
3. Adicione um novo arquivo chamado `turbina_config.txt` com o seguinte conteúdo:
   ```
   RaioMetros: 50.0
   CoeficientePotencia: 0.45
   ```
4. Clique em "Run".
5. Insira os dados solicitados no terminal.

O resultado será exibido no terminal e salvo em `relatorio_potencia_eolica.txt`.

### ✅ Executar localmente (GCC):

1. Compile com o GCC:
   ```bash
   gcc main.c -o turbina
   ```

2. Crie o arquivo `turbina_config.txt` com:
   ```
   RaioMetros: 50.0
   CoeficientePotencia: 0.45
   ```

3. Execute:
   ```bash
   ./turbina
   ```

4. Insira os dados solicitados.

---

## 🧠 Exemplo de entrada no terminal

```
Informe a densidade do ar (ex: 1.225): 1.225
Informe a velocidade mínima do vento (m/s): 1
Informe a velocidade máxima do vento (m/s): 5
```

---

## 🔧 Tecnologias

- Linguagem: C 
- Plataforma recomendada: Replit ou compilador GCC local

---
