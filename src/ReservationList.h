class ReservationList {

private:
	int size;
	List<Reservation> list;
	ReservationList listInstance;

	void roomList();

public:
	void add(Reservation reservation);

	void remove(int id);

	void edit(int id);

	List<Reservation> getAllReservation();

	int count();

	Reservation getReservation(int id);

	Empty isEmpty();

	ReservationListIterator createIterator();

	ReservationList getInstance();
};
