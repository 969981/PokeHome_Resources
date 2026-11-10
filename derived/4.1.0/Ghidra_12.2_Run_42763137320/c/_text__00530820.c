/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00530820; name: FUN_.text__00530820
 */


undefined8 FUN__text__00530820(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 *__dest;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar4 = (ulong)uVar1 * 0x1e8;
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
          *(undefined8 *)(__dest + 0x4e) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x52) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x54) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x56) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x5a) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x5c) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x5e) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x62) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 100) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x66) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x6a) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x6c) = 0xffffffffffffffff;
          *(undefined8 *)(__dest + 0x45) = 0;
          *(undefined8 *)(__dest + 0x47) = 0;
          *(undefined8 *)(__dest + 0x49) = 0;
          *(undefined8 *)(__dest + 0x4b) = 0;
          memcpy(__dest,(void *)(*param_1 + lVar3),0x1e8);
          lVar3 = lVar3 + 0x1e8;
        } while ((ulong)uVar2 * 0x1e8 != lVar3);
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


