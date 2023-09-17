using reg_pets;

List<Cliente> clientes = new List<Cliente>();


//menu principal
int opMenu;
do
{
    Console.WriteLine("\n-- Gerenciamento PetsSENAI --\n1-Cadastrar Cliente\n2-Incluir Pet\n3-Listar Clientes\n0-Sair do Programa");
    opMenu = int.Parse(Console.ReadLine());
    switch (opMenu)
    {
        case 1:
            //cadastrar o cliente 
            Cliente novoCliente = new Cliente();
            novoCliente.CadCliente();
            //adiciona o cliente na lista de cliente do programa
            clientes.Add(novoCliente);
            Console.WriteLine("\n -- Cadastro Finalizado --");
            Thread.Sleep(1000);
            break;
        case 2:
            Console.WriteLine("Nome do Cliente: ");
            string buscarCliente = Console.ReadLine();
            foreach (var cliente in clientes)
            {
                if (string.Equals(buscarCliente, cliente.NomeDono, StringComparison.OrdinalIgnoreCase))
                {
                    cliente.CadPet();
                }
            }
            break;
        case 3:
            foreach (var cliente in clientes)
            {
                cliente.ToString();
            }
            break;
        case 0:
            Console.WriteLine("Fim da Excecução");
            Thread.Sleep(1000);
            break;
        default:
            Console.WriteLine("-- Opção Invalida --");
            Thread.Sleep(1000);
            break;
    }
} while (opMenu != 0);