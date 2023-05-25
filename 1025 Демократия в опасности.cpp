import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int n05, Ans = 0;

        List<Integer> groups = new ArrayList<>(Collections.nCopies(n, 0));
        n05 = n / 2 + 1;
        for (int i = 0; i < n; i++) {
            groups.set(i, scanner.nextInt());
        }
        for (int i = 0; i < n05; i++) {
            Ans += groups.stream().min(Integer::compareTo).orElse(0) / 2 + 1;
            groups.remove(groups.stream().min(Integer::compareTo).orElse(0));
        }
        System.out.println(Ans);
    }
}
//Код считывает число n и последовательность n чисел в список groups. 
//Затем он находит минимальное значение из первых n / 2 + 1 элементов списка groups, 
//добавляет половину этого значения, деленного на 2 и увеличенного на 1, к переменной Ans, и удаляет минимальный элемент.
