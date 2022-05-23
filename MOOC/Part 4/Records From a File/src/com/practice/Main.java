package com.practice;

import java.io.IOException;
import java.nio.file.Paths;
import java.util.Scanner;

public class Main {

    public static void main(String[] args){
        try(Scanner scanner = new Scanner(System.in)){
            String file = scanner.nextLine();

            Scanner filePath = new Scanner(Paths.get(file));
            while(filePath.hasNext()){

                String line = filePath.nextLine();
                if(line.equals("")){
                    continue;
                }
                String[] row = line.split(",");

                System.out.print(row[0]);
                StringBuilder age = new StringBuilder("year");
                if((Integer.parseInt(row[1])) > 1){
                    age.replace(0, 4, "years");
                }
                System.out.println(", age: " + row[1] + " " + age);
            }
        }
        catch(Exception e){
            System.out.println(e);
        }
    }

}