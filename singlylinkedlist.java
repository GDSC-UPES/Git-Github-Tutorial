//Singly linked list implemented using java
class singlylinkedlist{
    Node head;
    class Node{
      int data;
      Node next;

      // make constructor of node class
      Node( int data){
        this.data=data;

      }
    }
   // method to add at head of linked list
    public void addfirst(int data){
        Node newNode=new Node(data);
        if(head==null){
            head=newNode;
        }
        else{
            newNode.next=head;
            head=newNode;
        }
    }
   //method to add at last of linked list
    public void addlast(int data){
        Node newNode=new Node(data);
        if(head==null){
            head=newNode;
        }
        else{
         Node currNode=head;
        while(currNode.next!=null){
            currNode=currNode.next;
        }
        currNode.next=newNode;
        }
        
    }
//method to delete first element of linked list
    public void deletefirst(){
        if(head==null){
            System.out.println("Empty");
        }
        else{
            head=head.next;
        }
    }
// method to  delete last element of linked list
    public void deletelast(){
        if(head==null){
            System.out.println("Empty linked list");
    }
        if(head.next==null){
            head=null;

        }
        else{
          Node currNode=head.next;
        Node prevNode=head;
        while(currNode.next!=null){
            currNode=currNode.next;
            prevNode=prevNode.next;
        }
        prevNode.next=null;
        }
        
    }
// method to print linked list
    public void print(){
        Node currNode=head;
        while(currNode!=null){
            System.out.println(currNode.data);
            currNode=currNode.next;
        }
        System.out.println("null");
    }

    public static void main(String args[]){
        singlylinkedlist ob=new singlylinkedlist();
        ob.addfirst(10);
        ob.addfirst(20);
        ob.addlast(30);
        ob.addlast(40);
        ob.deletefirst();
        ob.deletelast();
        ob.print();
    }
}