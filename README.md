🌧️ Sistema de Alerta de Enchentes com Arduino
📌 Descrição do Problema
As enchentes urbanas representam um desafio significativo em muitas cidades brasileiras, resultando em danos materiais, interrupções no tráfego e riscos à vida. A falta de sistemas de alerta eficientes dificulta a tomada de decisões rápidas por parte da população e das autoridades.

🎯 Objetivo do Projeto
Desenvolver um sistema físico de monitoramento e alerta para enchentes, utilizando sensores que simulam o nível de chuva e o nível de alagamento. O sistema visa fornecer alertas visuais e sonoros em tempo real para auxiliar na prevenção de incidentes relacionados a enchentes.

🛠️ Componentes Utilizados
Arduino Uno

2 Potenciômetros (simulando sensores de nível de água e chuva)

3 LEDs (Verde, Amarelo, Vermelho)

Buzzer (alarme sonoro)

Resistores e fios de conexão
wokwi.com
+1
wokwi.com
+1

⚙️ Funcionamento do Sistema
O sistema lê os valores dos dois potenciômetros, representando os níveis de água e chuva. Com base nesses valores, o sistema determina o estado atual e aciona os LEDs e o buzzer conforme a seguinte lógica:

Nível Seguro: Ambos os sensores abaixo do limiar de atenção.

LED Verde aceso.

Buzzer desligado.

Nível de Atenção: Qualquer sensor entre os limiares de atenção e perigo.

LED Amarelo aceso.

Buzzer desligado.

Nível Crítico: Qualquer sensor acima do limiar de perigo.

LED Vermelho aceso.

Buzzer ativado com frequência de 1000Hz.
github.com
+1
docs.wokwi.com
+1
github.com
+5
wokwi.com
+5
wokwi.com
+5

💻 Simulação no Wokwi
Você pode testar o projeto diretamente no simulador Wokwi através do link abaixo:

🔗 Acessar Simulação no Wokwi

🎥 Vídeo Demonstrativo
Assista ao vídeo demonstrativo que apresenta o funcionamento do sistema:

🔗 Link para o Vídeo Demonstrativo <!-- Substitua '#' pelo link real do vídeo -->

📁 Estrutura do Repositório
pgsql
Copiar
Editar

├── sketch.ino           # Código-fonte do Arduino
├── diagram.json         # Esquema do circuito para o Wokwi
├── README.md            # Documentação do projeto
O código está devidamente comentado e segue boas práticas de programação para facilitar o entendimento e a manutenção.

📌 Considerações Finais
Este projeto demonstra como é possível utilizar componentes simples e de baixo custo para criar um sistema eficiente de alerta de enchentes. A implementação em simuladores como o Wokwi permite testar e validar a lógica antes de uma possível aplicação prática.

