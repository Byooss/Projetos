//Desenvolver um sistema para registrar avaliações de uma instituição.

// As avaliações serão cadastradas com nota, série, nome da avaliação, o aluno que a 
//realizou, professor que a desenvolveu e a disciplina. 

//Sendo que o aluno será cadastrado com nome, série e matrícula.

//O professor com nome e título. E disciplina com nome e carga horária. 

//Para um aluno fazer uma avaliação, precisa necessariamente de estar na série igual a 
//da avaliação.

//Cadastre disciplinas, professores, alunos e avaliações contendo as associações esperadas.

using C_;

List<Avaliacao> avaliacoes = new List<Avaliacao>();
Avaliacao prova = new Avaliacao();
string op;

Console.WriteLine("--- Bem Vindo ao Registro de Avaliações ---");
do
{
    prova.CadAvaliacao();

    avaliacoes.Add(prova);

    Console.WriteLine("\nDeseja realizar um novo cadastro? [S/N]");
    op = Console.ReadLine().ToUpper();

} while (op != "N");
Console.WriteLine("--- Fim do Programa ---");