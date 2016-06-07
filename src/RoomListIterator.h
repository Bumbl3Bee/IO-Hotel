class RoomListIterator : Iterator {

private:
	List<Room> _list;
	int current;

public:
	RoomListIterator(List<Room> list);

	void first();

	void next();

	Room currentItem();

	int getCurrentIndex();
};
