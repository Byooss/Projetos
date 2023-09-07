using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace C_
{
    public class Aluno
    {
        public string NomeAluno { get; set; }

        public string SerieAluno { get; set; }

        public int MatriculaAluno { get; set; }

        public void CadAluno(string serie)
        {


            Console.WriteLine("\n--- Cadastro de Aluno ---\nNome do Aluno: ");
            NomeAluno = Console.ReadLine();

            Console.WriteLine("Serie: ");
            SerieAluno = Console.ReadLine();

            if (serie != SerieAluno)
            {
                Console.WriteLine("\nErro! --- Aluno não faz parte desta Serie ---");
                CadAluno(serie);
            }
            else
            {
                Console.WriteLine("Matricula: ");
                MatriculaAluno = int.Parse(Console.ReadLine());
            }
        }
    }
}