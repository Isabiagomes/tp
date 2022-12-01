#include "doctest"
#include "Consulta.hpp"

// test get and set data structures (formato dd/mm/yyyy)
TEST_CASE("Teste get e set data")
{
	Consulta c;
	c.setData("01/01/2020");
	CHECK(c.getData() == "01/01/2020");

	CHECK_THROWS(c.setData("01/01/20"));
	CHECK_THROWS(c.setData("01/01/20200"));
}

// test get and set hora (formato 00:00)
TEST_CASE("Teste get e set hora")
{
	Consulta c;
	c.setHora("12:00");
	CHECK(c.getHora() == "12:00");

	CHECK_THROWS(c.setHora("12:00:00"));
	CHECK_THROWS(c.setHora("12:0"));
}

// test get and set paciente (somente string)
TEST_CASE("Teste get e set paciente")
{
	Consulta c;
	Paciente p;
	p.setNome("João");
	CHECK_NOTHROW(c.setPaciente(p));
	CHECK(c.getPaciente().getNome() == "João");
}

// test get and set medico (somente string)
TEST_CASE("Teste get e set medico")
{
	Consulta c;
	Medico m;
	m.setNome("João");
	CHECK_NOTHROW(c.setMedico(m));
	CHECK(c.getMedico().getNome() == "João");
}
