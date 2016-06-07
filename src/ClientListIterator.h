class ClientListIterator : Iterator {

private:
	List<Client> _list;
	int current;

public:
	ClientListIterator(List<Client> list);

	void first();

	void next();

	Client currentItem();

	int getCurrentIndex();
};
