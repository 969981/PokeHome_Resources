/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e9e48; name: FUN_.text__004e9e48
 */


void FUN__text__004e9e48(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78);
    iVar1 = FUN__text__004f4810(uVar3);
    if ((param_2 & 1) != 0) {
      iVar2 = FUN__text__004f47f4(uVar3);
      iVar1 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x34) = iVar1;
  }
  return;
}


