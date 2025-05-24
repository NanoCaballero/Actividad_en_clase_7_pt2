

/*
 * Copyright (C) 2025 Tec de Monterrey
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

 #ifndef SUM_H
 #define SUM_H
 
 #include "OperationBase.h"
 
 class Sum : public OperationBase {
 public:
     Sum(int a, int b) : OperationBase(a, b) {}
     double result() {
         return x + y;
     }
 };
 
 #endif
 