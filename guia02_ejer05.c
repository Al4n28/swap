#include <stdio.h>
#include <math.h>

char Calcular_Impuestos(float Salario);
char Sol_Calcular_Impuestos(float Salario);

//#include </Users/psr/Desktop/paper7-GNN/practica//boost/test/included/unit_test.hpp>
//C:\Program Files\boost_1_80_0\boost_1_80_0

#define BOOST_TEST_MODULE example

#include  </mnt/c/Users/Alan/Desktop/PracticaGit/practica/boost/test/included/unit_test.hpp>


BOOST_AUTO_TEST_SUITE( test_suite1 )

BOOST_AUTO_TEST_CASE( test_case1 )
{
  //float i = 1000, j = 10;
  BOOST_TEST(Calcular_Impuestos(0.0f) == Sol_Calcular_Impuestos(0.0f));
}

BOOST_AUTO_TEST_CASE( test_case2 )
{
  //float i = 1000, j = 100;
  BOOST_TEST(Calcular_Impuestos(10000.0f) == Sol_Calcular_Impuestos(10000.0f));
}

BOOST_AUTO_TEST_SUITE_END()
BOOST_AUTO_TEST_SUITE( test_suite2 )

BOOST_AUTO_TEST_CASE( test_case3 )
{
  //float i = 1000, j = 0;
  BOOST_TEST(Calcular_Impuestos(1000000.0f) == Sol_Calcular_Impuestos(1000000.0f));
}

BOOST_AUTO_TEST_CASE( test_case4 )
{
  //float i = 1000, j = 200;
  BOOST_TEST(Calcular_Impuestos(-1000000.0f)==Sol_Calcular_Impuestos(-1000000.0f));
}

BOOST_AUTO_TEST_CASE( test_case5 )
{
  //float i = 1000.5f, j = 50.5f;
  // compare strings in printfs
  BOOST_TEST(Calcular_Impuestos(1.0f)==Sol_Calcular_Impuestos(1.0f));
}

BOOST_AUTO_TEST_SUITE_END()