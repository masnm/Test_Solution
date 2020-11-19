package com;

public class Heart extends Organ {
    private int bitRate;

    protected Heart ( String name, String medicalConditon, boolean state, int bitRate ) {
        super(name, medicalConditon, state);

        this.bitRate = bitRate;

    }

    public int getBitRate() {
        return bitRate;
    }

    public void setBitRate(int bitRate) {
        this.bitRate = bitRate;
    }
}
