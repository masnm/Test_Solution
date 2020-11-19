package com;

public class Organ {
    private String name;
    private String medCondition;
    private boolean state;

    protected Organ ( String name, String medicalCondition, boolean state )
    {
        this.name = name;
        this.medCondition = medicalCondition;
        this.state = state;
    }

    public String getName () {
        return name;
    }
    public String getMedicCondition () {
        return medCondition;
    }
    public boolean getState () {
        return state;
    }

    public void setName ( String newName ) {
        this.name = newName;
    }
    public void setMedicCondition ( String newMedicalCondition ) {
        this.medCondition = newMedicalCondition;
    }
    public void setState ( boolean newState ) {
        this.state = newState;
    }

}