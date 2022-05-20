// Ask a user for their birth year encoded as two digits
// (like "62") and for the current year, also encoded as
// two digits (like "99"). 
// Write a program to find the users current age in years.

import java.util.*;

public class ageDetector {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        int a = s.nextInt();
        int b = s.nextInt();
        int c = (100 - a) + b;
        int d = b - a;

        if (a > b) {
            System.out.printf("%d", c);
        } else {
            System.out.printf("%d", d);
        }
    }
}
