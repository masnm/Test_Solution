package com;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Patient patient = new Patient("Tom", 34 );

		Scanner takeInput = new Scanner(System.in);
		int input = 0;

		while ( input != 9 ) {
			input = takeInput.nextInt();
			switch ( input ) {
				case 1:	// scope for left eye
					System.out.println( patient.getName() );
				break;
				case 2:	// scopr for right eye
				break;
				case 3:	// scope for heart
				break;
				case 4:	// scope for stomach
				break;
				case 5:	// cope for skin
				break;
				case 9:	// scope for quit
				break;
				default:// unknown
				break;
			}
		}
		
		takeInput.close();
		System.out.println(input);

	}
}