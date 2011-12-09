public class Consumer {
	
	public void consume() {
		for(;;) {
			if(isResourceAvailable()) {
				processResourceData();
				break;
			}

			waitForResourceAvailability();
		}
	}

	private void processResourceData() {
		// ...
	}

	private boolean isResourceAvailable() {
		// ...
	}

	private void waitForResourceAvailability() {
		// ...
	}
}

	
