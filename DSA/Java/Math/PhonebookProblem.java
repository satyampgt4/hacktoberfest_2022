package com.arpit;
import java.util.*;
import java.io.*;

public class PhonebookProblem {
    public static void main(String []argh) {
        Scanner in = new Scanner(System.in);
        int n=in.nextInt();
        in.nextLine();
        Map<String, Integer> book = new HashMap<>();
        for(int i=0; i<n; i++) {
            String name=in.nextLine();
            int phone=in.nextInt();
            book.put(name, phone);
            in.nextLine();
        }
        while(in.hasNext()) {
            String s=in.nextLine();
            if (book.containsKey(s)) {
                int num = book.get(s);
                System.out.println(s+"="+num);
            } else {
                System.out.println("Not Found");
            }
        }
    }

}
