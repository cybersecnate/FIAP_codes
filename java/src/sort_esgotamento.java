import java.util.Scanner;

public class sort_esgotamento {
    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);
        int [] v = new int[100];

        System.out.println("Total de Números: ");
        int numero = entrada.nextInt();

        for (int i = 0; i < numero; i++) {
            System.out.println("Digite o "+ i +"º numero: ");
            v[i] = entrada.nextInt();
        }

        entrada.close();

        for (int i = 0; i < numero; i++) {
            for (int j = i+1; j < numero; j++) {
                if (v[i] > v[j]) {
                    int c = v[i];
                    v[i] = v[j];
                    v[j] = c;
                }
            }
        }

        for (int i : v) {
            System.out.println(v[i]);
        }
    }
}

/*
 * algoritmo sort_esgotamento;
variáveis
    a, b, i, j, n, c : inteiro;
    v : matriz[100] de inteiros;
fim-variáveis
início
    imprima("Total de Números: ");
    n := leia();
    para i de 1 até n faça
        imprima("Digite o ",i,"o. Numero: ");
        v[i] := leia();
    fim-para
    para i de 1 até n-1 faça
        para j de i+1 até n faça
            se v[i] > v[j] então
                c := v[i];
                v[i] := v[j];
                v[j] := c;
            fim-se
        fim-para
    fim-para
    para i de 1 até n faça
        imprima(v[i]);
    fim-para
fim
 */