import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class Solution {
public static void main(String[] args) {
    List<Integer> myList = new ArrayList<>();
    myList.add(5);
    myList.add(3);
    myList.add(5);
    myList.add(7);
    myList.add(10);
    myList.add(14);
    myList.add(6);      

    Solution s1 = new Solution();
    System.out.println("before: " + myList.toString());
    System.out.println("after: " + s1.rearrangeList(myList).toString());

}

public List<Integer> rearrangeList(List<Integer> theList) {

    Collections.sort(theList, new Comparator<Integer>() {

        @Override
        public int compare(Integer num1, Integer num2) {
            int result = 0;
            if (num1 == num2) {
                result = 0;
            } else if (Integer.bitCount(num1) < Integer.bitCount(num2)) {// 5=101 and 
                                                                         // 7=111
                result = -1;
            } else if (Integer.bitCount(num1) > Integer.bitCount(num2)) {// 7=111 and 
                                                                         // 6=110
                result = 1;
            } else if (Integer.bitCount(num1) == Integer.bitCount(num2)) {// 5=101 
                                                                          // 10=1010
                result = (num1 < num2) ? -1 : 1;
            }
            return result;
        }
    });
    return theList;
    }
}