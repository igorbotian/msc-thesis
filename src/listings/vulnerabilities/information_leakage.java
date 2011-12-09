public FanStoreImpl implements FanStore {

	public List<TShirt> getTShirts() 
		throws FanStoreException {
			
		try {
			return getTShirtsFromDatabase();
		} catch(Exception e) {
			throw new FanStoreException(
				"Unable to get list of t-shirts", e);
		}
	}

	private List<TShirt> getTShirtsFromDatabase() 
		throws SQLException {

		// ... (retrieving)
	}
}