import java.util.*;
import java.util.regex.Pattern;

class Roundc {
    static String digits = ".*[0-9].*";
    static String smallChars = ".*[a-z].*";
    static String capitalChars = ".*[A-Z].*";
    static String specialChars = "[A-Za-z0-9]";

    static String solve(String strInput) {
        String extraChars = "bbbbbb";
        StringBuilder str = new StringBuilder(strInput);
        if (!Pattern.matches(smallChars, strInput))
            str.append("b");
        if (!Pattern.matches(capitalChars, strInput))
            str.append("B");
        if (!Pattern.matches(digits, strInput))
            str.append("9");
        if (!strInput.contains("#") && !strInput.contains("@") && !strInput.contains("*") && !strInput.contains("&"))
            str.append("#");
        if (str.length() < 7)
            str.append(extraChars.substring(0, 7 - str.length()));
        return str.toString();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase = sc.nextInt();
        for (int i = 1; i <= testCase; i++) {
            int n = sc.nextInt();
            String strInput = sc.next();
            System.out.println("Case #" + i + ": " + solve(strInput));
        }
    }
}