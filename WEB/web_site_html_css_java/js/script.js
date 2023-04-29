
var loginValido = "Kevin";
var senhaValida = "123456";



function validarLogin() {
    var loginUsuario = document.getElementById("login").value;
    var senhaUsuario = document.getElementById("senha").value;
    let msgErro = document.getElementById("campoErro");

    if ((loginUsuario == null && senhaUsuario == null)) {
        document.getElementById("campoErro").innerHTML = "Nenhum dos campos foi preenchido";
    }
    if (loginUsuario == loginValido && senhaUsuario != senhaValida) {
        document.getElementById("campoErro").innerHTML = "Senha inválida";
    }
    if (loginUsuario != loginValido && senhaUsuario == senhaValida) {
        document.getElementById("campoErro").innerHTML = "Usuário inválido";
    }
    if (loginUsuario != loginValido && senhaUsuario != senhaValida) {
        document.getElementById("campoErro").innerHTML = "Usuário e senha inválidos"
    }
    if (loginUsuario == loginValido && senhaUsuario == senhaValida) {
        document.getElementById("campoErro").innerHTML = "Login realizado com sucesso"
        setTimeout(function () {
            window.location.href = "perfil.html"
        }, 2000);
    }
}




