#include "viagem.h"

Viagem::Viagem() : m_id(QUuid::createUuid())
{
}

QUuid Viagem::getId() const { return m_id; }
QString Viagem::getNome() const { return m_nome; }
QString Viagem::getDestino() const { return m_destino; }
QDate Viagem::getData() const { return m_data; }
QString Viagem::getDescricao() const { return m_descricao; }
QStringList Viagem::getCaminhosFotos() const { return m_caminhosFotos; }

void Viagem::setNome(const QString &nome) { m_nome = nome; }
void Viagem::setDestino(const QString &destino) { m_destino = destino; }
void Viagem::setData(const QDate &data) { m_data = data; }
void Viagem::setDescricao(const QString &descricao) { m_descricao = descricao; }
void Viagem::setCaminhosFotos(const QStringList &caminhos) { m_caminhosFotos = caminhos; }
void Viagem::adicionarFoto(const QString &caminho) { m_caminhosFotos.append(caminho); }
