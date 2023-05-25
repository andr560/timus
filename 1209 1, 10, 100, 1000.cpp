import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        List<Long> ans = new ArrayList<>();

        Scanner scanner = new Scanner(System.in);
        long s = Long.parseLong(scanner.nextLine());

        for (int i = 0; i < s; i++) {
            int x = Integer.parseInt(scanner.nextLine());
            ans.add(find(x));
        }

        for (int i = 0; i < s; i++) {
            System.out.print(ans.get(i));
            System.out.print(" ");
        }
    }

    static long find(long x) {
        double a = 1, b = 1, c = -2 * x + 2;
        double d = b * b - 4 * a * c;
        double p = (-b + Math.sqrt(d)) / (2 * a);

        return (p - (long) p) > 0 ? 0 : 1;
    }
}

//Код считывает число s, затем считывает s целых чисел x и для каждого числа вычисляет результат с помощью метода find(). 
//Затем результаты выводятся в виде последовательности значений, разделенных пробелами.
