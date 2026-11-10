/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004053a0; name: FUN_.text__004053a0
 */


void FUN__text__004053a0(undefined4 param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  if ((param_3 == 0) || (*(long *)(param_3 + 0x10) == 0)) {
    uVar4 = param_4 >> 1;
    if (param_4 < 3) {
      uVar4 = 0;
    }
    uVar4 = uVar4 + param_4;
    if (0x1f < uVar4) {
      uVar4 = 0x20;
    }
    plVar6 = (long *)(param_2 + param_4 * 0x108 + 0xb18);
    uVar5 = param_4;
    while( true ) {
      plVar1 = (long *)(param_2 + 0xbd8);
      if (uVar5 != 1) {
        plVar1 = plVar6;
      }
      lVar2 = *plVar1;
      if ((((lVar2 != 0) && (*plVar1 = lVar2 + -1, plVar1[lVar2] != 0)) ||
          (lVar2 = FUN__text__00405640(param_1,param_2,uVar5), lVar2 != 0)) ||
         ((uVar5 <= *(uint *)(param_2 + 0xd00) &&
          (lVar2 = FUN__text__004048c0(param_1,param_2,uVar5), lVar2 != 0)))) break;
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 0x21;
      if (uVar4 < uVar5) {
        FUN__text__004048c0(param_1,param_2,param_4);
        return;
      }
    }
  }
  else {
    uVar3 = 0;
    if (*(long *)(param_2 + 0xbd8) != 0) {
      lVar2 = *(long *)(param_2 + 0xbd8) + -1;
      *(long *)(param_2 + 0xbd8) = lVar2;
      uVar3 = *(undefined8 *)(param_2 + lVar2 * 8 + 0xbe0);
    }
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  return;
}


