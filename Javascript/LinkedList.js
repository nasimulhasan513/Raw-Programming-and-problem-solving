class LinkedList{
    constructor(){
         this.head = null
        this.tail = null
    }
    append(value){
        const newNode = {value,next: null}
        if(this.tail){
            this.tail.next = newNode
        }
        this.tail = newNode 
        if(!this.head) {
            this.head = newNode
        } 
    }
    toArrey(){
        const elements = []
        let curNode = this.head
        while (curNode){
            elements.push(curNode)
            curNode = curNode.next
        }
        return elements
    }
}

const LinkedList1 = new LinkedList()
LinkedList1.append(1)
LinkedList1.append(5)
LinkedList1.append('tyhjkf')
LinkedList1.append(3)
LinkedList1.append('fhsdjkf')
LinkedList1.append('4324')
console.log(LinkedList1.toArrey())