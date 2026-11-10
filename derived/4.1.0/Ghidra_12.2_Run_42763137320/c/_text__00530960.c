/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00530960; name: FUN_.text__00530960
 */


undefined8 FUN__text__00530960(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 *__dest;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar4 = (ulong)uVar1 * 0x118;
  if (*param_1 == 0) {
    uVar2 = *(uint *)(param_1 + 1);
    lVar4 = FUN__text__00400f90(9,lVar4,0x10);
    if (lVar4 == 0) {
      return 0;
    }
    lVar3 = *param_1;
    if ((lVar3 != 0) && (lVar3 != lVar4)) {
      if (uVar2 != 0) {
        lVar3 = 0;
        do {
          __dest = (undefined4 *)(lVar4 + lVar3);
          *__dest = 0;
          memset(__dest + 2,0,0x108);
          __dest[0x44] = 0x42c80000;
          memcpy(__dest,(void *)(*param_1 + lVar3),0x114);
          lVar3 = lVar3 + 0x118;
        } while ((ulong)uVar2 * 0x118 != lVar3);
        lVar3 = *param_1;
      }
      FUN__text__00400fc0(9,lVar3);
    }
  }
  else {
    lVar4 = FUN__text__00400fb0(9,*param_1,lVar4,0x10);
    if (lVar4 == 0) {
      return 0;
    }
  }
  *param_1 = lVar4;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  return 1;
}


