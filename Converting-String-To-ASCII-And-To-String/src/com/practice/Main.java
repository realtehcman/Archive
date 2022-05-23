package com.practice;

import java.io.IOException;

// https://docs.oracle.com/javase/7/docs/api/java/io/OutputStream.html
public class Main {

    public static void main(String[] args) throws IOException{
        String max = "Max is gonna be a senior Java dev";
        byte[] data = max.getBytes(); // Saves in bytes

        System.out.write(data); // out is an object; I need to close it
        // Converts to characters and saves them to buffer

        System.out.flush(); // writes to the output stream (terminal)
        System.out.close();
        }
}
