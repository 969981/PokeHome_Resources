/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00498740; name: FUN_.text__00498740
 */


void FUN__text__00498740(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    lVar4 = *(long *)(param_1 + 0x30);
    do {
      lVar3 = *(long *)(lVar4 + 8);
      if ((*(long *)(lVar3 + 8) != 0) &&
         (iVar1 = FUN__text__004961d0(*(long *)(lVar3 + 8),param_1), iVar1 != 0)) {
        uVar2 = *(undefined8 *)(lVar3 + 8);
        *(undefined8 *)(lVar3 + 8) = 0;
        FUN__text__0049a1f0(*(undefined8 *)(param_1 + 0x40),param_1,lVar3,uVar2);
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != *(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 0x10);
  }
  *(long *)(param_1 + 0x40) = param_2;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    lVar4 = *(long *)(param_1 + 0x30);
    do {
      FUN__text__00498810(*(undefined8 *)(lVar4 + 8),param_1);
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != *(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 0x10);
  }
  return;
}


