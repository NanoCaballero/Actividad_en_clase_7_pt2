
/*
 * Copyright (C) 2025 Tec de Monterrey
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

 #ifndef DIV_H
 #define DIV_H
 
 #include "OperationBase.h"
 
 class Div : public OperationBase {
 public:
     Div(int a, int b) : OperationBase(a, b) {}
     double result() {
         return (y != 0) ? static_cast<double>(x) / y : 0;
     }
 };
 
 #endif
 