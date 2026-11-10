/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00522bc0; name: FUN_.text__00522bc0
 */


undefined8 FUN__text__00522bc0(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar3 = *(uint *)((long)param_1 + 0xc);
  iVar1 = uVar3 + (uVar3 >> 1);
  if (uVar3 == 0) {
    iVar1 = 1;
  }
  if (*param_1 == 0) {
    uVar4 = *(uint *)(param_1 + 1);
    lVar5 = FUN__text__00400f80(9,(ulong)(iVar1 + uVar3) << 3);
    if (lVar5 != 0) {
      lVar6 = *param_1;
      if ((lVar6 != 0) && (lVar6 != lVar5)) {
        if (uVar4 != 0) {
          if (uVar4 == 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            do {
              lVar6 = uVar7 * 8;
              uVar7 = uVar7 + 2;
              puVar2 = (undefined8 *)(lVar5 + lVar6);
              *puVar2 = 0xffffffffffffffff;
              *puVar2 = *(undefined8 *)(*param_1 + lVar6);
              puVar2[1] = 0xffffffffffffffff;
              puVar2[1] = *(undefined8 *)(*param_1 + lVar6 + 8);
            } while (((ulong)uVar4 & 0xfffffffe) != uVar7);
          }
          if ((uVar4 & 1) != 0) {
            lVar6 = uVar7 * 8;
            *(undefined8 *)(lVar5 + lVar6) = 0xffffffffffffffff;
            *(undefined8 *)(lVar5 + lVar6) = *(undefined8 *)(*param_1 + lVar6);
          }
          lVar6 = *param_1;
        }
        FUN__text__00400fc0(9,lVar6);
      }
      goto LAB__text__00522cbc;
    }
  }
  else {
    lVar5 = FUN__text__00400fa0(9);
    if (lVar5 != 0) {
LAB__text__00522cbc:
      *param_1 = lVar5;
      *(uint *)((long)param_1 + 0xc) = iVar1 + uVar3;
      return 1;
    }
  }
  return 0;
}


