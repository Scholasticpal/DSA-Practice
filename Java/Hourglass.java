public class Hourglass {
    public static void main(String[] args) {
        // = new int[10][20];
        // for (int b = 0; b < 10; b++) {
        // for (int c = 0; c < 20; c++) {

        // }
        // }
        int[][] a = { { 2, 3, 0, 0, 0 }, { 0, 1, 0, 0, 0 }, { 1, 1, 1, 0, 0 }, { 0, 0, 2, 4, 4 }, { 0, 0, 0, 2, 0 } };
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                sum = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 1] + a[i + 2][j] + a[i + 2][j + 1]
                        + a[i + 2][j + 2];
                System.out.println(sum);
            }
        }
    }
}
