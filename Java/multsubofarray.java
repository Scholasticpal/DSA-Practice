// Input array, break into subarrays where element is 0, find max multiple of all subarrays.

import java.util.*;
import java.util.Arrays;

class multsubofarray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements you want to store");
        int n = sc.nextInt();
        int[] arr = new int[n];
        int[] a;
        int max = 0;
        int mult = 1;

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                if (mult > max) {
                    max = mult;
                }
                mult = 1;
            } else {
                mult *= arr[i];
            }
        }
        if (mult > max) {
            max = mult;
        }
        System.out.println(max);

    }
}
