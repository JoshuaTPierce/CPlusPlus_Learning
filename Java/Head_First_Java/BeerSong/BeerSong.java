public class BeerSong {
	public static void main(String[] args){
		int beerNum = 99;
		String word = "Bottles";

		//Start main while loop
		while(beerNum > 0) {
			if(beerNum == 1) {
				word = "bottle"; }

			System.out.println(beerNum + " " + word + " of beer on the wall,");
			System.out.println(beerNum + " " + word + "of beer!");
			System.out.println("take one down,");
			System.out.println("pass it around,");

			beerNum -= 1; 

			if(beerNum > 0 && beerNum != 1){
				System.out.println(beerNum + " " + word + " of beer on the wall!");
			} else if(beerNum == 1) {
				System.out.println(beerNum + " bottle of beer on the wall!");
			} else {
				System.out.println("No more bottles of beer on the wall!");
			} //end else
		} //end while loop
	} //end main method
} //end class
