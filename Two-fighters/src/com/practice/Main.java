package com.practice;
/*
Create a function that returns the name of the winner in a fight between two fighters.

Each fighter takes turns attacking the other and whoever kills the other first is victorious.
Death is defined as having health <= 0.

Each fighter will be a Fighter object/instance.
See the Fighter class below in your chosen language.

Both health and damagePerAttack (damage_per_attack for python) will be integers larger than 0.
You can mutate the Fighter objects.
*/
public class Main {

    public static void main(String[] args) {
        // write your code here
        Fighter fighter1 = new Fighter("Lew", 10, 2);
        Fighter fighter2 = new Fighter("Harry", 5, 4);
        System.out.println(FightMechanic.declareWinner(fighter1, fighter2, "Harry"));


    }
}
