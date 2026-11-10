/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048cb80; name: FUN_.text__0048cb80
 */


undefined8 FUN__text__0048cb80(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(undefined4 *)(param_1 + 2) = 0;
  if ((uVar1 <= param_2) && (*(uint *)((long)param_1 + 0xc) < param_2)) {
    if (*param_1 == 0) {
      lVar2 = FUN__text__00400f80(0,(ulong)param_2 << 3);
      if (lVar2 == 0) {
        return 0;
      }
      lVar3 = *param_1;
      if ((lVar3 != 0) && (lVar3 != lVar2)) {
        if (uVar1 != 0) {
          if (uVar1 == 1) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            do {
              lVar3 = uVar4 * 8;
              uVar4 = uVar4 + 2;
              *(undefined8 *)(lVar2 + lVar3) = *(undefined8 *)(*param_1 + lVar3);
              ((undefined8 *)(lVar2 + lVar3))[1] = *(undefined8 *)(*param_1 + lVar3 + 8);
            } while (((ulong)uVar1 & 0xfffffffe) != uVar4);
          }
          if ((uVar1 & 1) != 0) {
            *(undefined8 *)(lVar2 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
          }
          lVar3 = *param_1;
        }
        FUN__text__00400fc0(0,lVar3);
      }
    }
    else {
      lVar2 = FUN__text__00400fa0();
      if (lVar2 == 0) {
        return 0;
      }
    }
    *param_1 = lVar2;
    *(uint *)((long)param_1 + 0xc) = param_2;
  }
  *(uint *)(param_1 + 1) = param_2;
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 1));
  }
  return 1;
}


