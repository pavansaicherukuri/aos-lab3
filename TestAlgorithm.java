
public class TestAlgorithm {
public static void main(String[] args) {
	MutualExclusion alg = new Algorithm_3();
	
	Worker first = new Worker("Running 0", 0, alg);
	Worker second = new Worker("Running 1", 1, alg);
	
	first.start();
	second.start();
}
}
