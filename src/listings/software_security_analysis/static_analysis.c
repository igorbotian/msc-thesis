void log(char* msg) {
	if(msg == NULL) {
		printf("Attempt to print null message");
		return;
	}

	fprintf(log_file, "%s", msg);
}