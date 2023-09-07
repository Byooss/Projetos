using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace C_
{
    public class Professor
    {
        public string NomeProf { get; set; }

        public string TituloProf { get; set; }

        public void CadProf(){
            Console.WriteLine("\n--- Cadastro de Professor ---\nNome Professor: ");
            NomeProf = Console.ReadLine();

            Console.WriteLine("Título: ");
            TituloProf = Console.ReadLine();
        }
    }
}