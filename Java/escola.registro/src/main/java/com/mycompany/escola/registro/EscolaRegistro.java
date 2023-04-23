/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */
package com.mycompany.escola.registro;

import java.util.ArrayList;
import javax.swing.JOptionPane;

/**
 *
 * @author kevin
 */
public class EscolaRegistro {

    public static void main(String[] args) {

        /*Lista com espaços indefinidos*/
        ArrayList<Aluno> listAluno = new ArrayList<Aluno>();
        int opMenu;
        String listBusca = "";
        String listTotal = "";
        int buscar = 0, opAlterar = 0;

        do {
            opMenu = Integer.parseInt(JOptionPane.showInputDialog(null, "Bem vindo ao Sistema de Registro Escolar \n"
                    + "1-Cadastrar\n"
                    + "2-Consultar\n"
                    + "3-Alterar\n"
                    + "4-Excluir\n"
                    + "5-Imprimir\n"
                    + "6-Sair\n", "Registro", 1));
            int j = 0;
            switch (opMenu) {
                case 1:
                    int ra = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite o RA: ", "Cadastro", 1));
                    String nome = JOptionPane.showInputDialog(null, "Escreva o Nome: ", "Cadastro", 1);

                    int turma = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite o Turma: ", "Cadastro", 1));
                    String turno = JOptionPane.showInputDialog(null, "Escreva o Turno: ", "Cadastro", 1);
                    String curso = JOptionPane.showInputDialog(null, "Escreva o Curso: ", "Cadastro", 1);

                    Aluno aluno = new Aluno(ra, nome, turma, turno, curso);
                    listAluno.add(aluno);

                    break;
                case 2:
                    if (listAluno.isEmpty() == false) {
                        listBusca = "";
                        for (Aluno item : listAluno) {
                            listBusca += (j + 1) + " - " + item.getNome() + "\n";
                            j++;
                        }

                        buscar = Integer.parseInt(JOptionPane.showInputDialog(null, "Escolha o Aluno:\n" + listBusca, "Consulta de Alunos", 1));

                        int i = 0;
                        for (Aluno item : listAluno) {

                            if (listAluno.get(i).getRa() == listAluno.get(buscar - 1).getRa()) {
                                JOptionPane.showMessageDialog(null, "RA: " + item.getRa()
                                        + "\nNome: " + item.getNome()
                                        + "\nTurma: " + item.getTurma()
                                        + "\nTurno: " + item.getTurno()
                                        + "\nCurso: " + item.getCurso(), "Alunos", 1);
                            }
                            i++;
                        }
                    } else {
                        JOptionPane.showMessageDialog(null, "Nenhum aluno cadastrado", "Erro", 1);
                    }
                    break;

                case 3:
                    if (listAluno.isEmpty() == false) {
                        listBusca = "";
                        for (Aluno item : listAluno) {
                            listBusca += (j + 1) + " - " + item.getNome() + "\n";
                            j++;
                        }

                        buscar = Integer.parseInt(JOptionPane.showInputDialog(null, "Escolha o Aluno:\n" + listBusca, "Consulta de Alunos", 1));
                        opAlterar = Integer.parseInt(JOptionPane.showInputDialog(null, "Escolha o dado que deseja alterar: \n1-RA\n"
                                + "2-Nome\n"
                                + "3-Turma\n"
                                + "4-Turno\n"
                                + "5-Curso\n", "Alteração do Cadastro", 1));

                        int i = 0;
                        for (Aluno item : listAluno) {
                            if (listAluno.get(i).getRa() == listAluno.get(buscar - 1).getRa()) {
                                if (opAlterar == 1) {
                                    item.setRa(Integer.parseInt(JOptionPane.showInputDialog(null, "Escreva a Nova RA: \n", "Alterar RA", 1)));

                                } else if (opAlterar == 2) {
                                    item.setNome(JOptionPane.showInputDialog(null, "Escreva o Novo Nome: \n", "Alterar Nome", 1));

                                } else if (opAlterar == 3) {
                                    item.setTurma(Integer.parseInt(JOptionPane.showInputDialog(null, "Escreva a Nova Turma: \n", "Alterar Turma", 1)));

                                } else if (opAlterar == 4) {
                                    item.setTurno(JOptionPane.showInputDialog(null, "Escreva o Novo Turno: \n", "Alterar Turno", 1));

                                } else if (opAlterar == 5) {
                                    item.setCurso(JOptionPane.showInputDialog(null, "Escreva o Novo Curso: \n", "Alterar Curso", 1));

                                } else {
                                    JOptionPane.showMessageDialog(null, "Opção Inválida", "Erro", 1);
                                }
                            }
                            i++;
                        }
                    } else {
                        JOptionPane.showMessageDialog(null, "Nenhum aluno cadastrado", "Erro", 1);
                    }
                    break;
                case 4:
                    if (listAluno.isEmpty() == false) {
                        listBusca = "";
                        for (Aluno item : listAluno) {
                            listBusca += (j + 1) + " - " + item.getNome() + "\n";
                            j++;
                        }

                        buscar = Integer.parseInt(JOptionPane.showInputDialog(null, "Escolha o Aluno:\n" + listBusca, "Consulta de Alunos", 1));
                        int i = 0;

                        for (Aluno item : listAluno) {
                            if (JOptionPane.showConfirmDialog(null, "Deseja Confirmar a Exclusão", "Exclusão", JOptionPane.YES_NO_OPTION) == 0) {
                                if (listAluno.get(i).getRa() == listAluno.get(buscar - 1).getRa()) {
                                    listAluno.remove(i);
                                }
                            }
                            i++;
                            break;
                        }
                    } else {
                        JOptionPane.showMessageDialog(null, "Nenhum aluno cadastrado", "Erro", 1);
                    }
                    break;

                case 5:
                    if (listAluno.isEmpty() == false) {
                        JOptionPane.showMessageDialog(null, listAluno.toString().replace(",", "\n\n").replace("[", "").replace("]", ""), "Alunos", 1);
                    } else {
                        JOptionPane.showMessageDialog(null, "Nenhum aluno cadastrado", "Erro", 1);
                    }
                    break;
                case 6:
                    JOptionPane.showMessageDialog(null, " Fim da execução do programa ", "Encerrar", 1);
                    break;
                default:
                    JOptionPane.showMessageDialog(null, "Esta opção não é válida", "Erro 404", 0);
                    break;
            }
        } while (opMenu != 6);
    }
}
