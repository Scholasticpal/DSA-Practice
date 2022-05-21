// https://www.geeksforgeeks.org/program-find-sum-elements-given-array/

public class PartitionEqualSubsetSum {
    public static void main(String args[]) {
        int[] arr = { 1, 5, 4, 0, 2 };
        int left = 0;
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        for (int j = 0; j < arr.length; j++) {
            if (left == sum / 2) {
                break;
            } else {
                left += arr[j];
            }
        }
        System.out.println(left);
    }

}
