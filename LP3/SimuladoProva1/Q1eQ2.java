package LP3.SimuladoProva1;

import java.util.Scanner;

public class Q1eQ2 {
    public static class Contador {

        private int valor;

        Contador() // Inicializa o contador em zero;
        {
            valor = 0;
        }

        Contador(int val_Inicial) // Inicializa o contador no valor inicial;
        {
            valor = val_Inicial;
        }

        public void incrementa() // incrementa o contador em 1;
        {
            valor++;
        }

        public void incrementa(int incremento) // incrementa o contador em incremento;
        {
            valor += incremento;
        }

        public void decrementa() // decrementa o contador em 1;
        {
            valor--;
        }

        public int getValor() // retorna o valor do contador;
        {
            int i = valor;
            return i;
        }

        public boolean maiorQue(int val) // critério de parada >;
        {
            if (valor > val) {
                return true;
            } else
                return false;
        }

        public boolean maiorOuIgualQue(int val) // critério de parada >=;
        {
            if (valor >= val) {
                return true;
            } else
                return false;
        }

        public boolean menorQue(int val) // critério de parada <;
        {
            if (valor < val) {
                return true;
            } else
                return false;
        }

        public boolean menorOuIgualQue(int val) // critério de parada <=;
        {
            if (valor <= val) {
                return true;
            } else
                return false;
        }

        public boolean igual(int val) // critério de parada ==;
        {
            if (valor == val) {
                return true;
            } else
                return false;
        }

        public boolean diferente(int val) // critério de parada !=;
        {
            if (valor != val) {
                return true;
            } else
                return false;
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Contador cont = new Contador();

        System.out.println("deseja iniciar o contador com o valor 00 ?\n1 ->sim\n2 -> nao\n\nSua escolha: ");

        int opcao = scan.nextInt();

        if (opcao == 2) {
            System.out.format("digite um valor inicial para o contador:");
            int val_inicial = scan.nextInt();
            cont = new Contador(val_inicial);
        }

        System.out.println(
                "Escolha uma das opcoes:\n0 -> incrementa o contador em 1\n1 -> incrementa o contador com um valor\n2 -> decrementa o contador em 1\n3 -> ver o valor do contador\n4 -> testa se o contadro eh >\n5 -> testa se o contadro eh >=\n6 -> testa se o contadro eh <\n7 -> testa se o contadro eh <=\n8 -> testa se o contadro eh ==\n9 -> testa se o contadro eh !=\n\nSua escolha: ");

        opcao = scan.nextInt();

        int val;
        boolean teste;

        switch (opcao) {

            case 0:
                cont.incrementa();
                break;
            case 1:
                System.out.println("digite um valor: ");
                val = scan.nextInt();
                cont.incrementa(val);
                break;
            case 2:
                cont.decrementa();
                break;
            case 3:
                val = cont.getValor();
                System.out.format("o contador eh: %d", val);
                break;
            case 4:
                System.out.println("digite um valor: ");
                val = scan.nextInt();
                cont.maiorQue(val);
                break;
            case 5:
                System.out.println("digite um valor: ");
                val = scan.nextInt();
                teste = cont.maiorOuIgualQue(val);
                System.out.println("o teste deu:" + teste);
                break;
            case 6:
                System.out.println("digite um valor: ");
                val = scan.nextInt();
                teste = cont.menorQue(val);
                System.out.println("o teste deu:" + teste);
                break;
            case 7:
                System.out.println("digite um valor: ");
                val = scan.nextInt();
                teste = cont.menorOuIgualQue(val);
                System.out.println("o teste deu:" + teste);
                break;
            case 8:
                System.out.println("digite um valor: ");
                val = scan.nextInt();
                teste = cont.igual(val);
                System.out.println("o teste deu:" + teste);
                break;
            case 9:
                System.out.println("digite um valor: ");
                val = scan.nextInt();
                teste = cont.diferente(val);
                System.out.println("o teste deu:" + teste);
                break;
        }
        scan.close();
    }
}
