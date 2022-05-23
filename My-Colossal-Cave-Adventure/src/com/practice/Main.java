package com.practice;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.concurrent.TimeUnit;

/* TASKS
 * 1. Implement dynamic Map object changing +
 * 2. Update loc based on the object.get() +
 * 2.5 Use recognise letters in the user parsing
 * 3. If does not make sense by the end of the challenge why I need Map at Location class, change it to List
 * Find out more in the "Be simple."
 * */

public class Main {
    private static final Map<Integer, Location> locations = new HashMap<>();

    public static void main(String[] args) throws InterruptedException /*for the TimeUnit lib*/ {
        //I have an object (new...) in the object (.put); object (new...) may have other objects
        Main.locations.put(0, new Location(0, "You are sitting in front of a computer learning Java"));
        Main.locations.put(1, new Location(1, "You are standing at the end of a road before a small brick building"));
        Main.locations.put(2, new Location(2, "You are at the top of a hill"));
        Main.locations.put(3, new Location(3, "You are inside a building, a well house for a small spring"));
        Main.locations.put(4, new Location(4, "You are in a valley beside a stream"));
        Main.locations.put(5, new Location(5, "You are in the forest"));

        // 4 objects inside of 1 object (location)
        Main.locations.get(1).addExits("W", 2);
        Main.locations.get(1).addExits("N", 5);
        Main.locations.get(1).addExits("E", 3);
        Main.locations.get(1).addExits("S", 4);

        Main.locations.get(2).addExits("N", 5);

        Main.locations.get(5).addExits("W", 2);
        Main.locations.get(5).addExits("S", 1);

        Main.locations.get(3).addExits("W", 1);

        Main.locations.get(4).addExits("W", 2);
        Main.locations.get(4).addExits("N", 1);


        int loc = 1; // the default location

        String direction;
        Scanner getsLocationId = new Scanner(System.in);
        while(true) {
            if(Main.locations.containsKey(loc)) {
                if(loc == 0) {
                    System.out.println(Main.locations.get(0).getDescription());
                    Main.exiting();
                    return;
                }
                System.out.println(Main.locations.get(loc).getDescription());
                System.out.println("Possible directions: " + Main.locations.get(loc).getExits().keySet());
            } else
                System.out.println("Sry. No such location");

            System.out.print("Choose the direction: ");
            direction = parsingInput(getsLocationId.nextLine());


            if(Main.locations.get(loc).getExits().containsKey(direction)) {
                loc = Main.locations.get(loc).getExits().get(direction); // get(direction) means I get value mapped to the key
            } else
                System.out.println("No such direction");

            //            Map<String, Integer> exits = Main.locations.get(loc).getExits();

        }
    }

    private static String parsingInput(String userInput) {
        if(userInput.length() < 1)
            return userInput;

        userInput = userInput.toUpperCase();

        String[] tokens = userInput.split("[ ,]");
        System.out.println(Arrays.toString(tokens));
        for(String token : tokens) {
            if(token.equals("WEST") || token.equals("NORTH") || token.equals("EAST") || token.equals("SOUTH")) {
                userInput = token.substring(0, 1);
                break;
            }
        }
        return userInput;
    }


    private static void exiting() throws InterruptedException {
        System.out.print("Exiting the game");
        TimeUnit.SECONDS.sleep(1);
        System.out.print(".");
        TimeUnit.SECONDS.sleep(1);
        System.out.print(".");
        TimeUnit.SECONDS.sleep(1);
        System.out.print(".");
    }
}


/*        for(int i = 0; i < Main.locations.size(); i++) {
            for(int j = 0; j < tokens.length; j++) {
                if(Main.locations.get(i).equals(tokens[j]) {
                    userInput = tokens[j].substring(0, 1);
                    break;
                }
            }
        }*/