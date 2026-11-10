/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00451a80; name: FUN_.text__00451a80
 */


undefined8 FUN__text__00451a80(long *param_1,int param_2)

{
  uint uVar1;
  void *__dest;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  if (*param_1 == 0) {
    uVar2 = *(uint *)(param_1 + 1);
    lVar3 = FUN__text__00400f80(0,(ulong)uVar1 * 0x88);
    if (lVar3 == 0) {
      return 0;
    }
    lVar4 = *param_1;
    if ((lVar4 != 0) && (lVar4 != lVar3)) {
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          __dest = (void *)(lVar3 + lVar4);
          *(undefined8 *)((long)__dest + 0x50) = 0;
          *(undefined8 *)((long)__dest + 0x30) = 0;
          *(undefined8 *)((long)__dest + 0x38) = 0x3f80000000000000;
          *(undefined4 *)((long)__dest + 0x58) = 0;
          *(undefined8 *)((long)__dest + 0x5c) = 0x3f80000042c80000;
          *(undefined8 *)((long)__dest + 100) = 0xffffffff;
          *(undefined4 *)((long)__dest + 0x80) = 0;
          *(undefined8 *)((long)__dest + 0x40) = 0x3f8000003f800000;
          *(undefined8 *)((long)__dest + 0x48) = 0;
          *(undefined8 *)((long)__dest + 0x70) = 0;
          *(undefined8 *)((long)__dest + 0x78) = 0x3f800000;
          memcpy(__dest,(void *)(*param_1 + lVar4),0x84);
          lVar4 = lVar4 + 0x88;
        } while ((ulong)uVar2 * 0x88 != lVar4);
        lVar4 = *param_1;
      }
      FUN__text__00400fc0(0,lVar4);
    }
  }
  else {
    lVar3 = FUN__text__00400fa0(0);
    if (lVar3 == 0) {
      return 0;
    }
  }
  *param_1 = lVar3;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  return 1;
}


