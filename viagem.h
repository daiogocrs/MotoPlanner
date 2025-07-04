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

    // Setters
    void setNome(const QString &nome);
    void setDestino(const QString &destino);
    void setData(const QDate &data);
    void setDescricao(const QString &descricao);
    void setCaminhosFotos(const QStringList &caminhos);
    void adicionarFoto(const QString &caminho);

private:
    QUuid m_id;
    QString m_nome;
    QString m_destino;
    QDate m_data;
    QString m_descricao;
    QStringList m_caminhosFotos;
};

#endif // VIAGEM_H
