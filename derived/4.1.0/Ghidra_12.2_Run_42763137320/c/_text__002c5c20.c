/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c5c20; name: FUN_.text__002c5c20
 */


undefined2 FUN__text__002c5c20(long param_1,uint param_2,short param_3)

{
  ushort uVar1;
  undefined2 *puVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x120) != '\0') {
    uVar1 = *(ushort *)(param_1 + (ulong)param_2 * 2 + 0x130);
    if ((uVar1 != 0) && (uVar1 < *(ushort *)(param_1 + 0x122))) {
      lVar3 = (ulong)*(ushort *)(param_1 + 0x122) - (ulong)uVar1;
      puVar2 = (undefined2 *)(*(long *)(param_1 + 0x128) + (ulong)uVar1 * 6 + 4);
      do {
        if ((ushort)puVar2[-2] != param_2) {
          return 0;
        }
        if (puVar2[-1] == param_3) {
          return *puVar2;
        }
        puVar2 = puVar2 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return 0;
}


