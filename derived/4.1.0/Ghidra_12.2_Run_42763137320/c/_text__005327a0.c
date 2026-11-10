/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005327a0; name: FUN_.text__005327a0
 */


long FUN__text__005327a0(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  
  uVar9 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 <= uVar9) {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar4 = FUN__text__00532970(param_1,iVar1);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar9) {
      return 0;
    }
    uVar9 = *(uint *)(param_1 + 1);
  }
  lVar6 = *param_1;
  *(uint *)(param_1 + 1) = uVar9 + 1;
  puVar10 = (undefined4 *)(lVar6 + (ulong)uVar9 * 0x58);
  lVar7 = 0;
  if (lVar6 != 0) {
    *puVar10 = 0;
    lVar6 = lVar6 + (ulong)uVar9 * 0x58;
    *(undefined4 *)(lVar6 + 0x28) = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0x3f8000003f800000;
    *(undefined2 *)(lVar6 + 0x2c) = 0;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined1 *)(lVar6 + 0x50) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 1;
    *(undefined8 *)(lVar6 + 8) = 0;
    *(undefined8 *)(lVar6 + 0x10) = 0;
    lVar7 = *param_1;
  }
  if ((undefined4 *)(lVar7 + (ulong)param_2 * 0x58) < puVar10) {
    do {
      puVar12 = puVar10 + -0x16;
      *puVar10 = *puVar12;
      *(undefined8 *)(puVar10 + 6) = *(undefined8 *)(puVar10 + -0x10);
      *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(puVar10 + -0xe);
      *(undefined8 *)((long)puVar10 + 0x26) = *(undefined8 *)((long)puVar10 + -0x32);
      *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar10 + -0x14);
      *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar10 + -0x12);
      *(undefined8 *)(puVar10 + 0xc) = *(undefined8 *)(puVar10 + -10);
      *(undefined8 *)(puVar10 + 0xe) = *(undefined8 *)(puVar10 + -8);
      puVar10[0x10] = puVar10[-6];
      if ((*(long *)(puVar10 + 0x12) != 0) && (*(char *)(puVar10 + 0x14) != '\0')) {
        FUN__text__00400fc0(9);
      }
      uVar5 = *(undefined8 *)(puVar10 + -4);
      *(undefined8 *)(puVar10 + -4) = 0;
      *(undefined8 *)(puVar10 + 0x12) = uVar5;
      uVar3 = *(undefined1 *)(puVar10 + -2);
      *(undefined1 *)(puVar10 + -2) = 0;
      *(undefined1 *)(puVar10 + 0x14) = uVar3;
      lVar7 = *param_1;
      puVar10 = puVar12;
    } while ((undefined4 *)(lVar7 + (ulong)param_2 * 0x58) < puVar12);
  }
  plVar8 = (long *)(lVar7 + (ulong)param_2 * 0x58 + 0x48);
  if ((*plVar8 != 0) && (pcVar11 = (char *)(lVar7 + (ulong)param_2 * 0x58 + 0x50), *pcVar11 != '\0')
     ) {
    FUN__text__00400fc0(9);
    *pcVar11 = '\0';
  }
  *plVar8 = 0;
  lVar7 = 0;
  if (*param_1 != 0) {
    puVar10 = (undefined4 *)(*param_1 + (ulong)param_2 * 0x58);
    *(undefined8 *)(puVar10 + 6) = 0;
    *(undefined8 *)(puVar10 + 8) = 0x3f8000003f800000;
    *puVar10 = 0;
    puVar10[10] = 0;
    *(undefined2 *)(puVar10 + 0xb) = 0;
    *(undefined8 *)(puVar10 + 0x12) = 0;
    *(undefined1 *)(puVar10 + 0x14) = 0;
    *(undefined8 *)(puVar10 + 0xc) = 1;
    *(undefined8 *)(puVar10 + 2) = 0;
    *(undefined8 *)(puVar10 + 4) = 0;
    lVar7 = *param_1;
  }
  return lVar7 + (ulong)param_2 * 0x58;
}


