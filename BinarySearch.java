public class BinarySearch {
    public static void main(String[] args) {

        int[] arr = {1, 2, 3, 4, 5};
        int target = 5;
        System.out.println(BinarySearch (arr, target, 0, arr.length - 1));
        System.out.println(RecursiveBinarySearch (arr, target, 0, arr.length - 1));
    }

    // Iterative Binary Search;
    static int BinarySearch (int[] arr, int target, int start, int end) {

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return -1;
    }


    // RecursiveBinary Search;
    static int RecursiveBinarySearch (int[] arr, int target, int start, int end) {

        if (start > end) {
            return -1;
        }

        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] > target) {
            return RecursiveBinarySearch (arr, target, start, mid - 1);
        }
        return RecursiveBinarySearch (arr, target, mid + 1, end);
    }
}