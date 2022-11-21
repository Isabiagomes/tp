#include "doctest"
#include "Paciente.hpp"

// test get and set relato
TEST_CASE("Teste get e set relato")
{
	Paciente p;
	p.setRelato("Dor de cabeça");
	CHECK(p.getRelato() == "Dor de cabeça");
}

// test get and set DUC
TEST_CASE("Teste get e set DUC")
{
	Paciente p;
	p.setDUC("01/01/2020");
	CHECK(p.getDUC() == "01/01/2020");

	CHECK_THROWS(p.setDUC("01/01/20"));
	CHECK_THROWS(p.setDUC("01/01/20200"));
}

// test get and set mqt
TEST_CASE("Teste get e set mqt")
{
	Paciente p;
	p.setMQT("Dipirona");
	CHECK(p.getMQT() == "Dipirona");
}