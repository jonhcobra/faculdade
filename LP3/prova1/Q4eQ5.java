package LP3.prova1;

public class Q4eQ5 {
    public static class Contador {

        private int cont, max, ciclo;

        Contador(int val_Inicial, int val_Max) // Inicializa o contador cont inicial;
        {
            cont = val_Inicial;
            max = val_Max;
            ciclo = 0;
        }

        public void incrementa() // incrementa o contador em 1;
        {
            if (cont < max) {
                cont++;
            } else {
                ciclo++;
                cont = 0;
            }
        }

        public void decrementa() // decrementa o contador em 1;
        {
            if (cont > 0)
                cont--;
        }

        public int getCont() {
            return cont;
        }

        public int getMax() {
            return max;
        }
    }
public static void main(String[]args){

Contador qtLetras = new Contador(0,5);
String frase ="A abelha abelhudaabelhudou as abelhas. Fala, arara loura.A arara loura falará.”;

int tam=frase.lenght();
for(int i=0;i<tam;i++){
if(frase.charAt(i)=='a')qtLetras.incrementa();
}
int qtCiclos=qtLetras.getCiclo();
int ultCiclo=qtLetras.getCont();
int MaxCiclo=qtLetras.getMax();
System.out.println("foram "+qtCiclos +"sendo cont="+ultCiclo +"no ultimo ciclo e o limite do ciclo sendo "+ maxCiclo);
}
