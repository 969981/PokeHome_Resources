/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00144ac0; name: FUN_.text__00144ac0
 */


uint FUN__text__00144ac0(long *param_1,short param_2,short param_3,ulong param_4)

{
  long lVar1;
  uint *puVar2;
  
  lVar1 = param_1[1];
  if (0 < lVar1) {
    puVar2 = (uint *)(*param_1 + 4);
    do {
      if (((short)puVar2[-1] == param_2) && (*(short *)((long)puVar2 + -2) == param_3)) {
        return *puVar2 >> (param_4 & 0x3f) & 1;
      }
      puVar2 = puVar2 + 2;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return 0;
}


