#include <string>

class SockDrawer
{
	private:
		int capacity;
		std::string *socks;
	public:
		SockDrawer (int capacity);

		// rule of 3
		~SockDrawer (); // destructor
		SockDrawer (const SockDrawer& rhs);
		SockDrawer operator = (const SockDrawer& rhs);
};
