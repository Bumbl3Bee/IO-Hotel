class ClientList {

private:
	int size;
	List<Client> list;
	ClientList listInstance;

	void clientList();

public:
	void add(Client client);

	void remove(int id);

	void edit(int id);

	List<Client> getAllClients();

	int count();

	Client getClient(int id);

	boolean isEmpty();

	ClientListIterator createIterator();

	ClientList getInstance();
};
