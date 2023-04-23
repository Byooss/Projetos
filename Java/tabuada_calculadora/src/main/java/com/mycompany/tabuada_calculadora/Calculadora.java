/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.tabuada_calculadora;
import java.util.Scanner;

/**
 *
 * @author kevin
 */
public class Calculadora {
    
    Scanner input = new Scanner(System.in);
    double valorA,valorB,result;
    
    public void menuCalculadora(){

        System.out.print("\nQual operação deseja realizar: (Digite um número)\n"
                + "1 - Adição\n"
                + "2 - Multiplicação\n"
                + "3 - Subtração\n"
                + "4 - Divisão\n"
                + "0 - Encerra Calculadora\n"
                + "- ");
        
        int opMenu = input.nextInt();
        
        if((opMenu<0)||(opMenu>4)){
            System.out.println("\nOpção escolhida é inválida");
            return;
        }
        if(opMenu==0){
            return;
        }
        
        System.out.print("\nDigite o Primeiro valor:\n- ");
        valorA = input.nextDouble();
        
        System.out.print("\nDigite o Segundo valor:\n- ");
        valorB = input.nextDouble();
        
        if(opMenu==1){
            soma(valorA,valorB);
        }
                
        if(opMenu==2){
            multiplicacao(valorA,valorB);
        }
                
        if(opMenu==3){
            subtracao(valorA,valorB);
        }
                
        if(opMenu==4){
            divisao(valorA,valorB);
        }
        
        System.out.print("\nDeseja ver outro Calculo? [S/N]\n- ");
        String returnMenu = input.next().toUpperCase();
        if(returnMenu.equals("S")){
            menuCalculadora();
        }
        
    }
    
    public void soma(double valorA,double valorB){
        result= valorA+valorB;
        System.out.println(valorA+" + "+valorB+" = "+result);
    }
    public void multiplicacao(double valorA,double valorB){
        result= valorA*valorB;
        System.out.println(valorA+" x "+valorB+" = "+result);
    }    
    public void subtracao(double valorA,double valorB){
        result= valorA-valorB;
        System.out.println(valorA+" - "+valorB+" = "+result);
    }    
    public void divisao(double valorA,double valorB){
        if(valorB!=0){
            result= valorA/valorB;
            System.out.println(valorA+" ÷ "+valorB+" = "+result);
        }
        else{
            System.out.println("\nNão é possível Dividir por 0 (ZERO)");
        }
    }    
}
