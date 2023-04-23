package com.mycompany.jogo_puzzle;

import javax.swing.JButton;
import java.util.ArrayList;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import java.util.Collections;

//utizando extends para conseguir que a classe Codigo1 consiga herdar as funcoes de Thread
public class Codigo1 extends Thread {
    //Criacao da viavel para quantificar o movimendo das pecas   

    static int Quantidade_Movimentos = 0;
    //criacao da variavel de opcao de JOGAR NOVAMENTE ou SAIR
    static int op;

    //um metodo para fazer o movimento dos botoes que possuem 3 movimentos
    public static void movimento(JButton bp, JButton p1, JButton p2, JButton p3, JLabel Numero_Jogadas) {
        if (p1.getText().equals("")) {
            p1.setText(bp.getText());
            bp.setText("");

            //como a quantidade de movimentos tem que ser de acordo com o movimento das peças coloquei a variavel para armazenar a quantidade em cada movimento realizado
            Quantidade_Movimentos++;
            //para cada metodo de movimento e solicitado o label da quantidade de movimentos, dessa forma e possivel setar valores diretamente no label apos a movimentacao ser feita
            Numero_Jogadas.setText("Jogada Nº " + Quantidade_Movimentos);

        } else if (p2.getText().equals("")) {
            p2.setText(bp.getText());
            bp.setText("");

            Quantidade_Movimentos++;
            Numero_Jogadas.setText("Jogada Nº " + Quantidade_Movimentos);

        } else if (p3.getText().equals("")) {
            p3.setText(bp.getText());
            bp.setText("");

            Quantidade_Movimentos++;
            Numero_Jogadas.setText("Jogada Nº " + Quantidade_Movimentos);

        }
    }

    //um metodo para fazer o movimento dos botoes que possuem 2 movimentos
    public static void movimento(JButton bp, JButton p1, JButton p2, JLabel Numero_Jogadas) {
        if (p1.getText().equals("")) {
            p1.setText(bp.getText());
            bp.setText("");

            Quantidade_Movimentos++;
            Numero_Jogadas.setText("Jogada Nº " + Quantidade_Movimentos);

        } else if (p2.getText().equals("")) {
            p2.setText(bp.getText());
            bp.setText("");

            Quantidade_Movimentos++;
            Numero_Jogadas.setText("Jogada Nº " + Quantidade_Movimentos);

        }
    }

    //um metodo para fazer o movimento dos botoes que possuem 4 movimentos
    public static void movimento(JButton bp, JButton p1, JButton p2, JButton p3, JButton p4, JLabel Numero_Jogadas) {
        if (p1.getText().equals("")) {
            p1.setText(bp.getText());
            bp.setText("");

            Quantidade_Movimentos++;
            Numero_Jogadas.setText("Jogada Nº " + Quantidade_Movimentos);

        } else if (p2.getText().equals("")) {
            p2.setText(bp.getText());
            bp.setText("");

            Quantidade_Movimentos++;
            Numero_Jogadas.setText("Jogada Nº " + Quantidade_Movimentos);

        } else if (p3.getText().equals("")) {
            p3.setText(bp.getText());
            bp.setText("");

            Quantidade_Movimentos++;
            Numero_Jogadas.setText("Jogada Nº " + Quantidade_Movimentos);

        } else if (p4.getText().equals("")) {
            p4.setText(bp.getText());
            bp.setText("");

            Quantidade_Movimentos++;
            Numero_Jogadas.setText("Jogada Nº " + Quantidade_Movimentos);

        }
    }

    //um metodo para informar a vitoria do jogo onde ele pega a posiçao dos botoes no jogo e solicitamos a label onde estaria o espaco para ser incuido a mensagem de vitoria
    public static void vitoria(ArrayList<String> Posicao_Botoes, JLabel Mensagem_Vitoria) {
        ArrayList<String> Posicao_Vitoria = new ArrayList();
        Posicao_Vitoria.add("1");
        Posicao_Vitoria.add("2");
        Posicao_Vitoria.add("3");
        Posicao_Vitoria.add("4");
        Posicao_Vitoria.add("5");
        Posicao_Vitoria.add("6");
        Posicao_Vitoria.add("7");
        Posicao_Vitoria.add("8");
        Posicao_Vitoria.add("9");
        Posicao_Vitoria.add("10");
        Posicao_Vitoria.add("11");
        Posicao_Vitoria.add("12");
        Posicao_Vitoria.add("13");
        Posicao_Vitoria.add("14");
        Posicao_Vitoria.add("15");
        Posicao_Vitoria.add("");

        //se o vetor das posicoes dos botoes do jogo esteja igual a posicao ordenada e correta declarada dentro deste metodo e setado a mensagem de vitoria 
        if (Posicao_Botoes.equals(Posicao_Vitoria)) {
            Mensagem_Vitoria.setText("VOCE VENCEU!");
        }
    }

    //um metodo para embaralhar o jogo caso o usuario tenha vencido o jogo e desejar jogar novamente se nao for o caso jogador tera a opçao de sair
    public static void embaralhar(ArrayList<String> Nova_Posicao, JButton T1, JButton T2, JButton T3, JButton T4, JButton T5, JButton T6, JButton T7, JButton T8, JButton T9, JButton T10, JButton T11, JButton T12, JButton T13, JButton T14, JButton T15, JButton T16, JLabel Texto_Vitoria, JLabel Numero_Jogadas) {
        op = JOptionPane.showConfirmDialog(null, "Deseja jogar novamente?", "Jogar novamente!", 1);
        if (op == 0) {
            Collections.shuffle(Nova_Posicao);
            T1.setText(Nova_Posicao.get(0).toString());
            T2.setText(Nova_Posicao.get(1).toString());
            T3.setText(Nova_Posicao.get(2).toString());
            T4.setText(Nova_Posicao.get(3).toString());
            T5.setText(Nova_Posicao.get(4).toString());
            T6.setText(Nova_Posicao.get(5).toString());
            T7.setText(Nova_Posicao.get(6).toString());
            T8.setText(Nova_Posicao.get(7).toString());
            T9.setText(Nova_Posicao.get(8).toString());
            T10.setText(Nova_Posicao.get(9).toString());
            T11.setText(Nova_Posicao.get(10).toString());
            T12.setText(Nova_Posicao.get(11).toString());
            T13.setText(Nova_Posicao.get(12).toString());
            T14.setText(Nova_Posicao.get(13).toString());
            T15.setText(Nova_Posicao.get(14).toString());
            T16.setText(Nova_Posicao.get(15).toString());
        } else {
            System.exit(0);
        }
        //Limpar a mensagem de vitoria para comecar um novo jogo
        Texto_Vitoria.setText("");
        Quantidade_Movimentos = 0;
        Numero_Jogadas.setText("Jogada Nº "+0);
    }
}
