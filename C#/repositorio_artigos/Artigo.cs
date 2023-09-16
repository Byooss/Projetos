using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace repositorio_artigos
{
    public class Artigo
    {
        public string TituloArtigo { get; set; }

        public List<string> PalavrasChaves { get; set; }

        public List<Autor> AutoresArtigo { get; set; }

        public string Instituicao { get; set; }

        //autores previamente cadastrados
        Autor autor1 = new Autor("Kevin Cesar", "kevin@email.com");
        Autor autor2 = new Autor("Tiago Almeida", "Almeida@email.com");
        Autor autor3 = new Autor("Icaro Estrela", "vectra2.0@email.com");
        

        public void NovoArtigo()
        {
            //criando titulo
            Console.WriteLine("\nTitulo do Artigo: ");
            this.TituloArtigo = Console.ReadLine();

            //criando palavras chaves
            int contPalavras = 1;
            string op;
            List<string> novasPalavras = new List<string>();
            do
            {

                Console.WriteLine($"{contPalavras}ª Palavra-Chave: ");
                novasPalavras.Add(Console.ReadLine());

                Console.WriteLine("Deseja incluir mais uma palavra chave? [S/N]");
                op = Console.ReadLine().ToUpper();
                contPalavras ++;
            } while (op != "N");
            this.PalavrasChaves = novasPalavras;

            //criando autores
                List<Autor> novosAutores = new List<Autor>();
                novosAutores.Add(autor1);
                novosAutores.Add(autor2);
                novosAutores.Add(autor3);

                this.AutoresArtigo = novosAutores;
            //atribuindo instituição

            Console.WriteLine("Instituicao: ");
            this.Instituicao = Console.ReadLine();
        }

        public override string ToString()
        {
            int contAux =1;

            Console.WriteLine($"Titulo: {TituloArtigo}\n");
            foreach(var palavra in PalavrasChaves){
                Console.WriteLine($"{contAux}ª Palavra-Chave: {palavra}");
                contAux ++;
            }
            Console.WriteLine("\nAutores: ");
            foreach(var autor in AutoresArtigo){
                Console.WriteLine(autor);
            }
            Console.WriteLine($"Institucão: {Instituicao}"); 
            return"";
        }
    }
}