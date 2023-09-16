using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace repositorio_artigos
{
    public class Autor
    {
        public string NomeAutor { get; set; }

        public string EmailAutor { get; set; }

        public Autor(String NomeAutor,string EmailAutor){
            this.NomeAutor = NomeAutor;
            this.EmailAutor = EmailAutor;
        }
        public override string ToString()
        {
            return $"Nome Autor: {NomeAutor}\nE-mail: {EmailAutor}\n";
        }

    }

}