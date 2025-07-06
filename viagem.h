#ifndef VIAGEM_H
#define VIAGEM_H

#include <QString>
#include <QDate>
#include <QStringList>
#include <QUuid>

class Viagem
{
public:
    Viagem();

    // Getters
    QUuid getId() const;
    QString getNome() const;
    QString getDestino() const;
    QDate getData() const;
    QString getDescricao() const;
    QStringList getCaminhosFotos() const;
    QStringList getParticipantes() const;
    bool isFinalizada() const;

    // Setters
    void setId(const QUuid &id); // Corrigido
    void setNome(const QString &nome);
    void setDestino(const QString &destino);
    void setData(const QDate &data);
    void setDescricao(const QString &descricao);
    void setCaminhosFotos(const QStringList &caminhos);
    void adicionarFoto(const QString &caminho);
    void setParticipantes(const QStringList &participantes);
    void adicionarParticipante(const QString &participante);
    void setFinalizada(bool finalizada);

private:
    QUuid m_id;
    QString m_nome;
    QString m_destino;
    QDate m_data;
    QString m_descricao;
    QStringList m_caminhosFotos;
    QStringList m_participantes;
    bool m_finalizada;
};

#endif
