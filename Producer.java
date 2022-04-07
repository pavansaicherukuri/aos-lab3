import java.util.*;

public class Producer extends Thread {
	public Producer(MessageQueue m) {
		mbox = m;
	}
	public void run() {
		Date message;
		while (true) {
			int sleeptime = (int) (Server.NAP_TIME * Math.random());
			System.out.println("Producer sleeping for " + sleeptime + " seconds");
			try {
				Thread.sleep(sleeptime * 1000);
			} catch (InterruptedException e) { }
			
			message = new Date();
			System.out.println("Producer produced " + message);
			mbox.send(message);
		}
	}
private MessageQueue mbox;
}
