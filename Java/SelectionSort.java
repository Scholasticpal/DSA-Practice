import java.util.Scanner;

public class SelectionSort {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Array Size : ");
        int n = sc.nextInt();
        int temp = 0;
        int[] array = new int[n];

        System.out.print("Enter Array Elements : ");
        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (array[i] > array[j]) {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }

        System.out.print("Now the Array after Sorting is :\n");
        for (int i = 0; i < n; i++) {
            System.out.print(array[i] + "  ");
        }
    }
}
