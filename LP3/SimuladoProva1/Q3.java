package LP3.SimuladoProva1;

import java.util.Scanner;

public class Q3 {
    public static class Quadrilatero {

        private double xa, ya;
        private double xb, yb;
        private double xc, yc;
        private double xd, yd;

        public Quadrilatero() {
            xa = 0;
            ya = 0;
            xb = 0;
            yb = 1;
            xc = 1;
            yc = 1;
            xd = 1;
            yd = 0;
        }

        public Quadrilatero(double xa, double ya, double xb, double yb, double xc, double yc, double xd, double yd) 
        {
        }

        public Quadrilatero(double xa, double ya, double xc, double yc) 
        {
        }

        public double[] getVertices()// Retorna um array com as coordenadas dos vértices;
        {
            public double array[] = new double[8];
            return array;
        }

        public boolean eRetangulo()// Retorna se o quadrilátero é um retângulo;
        {
            if()
            {
                return true;
            }
            else 
                return false;
        }

        public boolean eQuadrdo()// Retorna se o quadrilátero é um quadrado;
        {
            if()
            {
                return true;
            }
            else 
                return false;
                
        }

    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Quadrilatero quadra = new Quadrilatero();


        scan.close();
    }
}
