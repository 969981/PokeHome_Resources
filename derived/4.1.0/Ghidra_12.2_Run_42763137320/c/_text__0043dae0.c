/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043dae0; name: FUN_.text__0043dae0
 */


undefined8 FUN__text__0043dae0(long *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  
  uVar4 = *(uint *)((long)param_1 + 0xc);
  iVar1 = uVar4 + (uVar4 >> 1);
  if (uVar4 == 0) {
    iVar1 = 1;
  }
  if (*param_1 == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    lVar7 = FUN__text__00400f80(0,(ulong)(iVar1 + uVar4) << 3);
    if (lVar7 != 0) {
      lVar8 = *param_1;
      if ((lVar8 != 0) && (lVar8 != lVar7)) {
        if (uVar5 != 0) {
          lVar8 = 0;
          do {
            puVar2 = (undefined4 *)(lVar7 + lVar8);
            *puVar2 = 0;
            *(undefined1 *)(puVar2 + 1) = 8;
            puVar3 = (undefined4 *)(*param_1 + lVar8);
            lVar8 = lVar8 + 8;
            uVar6 = *puVar3;
            *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
            *puVar2 = uVar6;
          } while ((ulong)uVar5 * 8 != lVar8);
          lVar8 = *param_1;
        }
        FUN__text__00400fc0(0,lVar8);
      }
      goto LAB__text__0043dbac;
    }
  }
  else {
    lVar7 = FUN__text__00400fa0(0);
    if (lVar7 != 0) {
LAB__text__0043dbac:
      *param_1 = lVar7;
      *(uint *)((long)param_1 + 0xc) = iVar1 + uVar4;
      return 1;
    }
  }
  return 0;
}


