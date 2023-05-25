import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s;
        int N, E = 0, M = 0, L = 0;

        N = scanner.nextInt();
        scanner.nextLine();
        for (int i = 0; i < N; i++) {
            s = scanner.nextLine();
            if (s.equals("Emperor Penguin"))
                E++;
            if (s.equals("Macaroni Penguin"))
                M++;
            if (s.equals("Little Penguin"))
                L++;
        }
        int MAX = Math.max(E, Math.max(M, L));
        if (MAX == E)
            System.out.println("Emperor Penguin");
        else if (MAX == M)
            System.out.println("Macaroni Penguin");
        else if (MAX == L)
            System.out.println("Little Penguin");
    }
}
//Код считывает целое число N и последовательность строк. 
//Затем он подсчитывает количество вхождений каждого типа пингвина ("Emperor Penguin", "Macaroni Penguin" и "Little Penguin") 
//и выводит наиболее часто встречающийся тип пингвина.
