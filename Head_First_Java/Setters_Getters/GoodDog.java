class GoodDog {
    private int size; //make the instance variable private

    public int getSize() { //make the setter/getter methods public
        return size; 
    }

    public void setSize(int s) {
        size = s;
    }

    void bark() {
        if(size > 60) {
            System.out.println("Wooof! Wooof!");
        } else if(size > 14) {
            System.out.println("Rufff! Rufff!");
        } else {
            System.out.println("Yiff! Yiff!");
        }
    }
}

public class GoodDogtTestDrive {
    public static void main(String[] args){
        GoodDog one = new GoodDog();
        one.setSize(70);

        GoodDog two = new GoodDog();
        two.setSize(8);

        System.out.println(“Dog one: “ + one.getSize());
        System.out.println(“Dog two: “ + two.getSize());

        one.bark();
        two.bark();
    }
}

/* 
Any place where a particular value can be used, a method call that returns that
type can be used.

instead of:
int x = 3 + 24;

you can say:
int x = 3 + one.getSize();