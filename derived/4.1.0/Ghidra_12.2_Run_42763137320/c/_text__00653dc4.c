/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00653dc4; name: FUN_.text__00653dc4
 */


undefined8 FUN__text__00653dc4(long *param_1,uint param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 1;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && (param_5 != 0)) {
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    param_1[5] = 0;
    *(uint *)(param_1 + 4) = param_2;
    lVar2 = FUN__text__006783d4(-(ulong)(param_2 >> 0x1f) & 0xffffffe000000000 | (ulong)param_2 << 5
                               );
    *param_1 = lVar2;
    if (lVar2 == 0) {
      uVar1 = 1;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      if (0 < (int)param_2) {
        lVar2 = 0;
        do {
          FUN__text__00656b14(*param_1 + lVar2,FUN__text__00653e64);
          lVar2 = lVar2 + 0x20;
        } while ((ulong)param_2 * 0x20 != lVar2);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}


