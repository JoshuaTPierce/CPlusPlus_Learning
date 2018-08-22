class Dog {
    int size;
    String name;

//note: this method doesn't work right now.
//updated it to show an example

    void bark(int numOfBarks){
        String barkType;
        
        if(size >= 60) {
            barkType = "Woof!"
        } else if (size >= 14 && size < 60) {
            barkType = "Ruff!";
        } else {
            barkType = "Yip!";
        }

        while(numOfBarks > 0){
            system.out.println(barkType);
            numOfBarks -= 1;
        }
    }
}

public class DogTest {
    public static void main(String[] args) {
        Dog one = new Dog();
        one.size = 70;
        Dog two = new Dog();
        two.size = 8;
        Dog three = new Dog();
        three.size = 30;

        one.bark();
        two.bark();
        three.bark();
    }
}