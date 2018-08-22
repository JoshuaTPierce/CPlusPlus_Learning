import java.util.ArrayList;

public class DotComBust {
	private GameHelper helper = new GameHelper();
	private ArrayList<DotCom> dotComsList = new ArrayList<DotCom>();
	private int numOfGuesses = 0;

	private void setUpGame(){
		//first make some new dot coms and give them locations
		DotCom one = new DotCom();
		one.setName("Pets.com");
		DotCom two = new DotCom();
		two.setName("eToys.com");
		DotCom three = new DotCom();
		three.setName("Go2.com");

		dotComsList.add(one);
		dotComsList.add(two);
		dotComsList.add(three);

		System.out.println("Your goal is to sink three dot coms.");
		System.out.println("Pets.com, eToys.com, and Go2.com");
		System.out.println("Try to sink them all in the fewest number of guesses");

		for(DotCom dotComToSet : dotComsList){
			ArrayList<String> newLocation = helper.placeDotCom(3);
			dotComToSet.setLocationCells(newLocation);
		} //close for loop
	} //end setUpGame method

	private void startPlaying(){
		while(!dotComsList.isEmpty()){ //keep getting guesses until dotComsList is empty
			String userGuess = helper.getUserInput("Enter a guess:");
			checkUserGuess(userGuess);
		} //close while

		 finishGame();

	} // close startPlaying method

	private void checkUserGuess(String userGuess){
		numOfGuesses++;
		String result = "miss";

		for(DotCom dotComToTest : dotComsList){
			result = dotComToTest.checkYourSelf(userGuess);
			if(result.equals("hit")){
				break;
			}
			if(result.equals("kill")){
				dotComsList.remove(dotComToTest);
				break;
			}
		} //close for loop

		System.out.println(result);
	
	} //close method

	private void finishGame(){
		System.out.println("All dot coms are dead! Your stock is now worthless.");
		if(numOfGuesses <= 18){
			System.out.println("It only took you " + numOfGuesses + " guesses.");
			System.out.println(" You got out before your options sank.");
		} else {
			System.out.println("Took you long enough. " + numOfGuesses + " guesses.");
			System.out.println("Fish are dancing with your options.");
		} //end if
	} //close method

	public static void main(String[] args){
		DotComBust game = new DotComBust();
		game.setUpGame();
		game.startPlaying();

	} //close main method
} //close class
