/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041a790; name: FUN_.text__0041a790
 */


undefined8 FUN__text__0041a790(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  uVar6 = *(uint *)((long)param_1 + 0xc);
  iVar1 = uVar6 + (uVar6 >> 1);
  if (uVar6 == 0) {
    iVar1 = 1;
  }
  if (*param_1 == 0) {
    uVar7 = *(uint *)(param_1 + 1);
    lVar8 = FUN__text__00400f80(5,(ulong)(iVar1 + uVar6) * 0x18);
    if (lVar8 != 0) {
      lVar9 = *param_1;
      if ((lVar9 != 0) && (lVar9 != lVar8)) {
        if (uVar7 != 0) {
          lVar9 = 0;
          do {
            puVar2 = (undefined8 *)(lVar8 + lVar9);
            *(undefined4 *)(puVar2 + 2) = 0xff7fffff;
            puVar3 = (undefined8 *)(*param_1 + lVar9);
            lVar9 = lVar9 + 0x18;
            uVar4 = *puVar3;
            uVar5 = puVar3[1];
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
            *puVar2 = uVar4;
            puVar2[1] = uVar5;
          } while ((ulong)uVar7 * 0x18 != lVar9);
          lVar9 = *param_1;
        }
        FUN__text__00400fc0(5,lVar9);
      }
      goto LAB__text__0041a85c;
    }
  }
  else {
    lVar8 = FUN__text__00400fa0(5);
    if (lVar8 != 0) {
LAB__text__0041a85c:
      *param_1 = lVar8;
      *(uint *)((long)param_1 + 0xc) = iVar1 + uVar6;
      return 1;
    }
  }
  return 0;
}


