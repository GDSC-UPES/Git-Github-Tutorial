// Linked list implemtation add, delete from (first ,last, between) Linked list
class Main{
    Node head=null;
    // create Node class 
        class Node{
        int data;
        Node next;
        
        Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    // to add node at head 
    void addfirst(int data){
        Node newNode=new Node(data);
        if(head==null){
            head=newNode;
        }
        else{
            newNode.next=head;
            head=newNode;
        }
    }
    // to print linked list
    void print(){
        if(head==null){
            System.out.print("Empty list");
        }
        else{
            Node currNode=head;
            while(currNode!=null){
                System.out.print(currNode.data);
                currNode=currNode.next;
            }
        }
    }
    // search element in linked list from last to delete 
    void search(int data){
        if(head==null){
            System.out.print("No");
        }
        else{
            Node currNode=head;
            int count=0;
            while(currNode!=null){
                count=count+1;
                if(currNode.data==data){
                 System.out.print("Node found at position ->"+ currNode.data);
                 break;
                }
                currNode=currNode.next;
            }
            if(currNode==null){
                System.out.print("Node not available");
            }
            
        }
    }
    // method to add node in middle 
    void addbtw(int data,int dpos){
        Node newNode=new Node(data);
        Node currNode=head;
        if(head==null ){
            head=newNode;
        }
        while(currNode!=null){
            if(currNode.data==dpos){
                newNode.next=currNode.next;
                currNode.next=newNode;
                break;
            }
            currNode=currNode.next;
        }
        if(currNode==null){
            System.out.print("Element does not exist enter valid element");
        }
        return;
    }
    // method to delete node from middle 
    void deletebtw(int data){
        if(head==null){
            return;
        }
        else{
            if(head.data==data){
                head=head.next;
            }
            else{
            Node prevNode=head;
            Node currNode=head.next;
            while(currNode!=null){
                if(currNode.data==data){
                    prevNode.next=currNode.next;
                    currNode.next=null;
                    break;
                }
                currNode=currNode.next;
                prevNode=prevNode.next;
            }
            if(currNode==null){
                System.out.println("Element does not exist in list");
            }
            }
        }
    }
    // method to count no. of nodes in linked list
    int count(){
        Node currNode=head;
        int l=0;
        while(currNode!=null){
            l=l+1;
            currNode=currNode.next;
        }
        return l;
    }
    //method to get element from the end of linked list
    int nodefromlast(int n){
        int q=count();
        int z=1,lastn=0;
        if (head==null || q<n || n==0 ||n<0){
            return -1;
        }
        else{
             lastn=q-n+1;
             Node currNode=head;
        
        while(z< lastn){
            currNode=currNode.next;
            z=z+1;
        }
        return (currNode.data);
        }
    }
    public static void main(String args[]){
        Main ob=new Main();
        ob.addfirst(4);
        ob.addfirst(3);
        ob.addfirst(2);
        ob.addfirst(1);
        ob.addbtw(7,3);
        ob.deletebtw(3);
        System.out.println(ob.count());
        System.out.println(ob.nodefromlast(0));
        ob.print();
        
    }
}