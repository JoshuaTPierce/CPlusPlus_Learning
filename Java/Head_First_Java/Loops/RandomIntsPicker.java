public class RandomIntsPicker {
	public static void main(String[] args) {

		//Make 3 Arrays of Integers
		int[] listOne = {1,2,3,4,5,6,7,8,9};
		int[] listTwo = {100,200,300,400,500,600,700,800,900};
		int[] listThree = {1000,2000,3000,4000,5000,6000,7000,8000,9000};

		//Get the Length of Each List (Used for the Next Step)
		int oneLength = listOne.length;
		int twoLength = listTwo.length;
		int threeLength = listThree.length;

		//Generate Random Numbers
		int rand1 = (int) (Math.random() * oneLength);
		int rand2 = (int) (Math.random() * twoLength);
		int rand3 = (int) (Math.random() * threeLength);

		//Build a List/Phrase and Print  It
		String phrase = listOne[rand1] + " " + listTwo[rand2] + " " +  listThree[rand3];
		System.out.println("Here are three random ints: " + phrase);

	}

}
