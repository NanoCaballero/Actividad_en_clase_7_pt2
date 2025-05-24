
/*
 * Copyright (C) 2025 Tec de Monterrey
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

 #ifndef OPERATION_BASE_H
 #define OPERATION_BASE_H
 
 class OperationBase {
 protected:
     int x, y;
 
 public:
     OperationBase(int a, int b) : x(a), y(b) {}
     virtual ~OperationBase() {}
 };
 
 #endif
