import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter weight- ");
        int weight = in.nextInt();
        System.out.print("Enter age- ");
        int age = in.nextInt();
        if(40<= weight && age > 12){
            if(weight<= 110){
                System.out.println("Enjoy");
            }
            else{
                System.out.println("Add ropes then Enjoy");
            }
        }
        else{
            System.out.println("Sorry cant go for bunjee jumping");
        }
    }
}
