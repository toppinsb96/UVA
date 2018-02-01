#include <deque>
#include <iostream>

int main()
{
  char command;

  int citizen = 1;
  int num = 1;

  int P = 1;
  int C = 1;

  int caseCount = 1;

  int citizenID;

	while (std::cin >> P >> C)
  {
      // Can't globally call this outside loop.
      // must reinstantiate it
      std::deque <int> citizenQ;

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

                // Crazy Iterator using deque class
                // goes from beginning of Queue until the end
                // Similar to python's for citizen in citizenQ: (I think.)
                std::deque<int>::iterator citizen = citizenQ.begin() + 1;

                while(citizen != citizenQ.end())
                {
                    if (citizenID == *citizen)
                    {
                        citizenQ.erase(citizen);
                        break;
                    }
                    citizen++;
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
