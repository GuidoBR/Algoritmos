import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger; 
// referência: http://docs.oracle.com/javase/1.4.2/docs/api/java/math/BigInteger.html
 
public class Main {
 
        /*
         * 10220 - I love Big Numbers!
         * Guido Luz Percú
         * 28-06-2012
         */
        static BigInteger[] fat = new BigInteger[1001]; //cria o BigNumbers
        
        public static BigInteger somaAlgarismos(BigInteger numero) { //soma dos digitos para BigNumbers
                BigInteger somaAlg = new BigInteger("0");
                while (!numero.equals(new BigInteger("0"))) {
                        somaAlg = somaAlg.add(numero.mod(new BigInteger("10")));
                        numero = numero.divide(new BigInteger("10"));
                }
                return somaAlg;
        }
		
		private static void calculaFat() {//Calculo de fatorial para BigNumbers
                fat[0] = new BigInteger("0");
                fat[1] = new BigInteger("1");
                fat[2] = new BigInteger("2");
                for (int i = 3; i <= 1000; i++) {
						//.valueOf() transforma em um objeto do tipo integer
						//integer != int
                        fat[i] = fat[i-1].multiply(new BigInteger(String.valueOf(i)));

                }
        }
 
        public static void main(String[] args) throws NumberFormatException, IOException {
                int numero;
                String linha;
                BufferedReader ler = new BufferedReader(new InputStreamReader(System.in));//lê
                calculaFat();//calcula
                while ((linha = ler.readLine()) != null) {//escreve tudo
                        numero = Integer.parseInt(linha.trim());//trim tira os espaços no inicio e fim da str
                        System.out.println(somaAlgarismos(fat[numero]));
                }
        }
}
