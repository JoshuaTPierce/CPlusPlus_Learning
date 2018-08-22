class Movie {
	String title;
	String genre;
	int rating;

	void playIt(){
		System.out.println("Playing the movie.");
	}
}

public class MovieTest {
	public static void main(String[] args){
		Movie one = new Movie();
		one.title = "Gone with the stock";
		one.genre = "Tragic";
		one.rating = 2;
		Movie two = new Movie();
		two.title = "Star Wars";
		two.genre = "Sci-Fi";
		two.rating = 5;
	}
}

