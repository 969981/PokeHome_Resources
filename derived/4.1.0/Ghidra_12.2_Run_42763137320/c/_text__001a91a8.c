/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a91a8; name: FUN_.text__001a91a8
 */


undefined8 FUN__text__001a91a8(long param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  char *pcVar15;
  char local_a8;
  undefined8 local_a7;
  undefined7 local_9f;
  undefined4 uStack_98;
  char local_94;
  undefined8 local_93;
  undefined7 local_8b;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined4 local_71;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 local_59;
  
  uVar14 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x3c) = uVar3;
  pcVar13 = (char *)(param_1 + 0x34);
  *(undefined8 *)pcVar13 = uVar14;
  *param_3 = 0;
  pcVar15 = (char *)(param_1 + 0x20);
  if ((((*pcVar15 == *pcVar13) && (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x38))) &&
      (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x3c))) &&
     ((*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x40) &&
      (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x44))))) {
    return 2;
  }
  lVar12 = *(long *)(param_1 + 0x18);
  if (lVar12 != 0) {
    if ((*pcVar13 != '\0') && (**(int **)(lVar12 + 0x38) == 1)) {
      return 0;
    }
    lVar5 = FUN__text__00195358(*(undefined8 *)(lVar12 + 0x10),pcVar13);
    if (lVar5 == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      lVar6 = FUN__text__00195844(uVar14,*(undefined4 *)(param_1 + 0x24));
      lVar5 = FUN__text__00195844(uVar14,*(undefined4 *)(param_1 + 0x38));
      if (*(int *)(lVar6 + 0xc) == 1) {
        if (*(int *)(lVar5 + 0xc) == 1) {
          return 1;
        }
        lVar9 = 0x35;
        lVar11 = 0x21;
        lVar8 = lVar5;
        pcVar10 = pcVar13;
        lVar5 = lVar6;
        pcVar13 = pcVar15;
      }
      else {
        if (*(int *)(lVar5 + 0xc) != 1) {
          return 1;
        }
        lVar9 = 0x21;
        lVar11 = 0x35;
        lVar8 = lVar6;
        pcVar10 = pcVar15;
      }
      puVar1 = (undefined8 *)(param_1 + lVar11);
      puVar2 = (undefined8 *)(param_1 + lVar9);
      local_94 = *pcVar13;
      local_93 = *puVar1;
      uStack_84 = *(undefined4 *)((long)puVar1 + 0xf);
      uStack_60 = (undefined7)puVar1[1];
      local_80 = *puVar2;
      local_71 = *(undefined4 *)((long)puVar2 + 0xf);
      cVar4 = *pcVar10;
      uStack_78 = (undefined7)puVar2[1];
      if (lVar5 != lVar8) {
        local_8b = uStack_60;
        local_68 = local_93;
        local_59 = uStack_84;
        uVar7 = FUN__text__001a93b0(lVar12,&local_94,*(undefined4 *)(lVar8 + 0xc));
        *param_3 = *param_3 | uVar7;
        local_9f = uStack_78;
        local_a7 = local_80;
        uStack_98 = local_71;
        local_a8 = cVar4;
        uVar7 = FUN__text__001a96cc(lVar12,&local_a8,*(undefined4 *)(lVar5 + 0xc));
        *param_3 = *param_3 | uVar7;
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


