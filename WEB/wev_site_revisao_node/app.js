const express = require('express');
const app = express();
const handlebars = require('express-handlebars');
const { engine } = require('express-handlebars');
const bodyParser = require('body-parser');
var compras = [];

//config
//tamplate engine
app.engine('handlebars', engine());
app.set('view engine', 'handlebars');
app.set('views', './views');
app.use(express.static('public'));
app.use(bodyParser.urlencoded({ extended: false }));
app.use(bodyParser.json());

//rotas    
app.get('/', function (req, res) {
    res.render('home');
})

app.get('/pedido', function (req, res) {
    res.render('pedido');
})

app.post('/pedido', function (req, res) {
    droga = req.body.bomba
    nome = req.body.nome
    end = req.body.end
    email = req.body.email
    console.log(nome)
    console.log(end)
    console.log(email)
    console.log(droga)
    compra = {
        "droga": droga,
        "nome": nome,
        "end": end,
        "email": email
    }
    compras.push(compra)
    res.render('carrinho',{compras})
})
app.get('/carrinho',function(req,res){
    res.render('carrinho');
})

app.listen(8090, function () { console.log("O servidor esta rodando na porta: http://localhost:8090") });