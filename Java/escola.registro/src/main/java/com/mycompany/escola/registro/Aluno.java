/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.escola.registro;

/**
 *
 * @author kevin
 */
public class Aluno {
    private int ra;
    private String nome;
    private int turma;
    private String turno;
    private String curso;

    public Aluno(int ra, String nome, int turma,String turno, String curso) {
        this.ra = ra;
        this.nome = nome;
        this.turma = turma;
        this.turno = turno;
        this.curso = curso;
    }
    
    public int getRa() {
        return ra;
    }

    public void setRa(int ra) {
        this.ra = ra;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getTurma() {
        return turma;
    }

    public void setTurma(int turma) {
        this.turma = turma;
    }

    public String getTurno() {
        return turno;
    }

    public void setTurno(String turno) {
        this.turno = turno;
    }

    public String getCurso() {
        return curso;
    }

    public void setCurso(String curso) {
        this.curso = curso;
    }
    @Override
    public String toString() {
        StringBuffer listTotal = new StringBuffer();
                listTotal.append("RA: " + getRa());
                listTotal.append( "\nNome: " + getNome());
                listTotal.append( "\nTurma: " + getTurma());
                listTotal.append("\nTurno: " + getTurno());
                listTotal.append("\nCurso: " + getCurso());
        
        return listTotal.toString();
    }
    
}