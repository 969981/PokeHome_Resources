/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042cca0; name: FUN_.text__0042cca0
 */


undefined8 FUN__text__0042cca0(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = *(uint *)((long)param_1 + 0xc);
  iVar2 = uVar4 + (uVar4 >> 1);
  if (uVar4 == 0) {
    iVar2 = 1;
  }
  if (*param_1 == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    lVar6 = FUN__text__00400f80(0,(ulong)(iVar2 + uVar4) << 3);
    if (lVar6 != 0) {
      lVar7 = *param_1;
      if ((lVar7 != 0) && (lVar7 != lVar6)) {
        if (uVar5 != 0) {
          lVar7 = 0;
          do {
            puVar3 = (undefined8 *)(lVar6 + lVar7);
            *(undefined2 *)puVar3 = 0;
            *(undefined1 *)((long)puVar3 + 2) = 0;
            *(undefined4 *)((long)puVar3 + 4) = 0;
            puVar1 = (undefined8 *)(*param_1 + lVar7);
            lVar7 = lVar7 + 8;
            *puVar3 = *puVar1;
          } while ((ulong)uVar5 * 8 != lVar7);
          lVar7 = *param_1;
        }
        FUN__text__00400fc0(0,lVar7);
      }
      goto LAB__text__0042cd64;
    }
  }
  else {
    lVar6 = FUN__text__00400fa0(0);
    if (lVar6 != 0) {
LAB__text__0042cd64:
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = iVar2 + uVar4;
      return 1;
    }
  }
  return 0;
}


