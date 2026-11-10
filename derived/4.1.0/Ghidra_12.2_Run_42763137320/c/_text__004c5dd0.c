/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c5dd0; name: FUN_.text__004c5dd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004c5dd0(long param_1,long param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ushort uVar13;
  float fVar14;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  byte local_60;
  undefined8 local_58;
  
  if (*(char *)(param_2 + 0x98) == '\0') {
    return 1;
  }
  if (*(char *)(param_2 + 0x98) != -0x70) {
    return 1;
  }
  if (*(char *)(param_2 + 0x9d) == '\0') {
    return 1;
  }
  uVar6 = FUN__text__00494bb0();
  lVar12 = *(long *)(param_2 + 0xa8);
  uVar13 = 0xff;
  uVar5 = *(byte *)(param_2 + 0x98) - 0x80;
  if ((uVar5 < 0x21) && ((1L << ((ulong)uVar5 & 0x3f) & 0x100010001U) != 0)) {
    uVar13 = (ushort)*(byte *)(param_2 + 0x9c);
  }
  bVar2 = *(byte *)(param_2 + 0x99);
  puVar8 = *(undefined8 **)(lVar12 + 0x30);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN__text__00400f80(0,0x20);
    if (puVar8 == (undefined8 *)0x0) goto LAB__text__004c5ef0;
    puVar8[2] = 0;
    *(undefined2 *)(puVar8 + 3) = 0xffff;
    *puVar8 = *(undefined8 *)(lVar12 + 0x30);
    *(undefined8 **)(lVar12 + 0x30) = puVar8;
    puVar9 = *(undefined8 **)(lVar12 + 0x28);
  }
  else {
    puVar9 = *(undefined8 **)(lVar12 + 0x28);
  }
  if (puVar9 == (undefined8 *)0x0) {
    *(undefined8 **)(lVar12 + 0x20) = puVar8;
  }
  else {
    *puVar9 = puVar8;
    puVar8 = *(undefined8 **)(lVar12 + 0x30);
  }
  *(undefined8 **)(lVar12 + 0x28) = puVar8;
  *(undefined8 *)(lVar12 + 0x30) = *puVar8;
  *puVar8 = 0;
  lVar10 = *(long *)(lVar12 + 0x28);
  *(int *)(lVar12 + 0x44) = *(int *)(lVar12 + 0x44) + 1;
  *(ushort *)(lVar10 + 0x18) = uVar13 | (ushort)bVar2 << 8;
  piVar1 = (int *)(param_1 + 0x24);
  *(undefined4 *)(lVar10 + 8) = uVar6;
  *(long *)(lVar10 + 0x10) = param_1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__004c5ef0:
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  local_70 = FUN__text__00477138(param_2);
  puVar8 = _DAT_008a45f0;
  uVar5 = *(byte *)(param_2 + 0x98) - 0x80;
  local_68 = *(undefined1 *)(param_2 + 0x99);
  if (uVar5 < 0x21 && (1L << ((ulong)uVar5 & 0x3f) & 0x100010001U) != 0) {
    bVar2 = *(byte *)(param_2 + 0x9c);
    local_60 = bVar2;
  }
  else {
    bVar2 = *(byte *)(param_2 + 0x9c);
    local_60 = 0xff;
  }
  local_58 = 0;
  local_78 = 0;
  local_80 = uVar11;
  FUN__text__00434a40((float)bVar2,*_DAT_008a45f0,0x100000085,&local_80,0,1,0);
  fVar14 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + 0x9c));
  fVar14 = exp2f(fVar14 * 0.083333336 + -5.75);
  FUN__text__00434a40(fVar14 * 440.0,*puVar8,0x100000084,&local_80,0,1,0);
  iVar7 = FUN__text__00494df0(param_1);
  if (iVar7 == 1) {
    return 1;
  }
  return 0x52;
}


