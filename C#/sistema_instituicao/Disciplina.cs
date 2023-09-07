using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace C_
{
    public class Disciplina
    {
        public string NomeDisciplina { get; set; }

        public int CargaHoraria { get; set; }

        public void CadDisciplina()
        {
            Console.WriteLine("\n--- Cadastro de Disciplina ---\nNome da Disciplina: ");
            NomeDisciplina = Console.ReadLine();

            Console.WriteLine("Carga Horária: ");
            CargaHoraria = int.Parse(Console.ReadLine());

        }
    }
}