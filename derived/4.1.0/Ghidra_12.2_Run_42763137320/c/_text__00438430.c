/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00438430; name: FUN_.text__00438430
 */


undefined8 FUN__text__00438430(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar4 = *(uint *)((long)param_1 + 0xc);
  iVar1 = uVar4 + (uVar4 >> 1);
  if (uVar4 == 0) {
    iVar1 = 1;
  }
  if (*param_1 == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    lVar6 = FUN__text__00400f80(0,(ulong)(iVar1 + uVar4) << 4);
    if (lVar6 != 0) {
      lVar7 = *param_1;
      if ((lVar7 != 0) && (lVar7 != lVar6)) {
        if (uVar5 != 0) {
          lVar7 = 0;
          do {
            puVar2 = (undefined8 *)(lVar6 + lVar7);
            *puVar2 = 0;
            *(undefined1 *)(puVar2 + 1) = 0;
            puVar3 = (undefined8 *)(*param_1 + lVar7);
            lVar7 = lVar7 + 0x10;
            uVar8 = *puVar3;
            *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
            *puVar2 = uVar8;
          } while ((ulong)uVar5 * 0x10 != lVar7);
          lVar7 = *param_1;
        }
        FUN__text__00400fc0(0,lVar7);
      }
      goto LAB__text__004384fc;
    }
  }
  else {
    lVar6 = FUN__text__00400fa0(0);
    if (lVar6 != 0) {
LAB__text__004384fc:
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = iVar1 + uVar4;
      return 1;
    }
  }
  return 0;
}


