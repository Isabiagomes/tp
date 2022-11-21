#include "doctest"
#include "Pessoa.hpp"

// test get and set nome
TEST_CASE("Teste get e set nome")
{
	Pessoa p;
	p.setNome("Joao");
	CHECK(p.getNome() == "Joao");
}

// test get and set sexo
TEST_CASE("Teste get e set sexo")
{
	Pessoa p;
	p.setSexo('M');
	CHECK(p.getSexo() == 'M');

	CHECK_THROWS(p.setSexo('X'));
}

// test get and set endereco
TEST_CASE("Teste get e set endereco")
{
	Pessoa p;
	p.setEndereco("Rua 1");
	CHECK(p.getEndereco() == "Rua 1");
}

// test get and set cpf
TEST_CASE("Teste get e set cpf")
{
	Pessoa p;
	p.setCpf("45022286050");
	CHECK(p.getCpf() == "45022286050");

	CHECK_THROWS(p.setCpf("12345678910"));
	CHECK(p.getCpf() == "45022286050");
}

// test get and set telefone
TEST_CASE("Teste get e set telefone")
{
	Pessoa p;
	p.setTelefone("123456789");
	CHECK(p.getTelefone() == "123456789");
}

// test get and set identidade
TEST_CASE("Teste get e set identidade")
{
	Pessoa p;
	p.setIdentidade("123456789");
	CHECK(p.getIdentidade() == "123456789");
}