# A. White-Cell
**Junior Phase 1 - Qualification Contest** : [`vjudge`](https://vjudge.net/contest/645573#problem/A)

## Problem Statement:
There are `H` rows and `W` columns of white square cells.
You will choose `h` of the rows and `w` of the columns, and paint all of the cells contained in those rows or columns.
How many white cells will remain?

It can be proved that this count does not depend on what rows and columns are chosen.

### Constraints
All values in input are integers.
<p><i>1≤H,W≤20</i></p>
<p><i>1≤h≤H</i></p>
<p><i>1≤w≤W</i></p>

** **
### Input
Input is given from Standard Input in the following format:

`H`

`W`

`h` 

`w`

---
### Output
Print the number of white cells that will remain.

<table><tr width="200"><th width = "400"><b>Sample 1</b></th></tr></table>
<table>
  <tr width="200">
    <th width="200"> Input </th>
    <th width="200"> Output </th>
  </tr>
  <tr width="200">
    <td align="center" width="200"> 3 2</td>
    <td align="center" width="200"> 1 </td>
  </tr>
  <tr width="200">
    <td align="center" width="200"> 2  1 </td>
    <td align="center" width="200"> </td>
  </tr>
</table>
 
_There are 3 rows and 2 columns of cells. When two rows and one column are chosen and painted in black, there is always one white cell that remains._

<table><tr width="200"><th width = "400"><b>Sample 2</b></th></tr></table>
<table>
  <tr width="200">
    <th width="200"> Input </th>
    <th width="200"> Output </th>
  </tr>
  <tr width="200">
    <td align="center" width="200"> 5  5 </td>
    <td align="center" width="200"> 6 </td>
  </tr>
  <tr width="200">
    <td align="center" width="200"> 2  3 </td>
    <td align="center" width="200"> </td>
  </tr>
</table>
<table></table>
<table><tr width="200"><th width = "400"><b>Sample 3</b></th></tr></table>
<table>
  <tr>
    <th width="200"> Input </th>
    <th width="200"> Output </th>
  </tr>
  <tr>
    <td align="center" width="200"> 2 4 </td>
    <td align="center" width="200"> 0 </td>
  </tr>
  <tr>
    <td align="center" width="200"> 2  4 </td>
    <td align="center" width="200"> </td>
  </tr>
</table>
