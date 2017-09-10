package ui.text;

import ui.UIPrompter;

public class TextPrompter implements UIPrompter{
    public static UIPrompter factory(){
        System.out.println("Creating TextPrompter");
        return (new TextPrompter());
    }
    public int write(byte[] b){
        System.out.println("Wrting prompt for user");
        return 0;
    }
    public int read(byte[] b){
        System.out.println("Getting input from user");
        return 0;
    }
}