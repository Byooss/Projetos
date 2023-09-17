using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.VisualBasic;

namespace reg_pets
{
    public class Cliente
    {
        public string NomeDono { get; set; }
        public int IdadeDono { get; set; }
        public string EnderecoDono { get; set; }
        public List<Pet> Pets { get; set; }
        
        // public Cliente(){
            // Pets = new List<Pet>();
        // }

        public void CadCliente()
        {

            Console.WriteLine("\n-- Cadastro Cliente --");

            //nome dono
            Console.WriteLine("Nome Cliente: ");
            this.NomeDono = Console.ReadLine();

            //idade dono
            Console.WriteLine("Idade Cliente: ");
            this.IdadeDono = int.Parse(Console.ReadLine());

            //end dono
            Console.WriteLine("Endereço Cliente: ");
            this.EnderecoDono = Console.ReadLine();

            //cadastro pet
            Pets = new List<Pet>();
            CadPet();
            Console.WriteLine("Cadastrando...");
            Thread.Sleep(1000);
        }

        public void CadPet()
        {
            string opAddPet;
            
            do
            {
                //cadastra o pet novo e adiciona a lista global
                Pet novoPet = new Pet();
                novoPet.CadPet();
                this.Pets.Add(novoPet);
                
                Console.WriteLine("Deseja cadastrar +1 Pet? [S/N]");
                opAddPet = Console.ReadLine().ToUpper();

            } while (opAddPet != "N");;
        }

        public override string ToString()
        {
            Console.WriteLine($"\nCliente: {NomeDono}");
            foreach (var pet in this.Pets)
            {
                Console.WriteLine(pet.ToString());
            }
            return "";
        }
    }


}