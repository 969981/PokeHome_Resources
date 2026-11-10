/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049d8c0; name: FUN_.text__0049d8c0
 */


undefined8 FUN__text__0049d8c0(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  if (*param_1 == 0) {
    uVar2 = *(uint *)(param_1 + 1);
    lVar3 = FUN__text__00400f80(0,(ulong)uVar1 * 0x28);
    if (lVar3 != 0) {
      lVar4 = *param_1;
      if ((lVar4 != 0) && (lVar4 != lVar3)) {
        if (uVar2 != 0) {
          lVar4 = 0;
          do {
            FUN__text__0049d9b0(lVar3 + lVar4);
            FUN__text__0049da70(lVar3 + lVar4,*param_1 + lVar4);
            FUN__text__0049d9d0(*param_1 + lVar4);
            lVar4 = lVar4 + 0x28;
          } while ((ulong)uVar2 * 0x28 != lVar4);
          lVar4 = *param_1;
        }
        FUN__text__00400fc0(0,lVar4);
      }
      goto LAB__text__0049d990;
    }
  }
  else {
    lVar3 = FUN__text__00400fa0(0);
    if (lVar3 != 0) {
LAB__text__0049d990:
      *param_1 = lVar3;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0;
}


