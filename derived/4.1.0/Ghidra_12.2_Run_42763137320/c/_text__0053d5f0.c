/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053d5f0; name: FUN_.text__0053d5f0
 */


undefined8 FUN__text__0053d5f0(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 *__dest;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar4 = (ulong)uVar1 * 0x138;
  if (*param_1 == 0) {
    uVar2 = *(uint *)(param_1 + 1);
    lVar4 = FUN__text__00400f90(9,lVar4,0x10);
    if (lVar4 != 0) {
      lVar3 = *param_1;
      if ((lVar3 != 0) && (lVar3 != lVar4)) {
        if (uVar2 != 0) {
          lVar3 = 0;
          do {
            __dest = (undefined4 *)(lVar4 + lVar3);
            *__dest = 0;
            *(undefined8 *)(__dest + 2) = 0;
            *(undefined8 *)(__dest + 4) = 0;
            __dest[0x4c] = 0;
            *(undefined8 *)(__dest + 0x46) = 0;
            *(undefined8 *)(__dest + 6) = 0;
            *(undefined8 *)(__dest + 8) = 0;
            *(undefined8 *)(__dest + 10) = 0;
            *(undefined8 *)(__dest + 0xc) = 0;
            *(undefined8 *)(__dest + 0xe) = 0;
            *(undefined8 *)(__dest + 0x10) = 0;
            *(undefined8 *)(__dest + 0x12) = 0;
            *(undefined8 *)(__dest + 0x14) = 0;
            *(undefined8 *)(__dest + 0x16) = 0;
            *(undefined8 *)(__dest + 0x18) = 0;
            *(undefined8 *)(__dest + 0x1a) = 0;
            *(undefined8 *)(__dest + 0x1c) = 0;
            *(undefined8 *)(__dest + 0x1e) = 0;
            *(undefined8 *)(__dest + 0x20) = 0;
            *(undefined8 *)(__dest + 0x22) = 0;
            *(undefined8 *)(__dest + 0x24) = 0;
            *(undefined8 *)(__dest + 0x26) = 0;
            *(undefined8 *)(__dest + 0x28) = 0;
            *(undefined8 *)(__dest + 0x2a) = 0;
            *(undefined8 *)(__dest + 0x2c) = 0;
            *(undefined8 *)(__dest + 0x2e) = 0;
            *(undefined8 *)(__dest + 0x30) = 0;
            *(undefined8 *)(__dest + 0x48) = 0;
            *(undefined8 *)(__dest + 0x4a) = 0x3f80000000000000;
            *(undefined8 *)(__dest + 0x32) = 0;
            *(undefined8 *)(__dest + 0x34) = 0;
            *(undefined8 *)(__dest + 0x36) = 0;
            *(undefined8 *)(__dest + 0x38) = 0;
            *(undefined8 *)(__dest + 0x3a) = 0;
            *(undefined8 *)(__dest + 0x3c) = 0;
            *(undefined8 *)(__dest + 0x3e) = 0;
            *(undefined8 *)(__dest + 0x40) = 0;
            *(undefined8 *)(__dest + 0x42) = 0;
            *(undefined8 *)(__dest + 0x44) = 0;
            memcpy(__dest,(void *)(*param_1 + lVar3),0x134);
            lVar3 = lVar3 + 0x138;
          } while ((ulong)uVar2 * 0x138 != lVar3);
          lVar3 = *param_1;
        }
        FUN__text__00400fc0(9,lVar3);
      }
      goto LAB__text__0053d714;
    }
  }
  else {
    lVar4 = FUN__text__00400fb0(9,*param_1,lVar4,0x10);
    if (lVar4 != 0) {
LAB__text__0053d714:
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0;
}


