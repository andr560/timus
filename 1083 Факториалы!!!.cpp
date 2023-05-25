import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n, k;
        String s;

        n = scanner.nextInt();
        s = scanner.next();
        k = s.length();

        long ans = factorial(n, k);
        System.out.println(ans);
    }

    static long factorial(int n, int k) {
        long ans = 1;
        int i = 0;
        while (n - i * k > 0) {
            ans *= n - i * k;
            i++;
        }
        return ans;
    }
}
//Код считывает целое число n и строку s, 
//потом вычисляет факториал числа n с шагом k и выводит результат в консоль.
