#include <iostream>
#include <deque>

int main()
{

  std::deque <int> citizenQ;

  char command;

  int citizen = 0;
  int num = 0;

  int P = 0;
  int C = 0;

  int caseCount = 1;

  int citizenID;

	while (std::cin >> P >> C)
  {
      if (P == 0)
          break;

      // Create a queue of citizens
  		for (int i = 1; i <= std::min(P, C); i++)
  			 citizenQ.push_back(i);

      std::cout << "Case " << caseCount << ":" << std::endl;
   		caseCount++;

  		for(int i = 0; i < C; i++)
      {
      			std::cin >> command;

      			if (command == 'E')
            {
                std::cin >> citizenID;
                citizenQ.push_front(citizenID);

                // Crazy Iterator for deque class
                for (std::deque<int>::iterator citizen = citizenQ.begin(); citizen != citizenQ.end(); citizen++)
                {
                    if (*citizen == citizenID)
                    {
                        citizenQ.erase(citizen);
                        break;
                    }
                }
      			}
      			else
            {
                std::cout << citizenQ.front() << std::endl;
                citizenQ.push_back(citizenQ.front());
                citizenQ.pop_front();
      			}
    		}
  	}
}
