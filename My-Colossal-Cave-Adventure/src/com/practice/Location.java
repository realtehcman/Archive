package com.practice;

import java.util.HashMap;
import java.util.Map;

final public class Location {

    private final int LocationID;
    private final String Description;
    private final Map<String, Integer> exits;

    public Location(int locationID, String description) {
        LocationID = locationID;
        Description = description;
        this.exits = new HashMap<>();
        this.exits.put("Q", 0);
    }
    public void addExits(String direction, Integer locationID){
        this.exits.put(direction, locationID);
    }

    public String getDescription() {
        return Description;
    }

    public Map<String, Integer> getExits() {
        return exits;
    }

    //    public Map<String, Integer> getExits() {
    //        // reason: nothing can change the hashmap since it is final, so I create a new to modify it; create other copies
    //        return new HashMap<>(exits);
    //    }

}
