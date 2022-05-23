import java.io.*;
import java.math.*;
import java.util.*;

class canpalindrome {
	static int Total_Chars = 256;

	static boolean canPalindrome(String str)
	{

		int count[] = new int[Total_Chars];
		Arrays.fill(count, 0);

		for (int i = 0; i < str.length(); i++)
			count[(int)(str.charAt(i))]++;

		int odd = 0;
		for (int i = 0; i < Total_Chars; i++) {
			if ((count[i] & 1) == 1)
				odd++;

			if (odd > 1)
				return false;
		}

		return true;
	}

	public static void main(String args[])
	{
		if (canPalindrome("manner maketh man"))
			System.out.println("Yes");
		else
			System.out.println("No");

		if (canPalindrome("element of suprise"))
			System.out.println("Yes");
		else
			System.out.println("No");
	}
}
