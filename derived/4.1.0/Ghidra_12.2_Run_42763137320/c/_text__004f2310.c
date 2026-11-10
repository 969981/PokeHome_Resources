/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f2310; name: FUN_.text__004f2310
 */


int FUN__text__004f2310(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x2a8))();
  if (iVar1 == 1) {
    if ((int)param_1[0x20] != 0) {
      puVar2 = (undefined8 *)param_1[0x1f];
      do {
        iVar1 = (**(code **)(*(long *)*puVar2 + 0x138))();
        if (iVar1 != 1) {
          for (puVar3 = (undefined8 *)param_1[0x1f]; puVar2 != puVar3; puVar3 = puVar3 + 1) {
            (**(code **)(*(long *)*puVar3 + 0x140))();
          }
          (**(code **)(*param_1 + 0x2b0))(param_1);
          return iVar1;
        }
        puVar2 = puVar2 + 1;
      } while (puVar2 != (undefined8 *)(param_1[0x1f] + (ulong)*(uint *)(param_1 + 0x20) * 8));
    }
    iVar1 = 1;
  }
  return iVar1;
}


