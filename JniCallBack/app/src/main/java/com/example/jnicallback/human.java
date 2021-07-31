package com.example.jnicallback;

public class human {
    public static class Man {
        public String name;
        public int age;
    }
    private long mNativeHandler = 0;
    static {
        System.loadLibrary("native-lib");

    }

    public void addMan(Man m){
        add_man(m,10);
    }
    human(){nativeCreate();}
    public native void add_man(Man m,int num);
    private native void nativeCreate();
}
