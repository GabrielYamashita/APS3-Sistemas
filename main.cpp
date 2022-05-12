#include "mbed.h"

// Declarando GPIO's
DigitalOut OUT(D4);       // Sinal de Saída
DigitalIn mais(D8);       // Botão para Aumentar Velocidade
DigitalIn menos(D9);      // Botão para Diminuir Velocidade



int main() { // Main()
    while(1) { // Loop Iinfinito
        OUT = !OUT; // Inverte o Valor do OUT
        if(mais == 0) {  // Botão Mais Pressionado
            wait_ms(2);  // 2x Velocidade 
        } else if(menos == 0) {   // Botão Menos Pressionado
            wait_ms(8);           // 0.5x Velocidade 
        } else {         // Nenhum Botão Pressionado
            wait_ms(4);  // Velocidade Nominal
        }
    }
}