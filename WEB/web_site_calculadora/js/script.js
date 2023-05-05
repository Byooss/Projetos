var num_1;
var num_2;
var opOperacao;

function calcularValores () {
    
    num_1 = document.getElementById("valor_1").value;
    num_2 = document.getElementById("valor_2").value;
    opOperacao = document.getElementById("operacao").value;
    let vResult;

    if(isNaN(num_1) || isNaN(num_2)){
        alert('Caracteres Inválidos')
    }else{
        switch (opOperacao) {
            case '+':
                vResult = parseFloat(num_1) + parseFloat(num_2);
                alert('Resultado = '+ vResult);
                break;
            case "-":
                vResult=parseFloat(num_1-num_2);
                alert('Resultado = '+vResult);
                break;
            case "x":
                vResult=parseFloat(num_1*num_2);
                alert('Resultado = '+vResult);
                break;
            case "/":
                vResult=parseFloat(num_1/num_2);
                alert('Resultado = '+vResult);
                break;
            default:
                break;
        }
    }

}
