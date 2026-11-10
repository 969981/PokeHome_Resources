/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047b910; name: FUN_.text__0047b910
 */


undefined8 FUN__text__0047b910(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = 0xff;
  if (param_2 != 0) {
    uVar1 = param_2;
  }
  *(uint *)(param_1 + 2) = uVar1;
  if (uVar1 <= *(uint *)((long)param_1 + 0xc)) {
    return 1;
  }
  if (*(uint *)((long)param_1 + 0xc) != 0) {
    return 0x1f;
  }
  if (*param_1 == 0) {
    uVar2 = *(uint *)(param_1 + 1);
    lVar3 = FUN__text__00400f80(0,(ulong)uVar1 << 3);
    if (lVar3 != 0) {
      lVar4 = *param_1;
      if ((lVar4 != 0) && (lVar4 != lVar3)) {
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            do {
              lVar4 = uVar5 * 8;
              uVar5 = uVar5 + 2;
              *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(*param_1 + lVar4);
              ((undefined8 *)(lVar3 + lVar4))[1] = *(undefined8 *)(*param_1 + lVar4 + 8);
            } while (((ulong)uVar2 & 0xfffffffe) != uVar5);
          }
          if ((uVar2 & 1) != 0) {
            *(undefined8 *)(lVar3 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
          }
          lVar4 = *param_1;
        }
        FUN__text__00400fc0(0,lVar4);
      }
      goto LAB__text__0047ba34;
    }
  }
  else {
    lVar3 = FUN__text__00400fa0(0);
    if (lVar3 != 0) {
LAB__text__0047ba34:
      *param_1 = lVar3;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0x34;
}


