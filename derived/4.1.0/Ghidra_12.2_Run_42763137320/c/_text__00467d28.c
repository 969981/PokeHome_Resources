/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00467d28; name: FUN_.text__00467d28
 */


void FUN__text__00467d28(long *param_1,uint param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (param_1[0x16] == 0) {
    uVar3 = 0;
    bVar1 = false;
    lVar2 = FUN__text__004ceab0(param_1 + 0x17,param_3,param_1);
  }
  else {
    lVar2 = param_1[0x16] + (ulong)param_2 * 8;
    uVar3 = *(undefined4 *)(lVar2 + 4);
    bVar1 = *(char *)(lVar2 + 9) != '\0';
    lVar2 = FUN__text__004ceab0(param_1 + 0x17,param_3,param_1);
  }
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + (ulong)param_2 * 8 + 0x28) != '\0') {
      return;
    }
    lVar2 = lVar2 + (ulong)param_2 * 8;
    *(undefined4 *)(lVar2 + 0x24) = uVar3;
    *(bool *)(lVar2 + 0x29) = bVar1;
  }
  if (param_3 == 0) {
    FUN__text__004cf770(param_1 + 0x17,param_2,uVar3,bVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00467da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3);
  return;
}


