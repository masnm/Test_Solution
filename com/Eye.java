package com;

public class Eye extends Organ {

	private String color;

	protected Eye ( String name, String medicalCondition, boolean isOpened, String color ) {
		super(name, medicalCondition, isOpened);

		this.color = color;
	}

	public String getColor() {
		return color;
	}

	public void setColor(String color) {
		this.color = color;
	}

}