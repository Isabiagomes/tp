#include "doctest"
#include "Medico.hpp"

// test get and set crm (somente int)
TEST_CASE("Teste get e set crm")
{
	Medico m;
	m.setCRM(123456);
	CHECK(m.getCRM() == 123456);
}

// test get and set especialidade 9somente string)
TEST_CASE("Teste get e set especialidade")
{
	Medico m;
	m.setEspecialidade("Cardiologista");
	CHECK(m.getEspecialidade() == "Cardiologista");
}
