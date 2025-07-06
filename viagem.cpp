#include "viagem.h"

Viagem::Viagem() : m_id(QUuid::createUuid()), m_finalizada(false)
{
}

QUuid Viagem::getId() const { return m_id; }
QString Viagem::getNome() const { return m_nome; }
QString Viagem::getDestino() const { return m_destino; }
QDate Viagem::getData() const { return m_data; }
QString Viagem::getDescricao() const { return m_descricao; }
QStringList Viagem::getCaminhosFotos() const { return m_caminhosFotos; }
QStringList Viagem::getParticipantes() const { return m_participantes; }
bool Viagem::isFinalizada() const { return m_finalizada; }

void Viagem::setId(const QUuid &id) { m_id = id; } // Corrigido
void Viagem::setNome(const QString &nome) { m_nome = nome; }
void Viagem::setDestino(const QString &destino) { m_destino = destino; }
void Viagem::setData(const QDate &data) { m_data = data; }
void Viagem::setDescricao(const QString &descricao) { m_descricao = descricao; }
void Viagem::setCaminhosFotos(const QStringList &caminhos) { m_caminhosFotos = caminhos; }
void Viagem::adicionarFoto(const QString &caminho) { m_caminhosFotos.append(caminho); }
void Viagem::setParticipantes(const QStringList &participantes) { m_participantes = participantes; }
void Viagem::adicionarParticipante(const QString &participante) { m_participantes.append(participante); }
void Viagem::setFinalizada(bool finalizada) { m_finalizada = finalizada; }
