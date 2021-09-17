/* 
 * Crie a classe Boleto com os atributos vencimento, valor, desconto, um booleano se está
 * pago e nome do cliente. Crie um construtor para que todos dados sejam passados no
 * momento da instanciação dos objetos. Crie um método que retorne o valor líquido do boleto.
 * Crie também um método pagar que altera o boleto para pago.
*/

public class Boleto
{
//atributos vencimento, valor, desconto, um booleano se está pago e nome do cliente

    private String cliente;
    private String vencimento;
    private double valor;
    private double desconto;
    private boolean boletoPago;

//Crie um construtor para que todos dados sejam passados no momento da instanciação dos objetos
    public Boleto(String cliente, String vencimento, double valor, double desconto)
    {
        this.cliente = cliente;
        this.vencimento = vencimento;
        this.valor = valor;
        this.desconto = desconto;
        this.boletoPago = false;
    }

//Crie um método que retorne o valor líquido do boleto
    
    public double calcularValLiquido()
    {
        if(this.valor >= this.desconto){
            return this.valor-this.desconto;
        } else{
            return 0;
        }
    }

//Crie também um método pagar que altera o boleto para pago
    public void pagarBoleto()
    {
        this.boletoPago = true; 
    }

    public String verificarPagamento()
    {
        if(this.boletoPago){
            return "\nPagamento efetuado.";
        } else{
            return "\nPagamento pendente.";
        }
    }

    public String imprimirInfos()
    {
        return "\nNome: " + this.cliente +
                "\nVencimento do boleto: " + this.vencimento +
                "\nValor do boleto: " + this.valor +
                "\nValor do desconto: " + this.desconto +
                "\nValor líquido: " + calcularValLiquido() +
                verificarPagamento();
                
    }


}