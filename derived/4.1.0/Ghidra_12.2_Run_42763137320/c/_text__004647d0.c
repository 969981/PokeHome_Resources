/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004647d0; name: FUN_.text__004647d0
 */


bool FUN__text__004647d0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  
  piVar3 = (int *)*param_2;
  uVar2 = *(uint *)(param_2 + 1);
  piVar1 = piVar3 + (ulong)uVar2 * 2;
  if (uVar2 != 0) {
    lVar4 = (ulong)uVar2 << 3;
    do {
      if (*(int *)(param_1 + 0x20) == *piVar3 &&
          (*(uint *)(param_1 + 0xd2) >> 0x11 & 1) == (uint)*(byte *)(piVar3 + 1))
      goto LAB__text__00464814;
      piVar3 = piVar3 + 2;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
    piVar3 = piVar1;
  }
LAB__text__00464814:
  return piVar3 != piVar1 && piVar3 != (int *)0x0;
}


