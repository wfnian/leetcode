import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Three {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        HashMap<Integer, String> map = new HashMap<Integer, String>();
        map.put(0, "@");
        map.put(1, "$");
        map.put(2, "&");

        while (scanner.hasNext()) {
            int num = scanner.nextInt();
            StringBuffer res = new StringBuffer("");
            while (num > 0) {
                res.append(map.get((num % 3)));
                num = num / 3;
            }
            System.out.println(res.reverse());
        }
        scanner.close();
    }
}
