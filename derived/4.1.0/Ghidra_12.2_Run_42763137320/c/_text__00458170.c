/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458170; name: FUN_.text__00458170
 */


undefined8 FUN__text__00458170(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar6;
  undefined8 *puVar5;
  uint uVar7;
  
  uVar7 = *(uint *)(param_2 + 1);
  if (*(uint *)((long)param_1 + 0xc) < uVar7) {
    if (*param_1 == 0) {
      uVar1 = *(uint *)(param_1 + 1);
      lVar2 = FUN__text__00400f80(0,(ulong)uVar7 << 3);
      if (lVar2 == 0) {
        return 0x34;
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
      lVar2 = FUN__text__00400fa0(0);
      if (lVar2 == 0) {
        return 0x34;
      }
    }
    *param_1 = lVar2;
    *(uint *)((long)param_1 + 0xc) = uVar7;
    uVar7 = *(uint *)(param_2 + 1);
  }
  if (uVar7 != 0) {
    puVar5 = (undefined8 *)*param_2;
    do {
      puVar6 = puVar5 + 1;
      FUN__text__004582c0(param_1,*puVar5);
      puVar5 = puVar6;
    } while (puVar6 != (undefined8 *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8));
  }
  return 1;
}


