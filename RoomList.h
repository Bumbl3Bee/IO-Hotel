class RoomList {

private:
	int size;
	List<Room> list;
	RoomList listInstance;

	void roomList();

public:
	void add(Room room);

	void remove(int id);

	void edit(int id);

	List<Room> getAllRooms();

	int count();

	Room getRoom(int id);

	boolen isEmpty();

	RoomListIterator createIterator();

	RoomList getInstance();
};
