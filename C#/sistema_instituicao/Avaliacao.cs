using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace C_
{
    public class Avaliacao
    {
        public double Nota { get; set; }

        public string Serie { get; set; }

        public string NomeAvaliacao { get; set; }

        Aluno aluno = new Aluno();

        Professor professor = new Professor();

        Disciplina disciplina = new Disciplina();

        public void CadAvaliacao(){
            Console.WriteLine("\n--- Cadastro Avaliacao ---\nNome da Avaliacao: ");
            NomeAvaliacao = Console.ReadLine();

            Console.WriteLine("Serie: ");
            Serie = Console.ReadLine();

            aluno.CadAluno(Serie);

            Console.WriteLine("Nota: ");
            ValdNota(double.Parse(Console.ReadLine()));

            professor.CadProf();

            disciplina.CadDisciplina();

            
        }

        public void ValdNota(double nota){
            if(nota<=10 && nota>=0){
                this.Nota = nota;
            }else{
                Console.WriteLine("\nErro! --- Nota digitada não é válida");
                ValdNota(nota);
            }
        }

    }  

}