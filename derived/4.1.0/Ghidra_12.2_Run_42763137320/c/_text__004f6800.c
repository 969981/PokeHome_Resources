/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6800; name: FUN_.text__004f6800
 */


void FUN__text__004f6800(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)(param_1 + 0x118) - 1;
  uVar3 = *(uint *)(param_1 + 0x100);
  if (uVar2 == uVar3) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  else {
    if (*(long *)(param_1 + (ulong)uVar2 * 8) == *param_2) {
      return;
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    if ((int)uVar2 <= (int)(uVar3 - 1)) {
      do {
        iVar1 = uVar3 - 2;
        uVar3 = uVar3 - 1;
      } while ((int)uVar2 <= iVar1);
      *(uint *)(param_1 + 0x100) = uVar3;
    }
    uVar2 = uVar3;
  }
  *(long *)(param_1 + (ulong)uVar2 * 8) = *param_2;
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  return;
}


