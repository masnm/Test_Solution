package com;

public class Patient {

    private String name;
    private int age;

    private Eye leftEye;
    private Eye rightEye;
    private Heart heart;
    private Stomach stomach;
    private Skin skin;

    protected Patient ( String name, int age ) {
        this.name = name;
        this.age = age;

        leftEye = new Eye("Left Eye", "Have some problem", false, "Blue" );
        rightEye = new Eye("Right Eye", "Ok", false, "Dark Blue" );
        heart = new Heart("Heart", "Ok", false, 70 );
        stomach = new Stomach("Stomach", "Hungry", true );
        skin = new Skin("Skin", "Burned", false );
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public int getAge() {
        return age;
    }

    public void setLeftEye(Eye leftEye) {
        this.leftEye = leftEye;
    }

    public Eye getLeftEye() {
        return leftEye;
    }

    public void setRightEye(Eye rightEye) {
        this.rightEye = rightEye;
    }

    public Eye getRightEye() {
        return rightEye;
    }

    public void setHeart(Heart heart) {
        this.heart = heart;
    }

    public Heart getHeart() {
        return heart;
    }

    public void setStomach(Stomach stomach) {
        this.stomach = stomach;
    }

    public Stomach getStomach() {
        return stomach;
    }

    public void setSkin(Skin skin) {
        this.skin = skin;
    }

    public Skin getSkin() {
        return skin;
    }

}
