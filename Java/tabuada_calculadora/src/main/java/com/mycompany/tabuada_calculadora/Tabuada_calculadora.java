/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.tabuada_calculadora;
import java.util.Scanner;
/**
 *
 * @author kevin
 */
public class Tabuada_calculadora {
           
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in); 
        
        Tabuada operacaoTabuada = new Tabuada();
        Calculadora operacaoCalculadora = new Calculadora();
        OpMenuPrincipal opMenuPrinc = new OpMenuPrincipal();
        boolean op;
        
        System.out.print("Bem vindo a Super Calculadora\n");

        do{
            op=false;
            int opMenuP=opMenuPrinc.opMenuPrincipal(); 
            
            switch(opMenuP){ 

                case(1):
                    operacaoTabuada.menuTabuada();
                    break;
                case(2):
                    operacaoCalculadora.menuCalculadora();
                    break;
                default:
                    System.out.println("\nOpção escolhida inválida");
                    break;
                }
                System.out.print("\nDeseja voltar ao Menu Principal? [S/N]\n- ");
                String returnMenu = input.next().toUpperCase();
                
                if(returnMenu.equals("S")==true){    
                    op=true;
                }
        }while(op!=false);
                        
        System.out.println("\nFim da Execução da Super Calculadora\nAté a Próxima");   
    }
}
     
