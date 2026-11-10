/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d3bb0; name: FUN_.text__001d3bb0
 */


uint FUN__text__001d3bb0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 local_9c [4];
  undefined4 local_98;
  undefined4 uStack_94;
  long local_90;
  undefined1 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar11 = *(undefined8 *)(lVar8 + 0x10);
  puVar13 = (undefined8 *)(param_1 + 0x20);
  lVar4 = FUN__text__00195844(uVar11,*(undefined4 *)puVar13);
  puVar10 = (undefined8 *)(param_1 + 0x30);
  lVar5 = FUN__text__00195844(uVar11,*(undefined4 *)puVar10);
  if (*(int *)(lVar4 + 0xc) == 1) {
    if (*(int *)(lVar5 + 0xc) != 1) {
      local_88 = 1;
      local_80 = lVar4;
      puVar7 = puVar13;
      lVar4 = lVar5;
      puVar13 = puVar10;
      goto LAB__text__001d3c48;
    }
  }
  else {
    local_88 = 0;
    uVar3 = 0;
    local_80 = lVar5;
    puVar7 = puVar10;
    if (*(int *)(lVar5 + 0xc) != 1) goto LAB__text__001d3e28;
LAB__text__001d3c48:
    local_78 = *puVar7;
    local_70 = puVar7[1];
    local_60 = *puVar13;
    uStack_58 = puVar13[1];
    if (local_80 != lVar4) {
      lVar12 = 0;
      uVar9 = 0;
      lVar5 = (long)&local_78 + 4;
      lVar14 = 5;
      local_68 = lVar4;
      do {
        while( true ) {
          uVar1 = (undefined4)local_78;
          uVar2 = FUN__text__00191358(lVar5);
          if (uVar9 == 0) break;
          FUN__text__00191358(lVar5);
LAB__text__001d3cd4:
          FUN__text__00191358(lVar5);
LAB__text__001d3cdc:
          FUN__text__00191358(lVar5);
LAB__text__001d3ce4:
          FUN__text__00191358(lVar5);
LAB__text__001d3cec:
          FUN__text__00191358(lVar5);
LAB__text__001d3cf4:
          uVar3 = 1;
          uVar9 = 1;
          lVar12 = lVar12 + 0x100000000;
          lVar14 = lVar14 + -1;
          if (lVar14 == 0) goto LAB__text__001d3e28;
        }
        local_98 = uVar1;
        local_9c[0] = 0;
        uStack_94 = uVar2;
        local_90 = lVar12;
        uVar6 = FUN__text__001aa15c(lVar8,local_9c,*(undefined4 *)(local_68 + 0xc));
        uVar1 = (undefined4)local_78;
        uVar2 = FUN__text__00191358(lVar5);
        if ((uVar6 & 1) != 0) goto LAB__text__001d3cd4;
        local_90 = lVar12 + 1;
        local_98 = uVar1;
        local_9c[0] = 0;
        uStack_94 = uVar2;
        uVar6 = FUN__text__001aa15c(lVar8,local_9c,*(undefined4 *)(local_68 + 0xc));
        uVar1 = (undefined4)local_78;
        uVar2 = FUN__text__00191358(lVar5);
        if ((uVar6 & 1) != 0) goto LAB__text__001d3cdc;
        local_90 = lVar12 + 2;
        local_98 = uVar1;
        local_9c[0] = 0;
        uStack_94 = uVar2;
        uVar6 = FUN__text__001aa15c(lVar8,local_9c,*(undefined4 *)(local_68 + 0xc));
        uVar1 = (undefined4)local_78;
        uVar2 = FUN__text__00191358(lVar5);
        if ((uVar6 & 1) != 0) goto LAB__text__001d3ce4;
        local_90 = lVar12 + 3;
        local_98 = uVar1;
        local_9c[0] = 0;
        uStack_94 = uVar2;
        uVar6 = FUN__text__001aa15c(lVar8,local_9c,*(undefined4 *)(local_68 + 0xc));
        uVar1 = (undefined4)local_78;
        uVar2 = FUN__text__00191358(lVar5);
        if ((uVar6 & 1) != 0) goto LAB__text__001d3cec;
        local_90 = lVar12 + 4;
        local_98 = uVar1;
        local_9c[0] = 0;
        uStack_94 = uVar2;
        uVar6 = FUN__text__001aa15c(lVar8,local_9c,*(undefined4 *)(local_68 + 0xc));
        uVar1 = (undefined4)local_78;
        uVar2 = FUN__text__00191358(lVar5);
        if ((uVar6 & 1) != 0) goto LAB__text__001d3cf4;
        local_90 = lVar12 + 5;
        local_98 = uVar1;
        local_9c[0] = 0;
        uStack_94 = uVar2;
        uVar3 = FUN__text__001aa15c(lVar8,local_9c,*(undefined4 *)(local_68 + 0xc));
        uVar9 = uVar3 & 1;
        lVar12 = lVar12 + 0x100000000;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      goto LAB__text__001d3e28;
    }
  }
  uVar3 = 0;
LAB__text__001d3e28:
  return uVar3 & 1;
}


