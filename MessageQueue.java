import java.util.*;

public class MessageQueue {
	public MessageQueue() {
		queue = new Vector();
	}
	public void send(Object item){
		queue.addElement(item);
	}
	public Object receive() {
		Object item;
		if (queue.size() == 0)
			return null;
		else
		{
			item = queue.firstElement();
			queue.removeElementAt(0);
			return item;
		}
	}
private Vector queue;
}
