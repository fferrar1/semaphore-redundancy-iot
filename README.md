# 🚦 Sistema de Semáforo com Redundância usando Arduino

Este projeto simula um sistema de **semáforo com redundância**, utilizando a plataforma **Arduino Uno**. O objetivo é garantir a **confiabilidade** do sistema de sinalização em caso de falha do semáforo principal.

---

## 🧠 Conceito

O sistema possui dois conjuntos de LEDs (vermelho e verde), representando dois semáforos:
- **Semáforo Principal**
- **Semáforo Backup (Redundante)**

Um botão (ou jumper) é utilizado para **simular uma falha no semáforo principal**. Quando a falha é detectada, o controle da sinalização é transferido automaticamente para o semáforo de backup.

---

## 🛠️ Materiais Utilizados

- 1x Arduino Uno  
- 2x LEDs vermelhos  
- 2x LEDs verdes  
- 4x Resistores de 220Ω  
- 1x Botão ou jumper para simular falha  
- Protoboard e fios jumper

---

## ⚙️ Pinos Utilizados

| Função                  | Pino |
|-------------------------|------|
| LED vermelho (principal) | 2    |
| LED verde (principal)    | 3    |
| LED vermelho (backup)    | 4    |
| LED verde (backup)       | 5    |
| Botão de falha           | 6    |

> O botão deve estar conectado entre o pino 6 e o GND, utilizando `INPUT_PULLUP`.

---

## 📋 Lógica de Funcionamento

1. O sistema inicia com o **semáforo principal ativo**.
2. As luzes alternam entre **vermelho (3s)** e **verde (3s)**.
3. Se o botão for pressionado (simulando uma falha), o sistema:
   - Desliga o semáforo principal.
   - Ativa o **semáforo de backup**, que passa a alternar as luzes normalmente.
4. Quando a falha é resolvida (botão solto), o controle volta ao semáforo principal.

---

## 🧾 Código-Fonte

> O código completo está no arquivo [`semaforo_redundante.ino`](./semaforo_redundante.ino)

---

## 📦 Como Usar

1. Monte o circuito conforme o esquema.
2. Carregue o código para o Arduino usando a IDE do Arduino.
3. Abra o monitor serial (9600 baud) para visualizar o status do sistema.
4. Pressione o botão para simular a falha e observar o semáforo de backup assumindo o controle.

---

## 🚀 Expansões Futuras

- Adicionar luz amarela com temporizador.
- Integrar sensor de presença de veículos.
- Conectar o sistema à internet (IoT) para monitoramento remoto de falhas.
- Usar dois Arduinos reais para redundância completa com comunicação serial.

---

## 🧑‍💻 Autor

**Bernardo Braga**
**Eduardo Moraes**
**Fernanda Ferrari**  
Projeto desenvolvido como exemplo de aplicação de redundância em sistemas embarcados com Arduino.

---

## 📜 Licença

Este projeto está sob a licença MIT. Sinta-se livre para usar, modificar e compartilhar.

