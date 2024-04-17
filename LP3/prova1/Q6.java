package LP3.prova1.q4e5.q6;

import java.util.Scanner;

public class Q6 {
    public static class Elevador {
        private int cargaMax, cargaAtual, maxAndares, andarAtual;

        public Elevador(int CargaMaxima, int numeroAndares) {
            cargaAtual = 0;
            cargaMax = CargaMaxima;
            andarAtual = 0;
            maxAndares = numeroAndares;
        }

        public void Descer() {
            if (andarAtual > 0)
                andarAtual--;
        }

        public void Subir() {
            if (andarAtual < maxAndares)
                andarAtual++;
        }

        public void Sair() {
            if (cargaAtual > 0)
                cargaAtual--;
        }

        public void Entrar() {
            if (cargaAtual < cargaMax)
                cargaAtual++;
        }

        public int getCargaAtual() {
            return cargaAtual;
        }

        public int getCargaMax() {
            return cargaMax;
        }

        public int getAndarAtual() {
            return andarAtual;
        }

        public int getAndarMax() {
            return maxAndares;
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Elevador predioElevador = new Elevador(20, 50);
        int cargaMaxi, cargaAt, andarMaxi, andarAt;
        int opcao = 1;
        System.out.println("1->Entrar\n2->Sair\n3->Subir\n4->Descer\n5->Print valores");
        while (opcao != 0) {
            System.out.println("opcao:");
            opcao = scan.nextInt();
            switch (opcao) {
                case 1:
                    predioElevador.Entrar();
                    break;
                case 2:
                    predioElevador.Sair();
                    break;
                case 3:
                    predioElevador.Subir();
                    break;
                case 4:
                    predioElevador.Descer();
                    break;
                case 5:
                    andarMaxi = predioElevador.getAndarMax();
                    andarAt = predioElevador.getAndarAtual();
                    cargaMaxi = predioElevador.getCargaMax();
                    cargaAt = predioElevador.getCargaAtual();
                    System.out.println("carga max->" + cargaMaxi + " carga atual->" + cargaAt + "\nandar Max->" + andarMaxi + " andar Atual->" + andarAt);
                    break;
            }
        }
        scan.close();
    }
}
