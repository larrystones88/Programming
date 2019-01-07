/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication8;

/**
 *
 * @author leilei
 */
public class MyStack1 {
    private Stack<Integer> stackData;
    private Stack<Integer> stackMin;
    
    public MyStack1(){
        this.stackData = new Stack<Integer>();
        this.stackMin = new Stack<Integer>();
    }
    
    public int getmin(){
        if(this.stackMin.isEmpty()){
            throw new RuntimeException("empty");
        }
        return this.stackMin.peek();
    }
    
    public void push(int newNum){
        if(this.stackMin.isEmpty()){
            this.stackMin.push(newNum);
        }else if(newNum <= this.getmin()){
            this.stackMin.push(newNum);
        }
        this.stackData.push(newNum);
    }
    
    public int pop(){
        if(this.stackData.isEmpty()){
            throw new RuntimeException("empty");
        }
        int value = this.stackData.pop();
        if(value == this.getmin()){
            this.stackMin.pop();
        }
        return value;
    }
}
