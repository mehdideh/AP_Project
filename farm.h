#ifndef FARM_H
#define FARM_H

#include <QDialog>
#include <player.h>

namespace Ui { class Farm; }

class Farm : public QDialog
{
    Q_OBJECT

public:
    Farm();
    void set_planting(int area_croping);
    ~Farm();
    virtual void levelup(Player& current_player)= 0;
    void set_area(int _area);

private:
    Ui::Farm *ui;

protected:
    int area;
    int planting_area;
};

#endif // FARM_H
