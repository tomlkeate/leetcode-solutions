type Node struct {
    Key int
    Val int
    Prev *Node
    Next *Node
}

type LRUCache struct {
    Capacity int
    HashMap map[int]*Node
    Tail *Node
    Head *Node
}

func (this *LRUCache) Insert(node *Node) {
    mruNode := this.Head.Next

    node.Prev = this.Head
    node.Next = mruNode

    this.Head.Next = node
    mruNode.Prev = node
}

func (this *LRUCache) Remove(node *Node) {
    node.Prev.Next = node.Next
    node.Next.Prev = node.Prev
    node.Prev = nil
    node.Next = nil
}

func Constructor(capacity int) LRUCache {
    dummyTail := &Node{}
    dummyHead := &Node{}
    dummyTail.Prev = dummyHead
    dummyHead.Next = dummyTail
    return LRUCache{
        Capacity: capacity,
        HashMap: make(map[int]*Node, capacity),
        Tail: dummyTail,
        Head: dummyHead,
    }
}

func (this *LRUCache) Get(key int) int {
    if node, exists := this.HashMap[key]; exists {
        this.Remove(node)
        this.Insert(node)
        return node.Val
    }
    return -1
}

func (this *LRUCache) Put(key int, value int)  {
    if node, exists := this.HashMap[key]; exists {
        this.Remove(node)
        this.Insert(node)
        node.Val = value
    } else {
        node := &Node{
            Key: key,
            Val: value,
        }
        this.Insert(node)
        this.HashMap[key] = node
        if len(this.HashMap) > this.Capacity {
            lru := this.Tail.Prev
            this.Remove(lru)
            delete(this.HashMap, lru.Key)
        }
    }
}


/**
 * Your LRUCache object will be instantiated and called as such:
 * obj := Constructor(capacity);
 * param_1 := obj.Get(key);
 * obj.Put(key,value);
 */
