import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        while ((n = scanner.nextInt()) != 0) {
            int[] a = new int[n + 1];
            a[0] = 0;
            a[1] = 1;
            int max = 1;
            for (int i = 2; i <= n; i++) {
                if (i % 2 == 0) {
                    a[i] = a[i / 2];
                } else {
                    a[i] = a[i / 2] + a[i / 2 + 1];
                }
                max = Math.max(max, a[i]);
            }
            System.out.println(max);
        }
    }
}
//Код находит и выводит максимальное значение из последовательности, 
//сгенерированной на основе введенных чисел n в соответствии с указанными правилами.
