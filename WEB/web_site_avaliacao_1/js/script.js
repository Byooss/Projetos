var nome;
var email;
var tel;
var mensg;

function validarCampos(){
    var nome = document.getElementById("nome").value;
    var email = document.getElementById("email").value;
    var tel = document.getElementById("telefone").value;
    var mensg = document.getElementById("mensg").value;

    if(nome==''){
        alert('Você não escreveu seu nome!');
    }else if(email==''){
        alert('Você não escreveu seu e-mail!');
    }else if(tel==''){
        alert('Você não escreveu seu telefone');
    }else if(mensg==''){
        alert('Você não escreveu sua mensagem');
    }else{
        alert('Mensagem enviada com sucesso :D');
    }
}