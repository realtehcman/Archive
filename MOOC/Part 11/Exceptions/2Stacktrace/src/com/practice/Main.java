package com.practice;

import java.util.List;

public class Main  {
    private List<Integer> numbers;

    public void add(int number){
        this.numbers.add(number);
    }

    public double average(){
        return this.numbers.stream().mapToInt(i -> i).average().getAsDouble();
    }


}

class Program {
    public static void main(String[] args){
        Main st = new Main();
        st.add(22);
        System.out.println("Printing the average of the statistics: " + st.average());
        System.out.println("Adding number 22");
        System.out.println("Printing the average of the statistics: " + st.average());
    }
}
