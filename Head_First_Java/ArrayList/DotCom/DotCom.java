import java.util.ArrayList;

public class DotCom {
	
	private ArrayList<String> locationCells;
	private String name;

	public void setLocationCells(ArrayList<String> loc){
		locationCells = loc;
	}

	public void setName(String n){
		name = n;
	} 

	public String checkYourself(String userInput){
		String result = "miss";
			//find out if the user guess is in the ArrayList, by asking it for its index
			//if its not in the list, then index of returns a -1
			//and the guess would not be called into the if-loop that follows
			int index = locationCells.indexOf(userInput);
			if(index >= 0){
				locationCells.remove(index);
				if(locationCells.isEmpty()){
					result = "kill";
					System.out.println("Ouch! You sunk " + name + "  :( ");
				} else {
					result = "hit";
				} //close inner if
			} //close outer if

		return result;

	} //close method

} //end class