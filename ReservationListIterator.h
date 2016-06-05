class ReservationListIterator : Iterator {

private:
	List<Reservation> _list;
	int current;

public:
	ReservationListIterator(List<Reservation> list);

	void first();

	void next();

	Reservation currentItem();

	int getCurrentIndex();
};
