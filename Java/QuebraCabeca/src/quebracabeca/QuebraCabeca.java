/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package quebracabeca;

import javax.swing.JButton;

/**
 *
 * @author laboratorio.simnum
 */
public class QuebraCabeca {

    public void mover(JButton bp, JButton b1, JButton b2, JButton b3, JButton b4) {
        if (b1.getText().equals("")) {
            b1.setText(bp.getText());
            bp.setText("");
        } else if (b2.getText().equals("")) {
            b2.setText(bp.getText());
            bp.setText("");
        } else if (b3.getText().equals("")) {
            b3.setText(bp.getText());
            bp.setText("");
        } else if (b4.getText().equals("")) {
            b4.setText(bp.getText());
            bp.setText("");
        }}
    
    public void mover(JButton bp, JButton b1, JButton b2, JButton b3) {
        if (b1.getText().equals("")) {
            b1.setText(bp.getText());
            bp.setText("");
        } else if (b2.getText().equals("")) {
            b2.setText(bp.getText());
            bp.setText("");
        } else if (b3.getText().equals("")) {
            b3.setText(bp.getText());
            bp.setText("");
        }
    }

    public void mover(JButton bp, JButton b1, JButton b2) {
        if (b1.getText().equals("")) {
            b1.setText(bp.getText());
            bp.setText("");
        } else if (b2.getText().equals("")) {
            b2.setText(bp.getText());
            bp.setText("");
        }
    }
}
