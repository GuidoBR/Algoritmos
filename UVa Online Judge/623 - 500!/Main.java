import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger; 
// referência: http://docs.oracle.com/javase/1.4.2/docs/api/java/math/BigInteger.html
// parecido com o "i love big numbers"

public class Main 
{
 
        /*
         * 623 - 500!
         * Guido Luz Percú
         * 04-07-2012
         */

        static BigInteger[] fat = new BigInteger[1001]; 

		private static void calculaFat() 
		{
                fat[0] = new BigInteger("1");
                fat[1] = new BigInteger("1");
                fat[2] = new BigInteger("2");
                for (int i = 3; i <= 1000; i++) 
				{
                        fat[i] = fat[i-1].multiply(new BigInteger(String.valueOf(i)));
                }
        }
		public static void main(String[] args) throws NumberFormatException, IOException 
		{
			int numero;
            String linha;
			calculaFat(); // Calcula os fatoriais de 3 a 1000
            BufferedReader ler = new BufferedReader(new InputStreamReader(System.in));
            while ((linha = ler.readLine()) != null) 
			{
                  numero = Integer.parseInt(linha.trim());
				  System.out.println(numero + "!");	
                  System.out.println(fat[numero]);				
			}
		}
}
