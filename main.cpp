
/*
 * Copyright (C) 2025 Tec de Monterrey
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <iostream>
#include "sum.h"
#include "sub.h"
#include "mult.h"
#include "div.h"

int main() {
    Sum sum(10, 5);
    std::cout << "Sum: " << sum.result() << std::endl;

    Sub sub(10, 5);
    std::cout << "Sub: " << sub.result() << std::endl;

    Mult mult(10, 5);
    std::cout << "Mult: " << mult.result() << std::endl;

    Div div(10, 5);
    std::cout << "Div: " << div.result() << std::endl;

    return 0;
}
