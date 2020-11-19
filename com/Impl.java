package com;

public class Impl implements Inter {

    String name;

    protected Impl ( String newName ) {
        this.name = newName;
    }

    @Override
    public void start() {
        System.out.println(name + "Sterted ...");
    }

    @Override
    public void end() {
        System.out.println(name + "ended ...");
    }
    
}
