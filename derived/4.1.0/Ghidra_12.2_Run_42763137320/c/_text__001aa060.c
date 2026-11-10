/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001aa060; name: FUN_.text__001aa060
 */


uint FUN__text__001aa060(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 local_5c;
  undefined8 local_5b;
  undefined7 local_53;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined4 local_39;
  
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar9 = *(undefined8 *)(lVar8 + 0x10);
  lVar3 = FUN__text__00195844(uVar9,*(undefined4 *)(param_1 + 0x24));
  lVar4 = FUN__text__00195844(uVar9,*(undefined4 *)(param_1 + 0x38));
  if (*(int *)(lVar3 + 0xc) == 1) {
    if (*(int *)(lVar4 + 0xc) == 1) {
      return 0;
    }
    puVar6 = (undefined1 *)(param_1 + 0x20);
    lVar7 = 0x21;
    lVar5 = lVar4;
    lVar4 = lVar3;
  }
  else {
    if (*(int *)(lVar4 + 0xc) != 1) {
      return 0;
    }
    puVar6 = (undefined1 *)(param_1 + 0x34);
    lVar7 = 0x35;
    lVar5 = lVar3;
  }
  puVar1 = (undefined8 *)(param_1 + lVar7);
  local_5c = *puVar6;
  local_5b = *puVar1;
  uStack_4c = *(undefined4 *)((long)puVar1 + 0xf);
  uStack_40 = (undefined7)puVar1[1];
  if (lVar4 == lVar5) {
    return 0;
  }
  local_53 = uStack_40;
  local_48 = local_5b;
  local_39 = uStack_4c;
  uVar2 = FUN__text__001aa15c(lVar8,&local_5c,*(undefined4 *)(lVar5 + 0xc));
  return uVar2 & 1;
}


