/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */
package com.mycompany.jogodavelha_v2;
import javax.swing.*;
/**
 *
 * @author kevin
 */
public class JogoDaVelha_v2 {

    int contJogada = 0, vitX = 0, vitO = 0;
    String caminho[] = new String[8];
    boolean vitoria = false;

    public void star() {
        //Sempre que chamar essa função, ela ira resetar os parâmetros da classe para iniciar o novo jogo.
        contJogada = 0;
        for (int i = 0; i < 8; i++) {
            caminho[i] = "";
        }
        vitoria = false;
    }

    public String marcar(String simb) {
        if (simb.equals("O")) {
            simb = "X";
        } else {
            simb = "O";
        }
        contJogada++;
        return simb;
    }

    /*
    Caminhos    
C1=B1,B2,B3;
C2=B1,B5,B9	
C3=B1,B4,B7	
C4=B2,B5,B8	
C5=B4,B5,B6	
C6=B7,B8,B9	
C7=B7,B5,B3	
C8=B9,B6,B3*/
    public void salvarSimb(String caminho[], String simb, String nameButton) {
        String aux = "";
        if (nameButton.equals("B1")) {
            aux = caminho[0];
            caminho[0] = aux + simb;

            aux = caminho[1];
            caminho[1] = aux + simb;

            aux = caminho[2];
            caminho[2] = aux + simb;

        } else if (nameButton.equals("B2")) {
            aux = caminho[0];
            caminho[0] = aux + simb;

            aux = caminho[3];
            caminho[3] = aux + simb;

        } else if (nameButton.equals("B3")) {
            aux = caminho[0];
            caminho[0] = aux + simb;

            aux = caminho[6];
            caminho[6] = aux + simb;

            aux = caminho[7];
            caminho[7] = aux + simb;

        } else if (nameButton.equals("B4")) {
            aux = caminho[2];
            caminho[2] = aux + simb;

            aux = caminho[4];
            caminho[4] = aux + simb;

        } else if (nameButton.equals("B5")) {
            aux = caminho[1];
            caminho[1] = aux + simb;

            aux = caminho[3];
            caminho[3] = aux + simb;

            aux = caminho[4];
            caminho[4] = aux + simb;

            aux = caminho[6];
            caminho[6] = aux + simb;

        } else if (nameButton.equals("B6")) {
            aux = caminho[1];
            caminho[1] = aux + simb;

            aux = caminho[4];
            caminho[4] = aux + simb;

            aux = caminho[7];
            caminho[7] = aux + simb;

        } else if (nameButton.equals("B7")) {
            aux = caminho[2];
            caminho[2] = aux + simb;

            aux = caminho[5];
            caminho[5] = aux + simb;

            aux = caminho[6];
            caminho[6] = aux + simb;

        } else if (nameButton.equals("B8")) {
            aux = caminho[3];
            caminho[3] = aux + simb;

            aux = caminho[5];
            caminho[5] = aux + simb;

        } else if (nameButton.equals("B9")) {
            aux = caminho[1];
            caminho[1] = aux + simb;

            aux = caminho[5];
            caminho[5] = aux + simb;

            aux = caminho[7];
            caminho[7] = aux + simb;
        }
    }

    public boolean verificarVitor(String caminho[]) {
        int con = 0;
        int i =0;
        
        while ((i < 8) && (vitoria == false)) {
            con = caminho[i].length();
            if (con == 3) {
                if (caminho[i].equals("XXX")) {
                    vitX++;
                    vitoria = true;
                } else if (caminho[i].equals("OOO")){
                    vitO++;
                    vitoria = true;
                }
            } else {
                i++;
            }
        }/* Acredito que não precisa adicionar i++ */

        return vitoria;
    }
}

