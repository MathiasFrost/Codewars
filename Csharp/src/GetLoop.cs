// https://www.codewars.com/kata/52a89c2ea8ddc5547a000863/csharp

namespace CSharp;

// ReSharper disable once UnusedType.Global
public static class GetLoop {
    // ReSharper disable once UnusedMember.Global
    public static int GetLoopSize(Node startNode) {
        var length = 1;
        Node? tortoise = startNode.Next;
        Node? hare = startNode.Next?.Next;

        // Find the cycle, the hare and the tortoise will encounter at the cycle start
        while (tortoise != hare) {
            tortoise = tortoise?.Next;
            hare = hare?.Next?.Next;
        }

        // Find the lenght of the cycle - count the number of step to return at the cycle beginning
        hare = tortoise?.Next;

        while (tortoise != hare) {
            hare = hare?.Next;
            length++;
        }

        return length;
    }
}

public class Node {
    public Node(string name) => Name = name;

    public Node? Next { get; set; }

    // ReSharper disable once UnusedAutoPropertyAccessor.Local
    string Name { get; }
}

// ReSharper disable once UnusedType.Global
public static class NodeCreator {
    // ReSharper disable once UnusedMember.Global
    public static Node CreateChain(int tail, int loop) {
        if (tail < 1 || loop < 1) throw new IndexOutOfRangeException("Has to be greater than 0");

        var root = new Node("A");
        IList<Node> tailNodes = new List<Node>();
        for (var i = 0; i < tail - 1; i++) tailNodes.Add(new Node(((char)(1 + i + 'A')).ToString()));

        for (var i = 0; i < tail - 2; i++) tailNodes[i].Next = tailNodes[i + 1];

        if (tail > 1) root.Next = tailNodes[0];

        IList<Node> loopNodes = new List<Node>();
        for (var i = 0; i < loop; i++) loopNodes.Add(new Node((1 + i).ToString()));

        for (var i = 0; i < loop - 1; i++) loopNodes[i].Next = loopNodes[i + 1];

        loopNodes[loop - 1].Next = loopNodes[0];

        if (tail > 2)
            tailNodes[tail - 2].Next = loopNodes[0];
        else
            root.Next = loopNodes[0];

        return root;
    }
}