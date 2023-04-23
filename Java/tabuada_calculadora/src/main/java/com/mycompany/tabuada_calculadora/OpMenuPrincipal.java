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
public class OpMenuPrincipal {
    Scanner input = new Scanner(System.in);
    
        public int opMenuPrincipal(){
        System.out.print("\nEscolha a opção que deseja\n"
                + "1 - Tabuada\n"
                + "2 - Calculadora \n"
                + "- ");
        
        int opMenuP=input.nextInt();
        
        return opMenuP;
    }
}
