package com.mycompany.jogo_puzzle;

import javax.swing.JLabel;

//Criacao da clase que gerencia o cronometro tendo eranca da clase Thread
public class Teste extends Thread {

    //Criacao das variaveis   
    JLabel tempo;
    boolean novo_jogo ;
    int h = 0;
    int m = 0;
    int s = 0;

    //criacao do construtor e incluindo o metodo Start() vindo do Thread para iniciar a tarefa
    public Teste(JLabel tempo, boolean novo_jogo) {
        this.tempo = tempo;
        this.novo_jogo = novo_jogo;
        start();
    }

    //funcao run() responsável em dar inicio a contagem do cronometro
    public void run() {
        //o valor boleano informa que houve uma inicializacao de novo jogo e comeca a conta o tempo
        if (!novo_jogo) {
            h = 0;
            m = 0;
            s = 0;
        }
        try {
            for (h = 00; h < 24; h++) {
                for (m = 00; m < 60; m++) {
                    for (s = 00; s < 60; s++) {
                        tempo.setText(String.format("Time: %02d:%02d:%02d", h, m, s));
                        // Vai ser executado o for de 1000 e 1000 milisegundos (a cada segundo)
                        Thread.sleep(1000);

                    }
                }
            }
        } //acao de interrupcao do cronometro
        catch (InterruptedException e) {            
            e.printStackTrace();
        }
    }
}
