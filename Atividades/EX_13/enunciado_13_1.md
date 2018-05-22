1. Cite as vantagens e desvantagens das comunicação serial:

(a) Assíncrona (UART).
Desvantagens:
-Requer uso dos periféricos;
-A comunicação não é feita em tempo real(depende da apĺicação);
-Maior isolamento;

Vantagens:
-Baixo custo;
-Facilidade de uso;
-Flexibilidade de horários e local;
-Permite mais tempo para reflexão; 

(b) SPI.
Desvantagens: 
-Requer uso dos periféricos;
-Alto custo de infraestrutura ;
-Implica uma enorme logística para preparar os meios de comunicação;
-Precisa ser agendada, perde a flexibilidade de horários
Vantagens:
-Interação em tempo real;
-Feedback instantâneo;
-Facilidade de uso;


2. Considere o caso em que a Raspberry Pi deve receber leituras analógico/digitais de um MSP430, e que a comunicação entre os dois é UART. É tecnicamente possível que o MSP430 mande os resultados da conversão A/D a qualquer hora, ou ele deve aguardar a Raspberry Pi fazer um pedido ao MSP430? Por quê?
POde nabdar a qualquer hora, porque a comunicação uart é assíncrona.

3. Considere o caso em que a Raspberry Pi deve receber leituras analógico/digitais de um MSP430, que a comunicação entre os dois seja SPI, e que o MSP430 seja o escravo. É tecnicamente possível que o MSP430 mande os resultados da conversão A/D a qualquer hora, ou ele deve aguardar a Raspberry Pi fazer um pedido ao MSP430? Por quê?
A qualquer hora não, porque na comunicação SPI tem um slave e um master e é o master que defini quem pode mandar e qual hora. A MSP430 é um slave e não um master, então não pode mandar a hora que quiser.

4. Se o Raspberry Pi tiver de se comunicar com dois dispositivos via UART, como executar a comunicação com o segundo dispositivo?
Ai depende do programado, ou de  quem desenvolveu o protocolo. Exemplo: Pode definir na palavra de dados um dos bits definindo que é hora de ler ele ou ler o outro slave.
5. Se o Raspberry Pi tiver de se comunicar com dois dispositivos via SPI, como executar a comunicação com o segundo dispositivo?
Em SPI tem duas formas: daisy chain e seleção indidual. O primeiro os dados do slaves são compartilhados entre si, já no outro método é por seleção.