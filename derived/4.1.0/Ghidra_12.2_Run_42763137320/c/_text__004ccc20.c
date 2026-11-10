/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ccc20; name: FUN_.text__004ccc20
 */


undefined4 FUN__text__004ccc20(int *param_1,int param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  if (*param_1 == 1) {
    uVar1 = (ulong)*(ushort *)(*(long *)(param_1 + 2) + 6);
    if (uVar1 != 0) {
      puVar2 = (undefined4 *)(*(long *)(param_1 + 2) + 4);
      do {
        if (puVar2[-1] == param_2) {
          return *puVar2;
        }
        puVar2 = puVar2 + 3;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return 0;
}


