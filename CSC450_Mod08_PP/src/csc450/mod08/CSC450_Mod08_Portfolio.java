package csc450.mod08;

public class CSC450_Mod08_Portfolio {

    // Thread 1: count up from 0 to 20
    static class CountUpThread extends Thread {
        @Override
        public void run() {
            for (int i = 0; i <= 20; i++) {
                System.out.println("Counting Up: " + i);
                try {
                    Thread.sleep(100); // small pause so output is easier to follow
                } catch (InterruptedException e) {
                    System.out.println("CountUpThread was interrupted.");
                    Thread.currentThread().interrupt();
                    return;
                }
            }
        }
    }

    // Thread 2: count down from 20 to 0
    static class CountDownThread extends Thread {
        @Override
        public void run() {
            for (int i = 20; i >= 0; i--) {
                System.out.println("Counting Down: " + i);
                try {
                    Thread.sleep(100); // small pause so output is easier to follow
                } catch (InterruptedException e) {
                    System.out.println("CountDownThread was interrupted.");
                    Thread.currentThread().interrupt();
                    return;
                }
            }
        }
    }

    public static void main(String[] args) {
        CountUpThread thread1 = new CountUpThread();
        CountDownThread thread2 = new CountDownThread();

        System.out.println("Starting Thread 1 (Count Up)...");
        thread1.start();

        try {
            thread1.join(); // wait until thread 1 finishes
        } catch (InterruptedException e) {
            System.out.println("Main thread interrupted while waiting for Thread 1.");
            Thread.currentThread().interrupt();
            return;
        }

        System.out.println("Starting Thread 2 (Count Down)...");
        thread2.start();

        try {
            thread2.join(); // wait until thread 2 finishes
        } catch (InterruptedException e) {
            System.out.println("Main thread interrupted while waiting for Thread 2.");
            Thread.currentThread().interrupt();
            return;
        }

        System.out.println("Program complete.");
    }
}