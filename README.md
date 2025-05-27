# 🔐 RFID Access – Controle de Acesso com Arduino

Este projeto implementa um sistema de controle de acesso utilizando o **módulo RFID RC522** com **Arduino UNO**. A ideia é simular o funcionamento de uma catraca ou porta controlada via cartão RFID, onde cada cartão autorizado permite ou nega a entrada.

---

## 🚀 Funcionalidades

- 🟢 Leitura de cartões RFID
- 🔐 Validação de cartões autorizados
- 🚫 Bloqueio de cartões não cadastrados
- 📟 Feedback visual via LED ou display (opcional)
- 🔊 Sinal sonoro com buzzer (opcional)

---

## 🔧 Componentes Utilizados

- Arduino UNO  
- Módulo RFID RC522  
- Jumpers e protoboard  
- LEDS (verde/vermelho)  
- Buzzer (opcional)  
- Fonte 5V

---

## 🔌 Esquema de Ligações

| Pino RFID RC522 | Pino Arduino |
|------------------|--------------|
| SDA              | D10          |
| SCK              | D13          |
| MOSI             | D11          |
| MISO             | D12          |
| IRQ              | Não conectado|
| GND              | GND          |
| RST              | D9           |
| 3.3V             | 3.3V         |

---

## ▶️ Como Executar

1. Conecte os componentes de acordo com o esquema
2. Abra o código no Arduino IDE
3. Instale a biblioteca **MFRC522** (`Manage Libraries`)
4. Faça upload do código para a placa
5. Aproxime um cartão RFID do sensor e veja o resultado no Serial Monitor

---

## 🧠 Aprendizados

- Leitura de tags RFID com Arduino
- Comparação de UIDs para controle de acesso
- Integração com periféricos como LEDs e buzzers
- Estruturação de lógica de segurança em projetos físicos

---

## 📸 Demonstração

> *(Você pode adicionar fotos, esquema Fritzing ou vídeo da leitura RFID aqui)*

---

## 📄 Licença

Este projeto é de uso livre para fins educacionais e pode ser adaptado para catracas, portas, fechaduras, armários inteligentes, etc.

---

## 🙋‍♂️ Autor

Desenvolvido por [Wendel Neres](https://github.com/WendelNeres)  
📧 wendelneres.dev@gmail.com  
🔗 [LinkedIn](https://www.linkedin.com/in/wendel-dos-santos-neres-1a8675275)
