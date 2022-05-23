package com.practice;
/*Step 1
Starting with some simple code
b.health = b.health - a.damagePerAttack;  // b gets hit
if (b.health <= 0) { // if b dies
  return a.name;  // a wins
}

Step 2
Notice that there is only one statement in the condition block so the parentheses are unnecessary.
It's not good coding practice to remove theses but I'm going to do it anyway. Now we have:
b.health = b.health - a.damagePerAttack;  // b gets hit
if (b.health <= 0) return a.name; // if b dies, a wins
}

Step 3
Notice the the first statement would be better written using an assignment operator, so let's do that. Now we have:
b.health -= a.damagePerAttack;  // b gets hit
if (b.health <= 0) return a.name; // if b dies, a wins
}

Step 4
Notice that the first statement can be embedded in the if replacing the LHS of the condition, so let's do that too. I also removed 1/2 the comments because it is self-evident from the variable names.
Now we have:
if ((b.health -= a.damagePerAttack) <= 0) return a.name;  // a wins
*/

public class FightMechanic {
    public static String declareWinner(Fighter fighter1, Fighter fighter2, String firstAttacker) {
        Fighter a, b;
        b = fighter2;
        a = fighter1;

        if(fighter1.name.contains(firstAttacker)) {
            b = fighter1;
            a = fighter2;
        }
        while(true) {
            if((a.health -= b.damagePerAttack) <= 0) return b.name;
            if((b.health -= a.damagePerAttack) <= 0) return a.name;
        }
    }
}

/* dumb solutions (my 1st idea)
/*  idea
 * since every fighter will consequently attack each other I need:
 * 1. finc out who will attack first
 * 2. based from there, the opponent has to do the attack
 *
 *   implementation
 * 1. we compare the input string with the object name field (.contains() )
 * 1.2 implementing attack with  fighter2.health -= fighter1.damagePerAttack;
 * 2. to make consequent moves, i have implemented modular division. another way would be boolean solution, but I've
 * sticked to my soltution anyway
 *


public static String declareWinner(Fighter fighter1, Fighter fighter2, String firstAttacker) {
        //.contains() is CharSequencesStrings are CharSequences, so you can just use Strings
        if(fighter1.name.contains(firstAttacker)) {
            fighter2.health -= fighter1.damagePerAttack;
            if(fighter2.health <= 0) {
                return fighter1.name;
            }
            int maxSize;
            if(fighter1.health > fighter2.health)
                maxSize = fighter1.health;
            else
                maxSize = fighter2.health;

            int attack;
            for(int i = 1; i <= maxSize; i++) {
                if(i % 2 == 0)
                    attack = 1;
                else
                    attack = 2;

                switch(attack) {
                    case 1:
                        fighter2.health -= fighter1.damagePerAttack;
                        if(fighter2.health <= 0)
                            return fighter1.name;
                        break;
                    case 2:
                        fighter1.health -= fighter2.damagePerAttack;
                        if(fighter1.health <= 0)
                            return fighter2.name;
                        break;
                }
            }
        } else if(fighter2.name.contains(firstAttacker)) {

            fighter1.health -= fighter2.damagePerAttack;
            if(fighter1.health <= 0) {
                return fighter2.name;
            }
            int maxSize;
            if(fighter1.health > fighter2.health)
                maxSize = fighter1.health;
            else
                maxSize = fighter2.health;

            int attack;
            for(int i = 1; i <= maxSize; i++) {
                if(i % 2 == 0)
                    attack = 1;
                else
                    attack = 2;

                switch(attack) {
                    case 1:
                        fighter2.health -= fighter1.damagePerAttack;
                        if(fighter2.health <= 0)
                            return fighter1.name;
                        break;
                    case 2:
                        fighter1.health -= fighter2.damagePerAttack;
                        if(fighter1.health <= 0)
                            return fighter2.name;
                        break;
                }
            }
        }
        return "Error";
    }*/
