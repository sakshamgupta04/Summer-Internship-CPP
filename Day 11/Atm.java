import java.util.*;
import java.io.File;
public class Atm {
    public static class BankAccount{
        private String accountHolderName;
        private int balance;
        BankAccount(String accountHolderName,int balance){
            this.accountHolderName=accountHolderName;
            this.balance=balance;
        }
        void displayinfo(){
            System.out.println("Account Holder Name:"+accountHolderName);
            System.out.println("Balance:"+balance+" Rs.");
        }
        void depositing(int amt){
            balance+=amt;
            System.out.println("Amount Successfully Deposited");
            System.out.println("Updated Balance:"+balance+" Rs.");
        }
        void withdrawing(int amt){
            if(amt>balance){
                System.out.println("Insufficient Balance");
            }
            else{
                balance-=amt;
                System.out.println("Amount Successfully Withdraw");
                System.out.println("Updated Balance:"+balance+" Rs.");
            }
        }
    }

    public static void main(String[] args) {
        BankAccount b1=new BankAccount("Dhruv Gupta",5000);
        b1.displayinfo();
        b1.depositing(500);
        b1.withdrawing(4500);
        b1.withdrawing(2000);
        b1.displayinfo();

    }
    
}