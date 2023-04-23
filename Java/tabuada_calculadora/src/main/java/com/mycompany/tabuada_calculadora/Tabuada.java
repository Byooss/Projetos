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
public class Tabuada {
    
    Scanner input = new Scanner(System.in);
    int valorA;
    
    public void menuTabuada(){

        System.out.print("\nQual operação deseja realizar: (Digite um número)\n"
                + "1 - Adição\n"
                + "2 - Multiplicação\n"
                + "3 - Subtração\n"
                + "4 - Divisão\n"
                + "0 - Encerra Tabuada\n"
                + "- ");


        int opMenu = input.nextInt();
        
        if((opMenu<0)||(opMenu>4)){
            System.out.println("\nOpção escolhida é inválida");
            return;
        }
        if(opMenu == 0){
            return;
        }

        System.out.print("\nDigite o valor para Tabuda: ");
        valorA = input.nextInt();

        for(int i =1;i<=10;i++){
            if(opMenu == 1){
                System.out.println(valorA+" + "+i+" = "+ (valorA+i));
            }
            if (opMenu == 2){
                System.out.println(valorA+" x "+i+" = "+ (valorA*i));
            }
            if (opMenu == 3){
                System.out.println((valorA+i)+" - "+valorA+" = "+ i);
            }
            if (opMenu == 4){
                System.out.println(valorA*i+" ÷ "+valorA+" = "+ i);
            }
        }
        
        System.out.print("\nDeseja ver outra Tabuada? [S/N]\n- ");
        String returnMenu = input.next().toUpperCase();
        if(returnMenu.equals("S")){
            menuTabuada();
        }
    }       
}
