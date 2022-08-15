#include "mbed.h"

// Declarando GPIO's
DigitalOut OUT(D4);       // Sinal de Saída
DigitalIn mais(D8);       // Botão para Aumentar Velocidade
DigitalIn menos(D9);      // Botão para Diminuir Velocidade



int main() { // Main()
    while(1) { // Loop Infinito
        OUT = !OUT; // Inverte o Valor do OUT
        wait_ms(4);  // Velocidade Nominal
    }
}