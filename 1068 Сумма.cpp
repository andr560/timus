import java.util.Scanner;

public class Main{
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();

        int sum = 0;

        if (number > 0) {
            for (int i = 1; i <= number; i++) {
                sum = sum + i;

            }

        } else if (number <= 0) {
            for (int i = number; i <= 1; i++) {
                sum = sum + i;

            }
        }
        System.out.println(sum);

    }
}
//Код считывает число number и вычисляет сумму чисел от 1 до number, 
//если number больше 0, или от number до 1, если number меньше или равно 0.
