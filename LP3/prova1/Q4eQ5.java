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
}
