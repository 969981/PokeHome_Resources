/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004518a0; name: FUN_.text__004518a0
 */


bool FUN__text__004518a0(long param_1,long param_2,uint *param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  lVar1 = FUN__text__0044a594(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
  uVar3 = *(uint *)(lVar1 + 0x18);
  if (param_2 == 0) {
    *param_3 = uVar3;
    return true;
  }
  if (*param_3 <= uVar3) {
    uVar3 = *param_3;
  }
  *param_3 = uVar3;
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = 0;
    do {
      lVar4 = uVar2 * 8;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(param_2 + lVar4) = *(undefined8 *)(*(long *)(lVar1 + 0x10) + lVar4);
      uVar3 = *param_3;
    } while (uVar2 < uVar3);
  }
  return uVar3 == *(uint *)(lVar1 + 0x18);
}


