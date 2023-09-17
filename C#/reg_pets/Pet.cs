using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace reg_pets
{
    public class Pet
    {
        public string NomePet { get; set; }
        public string RacaPet { get; set; }
        public string Vacinado { get; set; }
        public int IdadePet { get; set; }
        public string EspecieAnimal { get; set; }
        public Porte PorteAnimal { get; set; }

        public void CadPet()
        {
            Console.WriteLine("\t -- Cadastro de Pets --\n");

            //especie pet
            AddEspecie();

            //nome pet
            Console.WriteLine("Nome Pet: ");
            this.NomePet = Console.ReadLine();

            //raca pet
            Console.WriteLine("Raça Pet: ");
            this.RacaPet = Console.ReadLine();

            //idade pet
            Console.WriteLine("Idade Pet: ");
            this.IdadePet = int.Parse(Console.ReadLine());

            //vacina pet
            ValidarVacina();

        }

        public void AddEspecie()
        {
            Console.WriteLine("1-Cachorro\n2-Gato");
            int opEspecie = int.Parse(Console.ReadLine());

            switch (opEspecie)
            {
                case 1:
                    this.EspecieAnimal = "Cachorro";
                    //def porte dog
                    Porte porteDog = new Porte();
                    porteDog.DefPorte();
                    this.PorteAnimal = porteDog;
                    break;
                case 2:
                    this.EspecieAnimal = "Gato";
                    break;
                default:
                    Console.WriteLine("\n-- Opção invalida! --\nEscolha Novamente\n");
                    AddEspecie();
                    break;
            }

        }
        public void ValidarVacina()
        {
            Console.WriteLine("Pet Vacinado [S/N]: ");
            string opVacinado = Console.ReadLine().ToUpper();


            if (string.Equals(opVacinado, "S", StringComparison.OrdinalIgnoreCase))
            {
                this.Vacinado = "Pet Vacinado";
            }
            else if (string.Equals(opVacinado, "N", StringComparison.OrdinalIgnoreCase))
            {
                this.Vacinado = "Pet NAO Vacinado";
            }
            else
            {
                Console.WriteLine(" -- Campo Não Definido --");
                this.Vacinado = "Vacinacao NAO Definida";
            }
        }

        public override string ToString()
        {
            return $"Pet:{EspecieAnimal} - {NomePet}\nRaça: {RacaPet}\nIdade: {IdadePet}\nVacinacao: {Vacinado}\n";
        }
    }
}