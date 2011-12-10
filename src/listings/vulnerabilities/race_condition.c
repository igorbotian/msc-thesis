void consume() {
	for(;;) {
		if(is_resource_available()) {
			process_resource_data();
			break;
		}

		wait_for_resource_availability();
	}
}