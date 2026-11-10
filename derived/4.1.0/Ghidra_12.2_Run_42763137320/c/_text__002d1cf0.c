/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d1cf0; name: FUN_.text__002d1cf0
 */


void FUN__text__002d1cf0(long param_1,uint param_2)

{
  long *plVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  short *psVar10;
  long lVar11;
  long *plVar12;
  uint local_c4;
  uint uStack_c0;
  byte local_b4;
  
  psVar10 = *(short **)(param_1 + 0x50);
  if (psVar10 == *(short **)(param_1 + 0x58)) {
    return;
  }
  while (*(uint *)(psVar10 + 2) != (param_2 & 0xffff)) {
    psVar10 = psVar10 + 4;
    if (psVar10 == *(short **)(param_1 + 0x58)) {
      return;
    }
  }
  sVar2 = *psVar10;
  if (sVar2 == 0) {
    return;
  }
  uVar3 = psVar10[1];
  if (uVar3 == 0) {
    return;
  }
  uVar6 = FUN__text__002d058c(param_1,sVar2,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (DAT_008e52a8 == 0) {
    return;
  }
  plVar12 = *(long **)(DAT_008e5278 + 0x1e8);
  plVar1 = *(long **)(DAT_008e5278 + 0x1f0);
  if (plVar12 == plVar1) {
    return;
  }
  do {
    lVar11 = *plVar12;
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x50))();
    plVar8 = (long *)FUN__text__002d29c4();
    if (plVar8 == plVar7) {
LAB__text__002d1dd8:
      uVar9 = FUN__text__002d4ec4(&local_c4,lVar11,sVar2);
      uVar4 = 1 << (ulong)(uVar3 & 0x1f);
      uStack_c0 = uStack_c0 | uVar4;
      local_c4 = local_c4 | uVar4;
      uVar5 = FUN__text__002d1740(uVar9,sVar2);
      local_b4 = (byte)(1 << (uVar3 == uVar5)) | local_b4;
      FUN__text__002d4e94(lVar11,sVar2,&local_c4);
      return;
    }
    do {
      plVar7 = (long *)*plVar7;
    } while (plVar7 != plVar8 && plVar7 != (long *)0x0);
    if (plVar7 != (long *)0x0) {
      if (lVar11 == 0) {
        return;
      }
      goto LAB__text__002d1dd8;
    }
    plVar12 = plVar12 + 1;
    if (plVar12 == plVar1) {
      return;
    }
  } while( true );
}


