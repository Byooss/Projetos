package projetocalculadora;

import javax.swing.*;

public class Calculadora {

    boolean virgulaAp;
    double vNum1, vNum2;
    String aux, vSimb;

    public void exibir(JButton bCalc, JLabel resultado) {
        if (resultado.getText().equals("0") || (!(aux == ""))) {
            resultado.setText(bCalc.getText());
            aux = "";
        } else {
            resultado.setText(resultado.getText() + bCalc.getText());
        }
    }

    public void guardarOperacao(String num1, String simb, JLabel guardarConta) {
        vNum1 = Double.parseDouble(num1.replace(",", "."));
        vSimb = simb;
        aux = Double.toString(vNum1);
        if ((int) vNum1 != vNum1) {
            num1 = aux.replace(".", ",");
            guardarConta.setText(num1 + " " + simb);
        } else {
            vNum1 = (int)vNum1;
            guardarConta.setText(num1+" "+simb);
        }

    }

    public String menosMais(String sinal, JLabel resultado) {
        if (!(resultado.getText().equals("0"))) {
            if (sinal.equals("+")) {
                resultado.setText("-" + resultado.getText());
                sinal = "-";

            } else if (sinal.equals("-")) {
                resultado.setText(resultado.getText().substring(1, resultado.getText().length()));
                sinal = "+";
            }
        }
        return sinal;
    }

    public String apagarCaract(String sinal, JLabel resultado) {
        if (!(resultado.getText().equals("0"))) {

            if ((resultado.getText().substring(resultado.getText().length() - 1, resultado.getText().length())).equals(",")) {
                virgulaAp = false;
            }

            resultado.setText(resultado.getText().substring(0, resultado.getText().length() - 1));

            if (resultado.getText().equals("")) {
                resultado.setText("0");
                sinal = "+";
                virgulaAp = false;

            }
            if (sinal.equals("-") && (resultado.getText().length() == 1)) {
                resultado.setText("0");
                sinal = "+";
                virgulaAp = false;
            }
        }
        return sinal;
    }
    
    public void umBarraX(String num1,JLabel resultado, JLabel guardarConta){
        double vAux = Double.parseDouble(num1.replace(",","."));
        double res = 1/vAux;
        String vAux2 = Double.toString(res);
        System.out.println(vAux2);
        String list[] = vAux2.replace(".", ",").split(",");
        if(list[1].equals("0")){
        System.out.println(list[0]);
            resultado.setText(list[0]);
            guardarConta.setText("1/("+list[0]+")");
        }
        else{
            resultado.setText(vAux2.replace(".",","));
            guardarConta.setText("1/("+vAux2.replace(".", ",")+")");
        }
    }
    
    public void porcentValor(String num, JLabel visorPrincipal, JLabel visor ){
        String vPorcent = "";
        Double resp = Double.parseDouble(num.replace(",", "."));
        double vAux = 0;
        
        switch(vSimb){
            case "+":case"-":
                vAux = (vNum1*resp)/100;
                break;
            case "x":case"/":
                vAux = resp/100;
                break;
        }
        vPorcent = Double.toString(vAux).replace(".", ",");
        String list[] = vPorcent.split(",");
        if(list[1].equals("0")){
            vPorcent=list[0];
        }
        //metodoDasOperações(vPorcent,visorPrincipal,visor);
    }
}
