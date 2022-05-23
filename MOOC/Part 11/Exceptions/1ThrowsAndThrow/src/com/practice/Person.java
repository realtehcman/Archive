package com.practice;

public class Person {

    private String name;
    private int age;

    public Person(String name, int age){
        //declared exception; if throw an exception sometimes I must include it, sometimes I do not

        if(name == null || name.equals("") || name.length() > 40 || age > 120 || age < 0){
            throw new IllegalArgumentException(); //I don't have to handle it
        }
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    @Override
    public String toString(){
        return "Person{" + "name='" + name + '\'' + ", age=" + age + '}';
    }
}
