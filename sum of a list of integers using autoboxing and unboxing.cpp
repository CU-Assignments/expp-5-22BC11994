import java.util.ArrayList;
import java.util.List;

public class AutoboxingUnboxingExample {
    
    public static void main(String[] args) {
       
        List<Integer> numbers = new ArrayList<>();
        
        numbers.add(10);
        numbers.add(20);
        numbers.add(30);
        numbers.add(40);
        numbers.add(50);
        
        int sum = calculateSum(numbers);
        System.out.println("Sum of the list: " + sum);
        
        String numberString = "100";
        Integer parsedNumber = parseStringToInteger(numberString);
        System.out.println("Parsed Integer: " + parsedNumber);
    }

    public static int calculateSum(List<Integer> numbers) {
        int sum = 0;
        for (Integer num : numbers) {
            sum += num;  
        }
        return sum;
    }

    public static Integer parseStringToInteger(String str) {
        return Integer.valueOf(str);  
    }
}
