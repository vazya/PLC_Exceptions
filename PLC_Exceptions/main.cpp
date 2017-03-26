#include "Exception.h"

void fun()
{
	//THROW( new CVZException( "VZ throw CNullPointerException" ) );
	THROW( new CVZException() );
	//THROW( new CException( "VZ throw CException" ) );
	//THROW( new CException() );
}

void notFun()
{
	std::cout << "fun" << '\n';
	fun();
}


int main()
{
	TRY
	{
		TRY
		{
			notFun();
		}
		//CATCH( CVZException, e )
		//{
		//	std::cout << e->GetMessage() << " 1 " << '\n';
		//}
		//CATCH( CException, e )
		//{
		//	std::cout << e->GetMessage() << " 2 " << '\n';
		//}
		ENDTRYCATCH;
	}
	CATCH( CException, e )
	{
		std::cout << e->GetMessage() << " 3 " << '\n';
	}
	ENDTRYCATCH;
	std::cout << "notFun" << '\n';
	return 0;
}