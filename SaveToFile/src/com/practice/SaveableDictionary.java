package com.practice;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.nio.file.Paths;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class SaveableDictionary {

    private Map<String, String> dictionary = new HashMap<>();

    private String file;

    public SaveableDictionary() {
    }

    public SaveableDictionary(String file) {
        this.file = file;

    }

    public boolean load() {
        try ( Scanner fileReader = new Scanner(Paths.get(this.file))) {
            while (fileReader.hasNext()) {
                String row = fileReader.nextLine();
                String[] parsed = row.split(":");
                this.dictionary.put(parsed[0], parsed[1]);
                this.dictionary.put(parsed[1], parsed[0]);

            }
        } catch (IOException e) {
            return false;
        }

        return true;
    }

    public void add(String words, String translation) {
        if (!dictionary.containsKey(words)) {
            this.dictionary.put(words, translation);
        }
        if (!dictionary.containsKey(translation)) {
            this.dictionary.put(translation, words);
        }
    }

    public String translate(String word) {
        if (dictionary.containsKey(word)) {
            return this.dictionary.get(word);
        }

        return null;
    }

    public void delete(String word) {
        this.dictionary.remove(this.dictionary.get(word)); //important to have this at the first method's line
        this.dictionary.remove(word);
    }

    public boolean save() {
        try ( FileWriter fileStream = new FileWriter(this.file)) {

            BufferedWriter bw = new BufferedWriter(fileStream);
            PrintWriter out = new PrintWriter(bw);
            //
            //            for(int i = 0; 0 < this.dictionary.size(); i++){
            //                out.print("\n" + this.dictionary. + ":" + entry.getValue());
            //
            //            }
            int count = 0;

            for (Map.Entry<String, String> entry : this.dictionary.entrySet()) {
                if (count % 2 != 0) {
                    count++;
                    continue;
                }

                out.println(entry.getKey() + ":" + entry.getValue());
                count++;
            }
            out.close();
            bw.close();
            fileStream.close();
        } catch (IOException ex) {
            return false;
        }

        return true;
    }

}
