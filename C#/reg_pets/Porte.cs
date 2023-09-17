using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace reg_pets
{
    public class Porte
    {
        public string PorteAnimal { get; set; }

        public void DefPorte()
        {
            int opPorte;
            Console.WriteLine("\n-- Defina o Porte -- \n1-Pequeno\n2-Médio\n3-Grande");
            opPorte = int.Parse(Console.ReadLine());

            switch (opPorte)
            {
                case 1:
                    this.PorteAnimal = "Animal de Pequeno Porte";
                    break;
                case 2:
                    this.PorteAnimal = "Animal de Médio Porte";
                    break;
                case 3:
                    this.PorteAnimal = "Animal de Grande Porte";
                    break;
                default:
                    Console.WriteLine("\n-- Opção invalida! --\nEscolha Novamente\n");
                    DefPorte();
                    break;
            }
;
        }
    }
}