//Superclass
public class Doctor {
    boolean worksAtHospital;
    void treatPatient(){
        //perform a checkup
    }
}

public class FamilyDoctor extends Doctor {
    boolean makesHouseCalls;
    void giveAdvice(){
        //give homespun advice
    }
}

public class Surgeon extends Doctor {
    void treatPatient(){
        //perform surgery
        //overrides base class treatPatient
    }
    void makeIncision(){
        //make incision
    }
}