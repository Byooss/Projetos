using repositorio_artigos;

List<Artigo> artigos = new List<Artigo>();

//menu do programa
int opMenu;

do
{
    Console.WriteLine("\n -- Menu Repositorio de Artigos --\n1-Cadastrar Artigo\n2-Pesquisar por Autor\n3-Pesquisar por Palavra-Chave\n4-Pesquisar por Título\n0-Sair do Programa");
    opMenu = int.Parse(Console.ReadLine());
    switch (opMenu)
    {
        case 1:
            Artigo novoArtigo = new Artigo();
            novoArtigo.NovoArtigo();
            artigos.Add(novoArtigo);
            break;
        case 2:
            string buscarAutor;
            Console.WriteLine("\nNome do Autor: ");
            buscarAutor = Console.ReadLine();
            foreach (var artigo in artigos)
            {
                foreach (var autores in artigo.AutoresArtigo)
                {
                    if (string.Equals(autores.NomeAutor, buscarAutor, StringComparison.OrdinalIgnoreCase))
                    {
                        Console.WriteLine(" -- Resultado da Pesquisa --");
                        Console.WriteLine(artigo.ToString());
                    }
                }
            }
            break;
        case 3:
            string buscarPalvra;
            Console.WriteLine("\nPalavra-Chave: ");
            buscarPalvra = Console.ReadLine();
            foreach (var artigo in artigos)
            {
                foreach (var palavra in artigo.PalavrasChaves)
                {
                    if (string.Equals(palavra, buscarPalvra, StringComparison.OrdinalIgnoreCase))
                    {
                        Console.WriteLine("\n -- Resultado da Pesquisa --");
                        Console.WriteLine(artigo.ToString());
                    }
                    
                }
            }
            break;
        case 4:
            string buscarTitulo;
            Console.WriteLine("Titulo: ");
            buscarTitulo = Console.ReadLine();

            foreach(var artigo in artigos){
                if(string.Equals(artigo.TituloArtigo,buscarTitulo,StringComparison.OrdinalIgnoreCase)){
                    Console.WriteLine(" -- Resultado da Pesquisa --");
                    Console.WriteLine(artigo.ToString());
                }
            }
            break;
        case 0:
            Console.WriteLine("Encerrando Sistema!");
            Thread.Sleep(2000);
        break;
        default:
            Console.WriteLine("\n -- Erro -- \nOpção do menu invalida!\n");
            Thread.Sleep(2000);
        break;
    }
} while (opMenu != 0);