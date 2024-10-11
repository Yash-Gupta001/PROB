package basic_java;
import java.util.Scanner;

class Logic {
    // Method to check and print odd numbers from an array
    void OddCheck(int[] number) {
        System.out.println("Odd numbers are:");

        // Loop through the array
        for (int i = 0; i < number.length; i++) {
            
            if (isOdd(number[i])) {
                System.out.println(number[i]);
            }
            
        }
    }

    // Method to check if a number is odd
    boolean isOdd(int n) {
        return n % 2 == 1;
    }
    
}

public class ArrayOddSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of array:");
        int s = sc.nextInt();
        int[] number = new int[s];

        System.out.println("Enter values in array:");
        for (int i = 0; i < s; i++) {
            number[i] = sc.nextInt();
        }

        Logic L = new Logic();
        L.OddCheck(number);

        sc.close();
    }
}
