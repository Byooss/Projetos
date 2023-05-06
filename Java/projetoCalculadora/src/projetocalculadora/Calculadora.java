package projetocalculadora;

import javax.swing.*;

public class Calculadora {

    boolean virgulaAp;

    public void exibir(JButton bCalc, JLabel resultado) {
        if (resultado.getText().equals("0")) {
            resultado.setText(bCalc.getText());
        } else {
            resultado.setText(resultado.getText() + bCalc.getText());
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

}
