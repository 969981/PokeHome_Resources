/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005317e0; name: FUN_.text__005317e0
 */


undefined8 FUN__text__005317e0(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  undefined1 *puVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == 0) {
    return 0;
  }
  lVar4 = *param_1;
  iVar6 = 0;
  uVar7 = uVar2;
  do {
    iVar1 = iVar6 + (uVar7 >> 1);
    puVar8 = (uint *)(lVar4 + (long)iVar1 * 0x58);
    uVar3 = *puVar8;
    if (uVar3 == param_2) {
      lVar9 = lVar4 + (ulong)uVar2 * 0x58;
      if (puVar8 < (uint *)(lVar9 + -0x58)) {
        puVar10 = (undefined1 *)(lVar4 + (long)iVar1 * 0x58 + 0xa8);
        do {
          *(undefined4 *)(puVar10 + -0xa8) = *(undefined4 *)(puVar10 + -0x50);
          *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x38);
          *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x30);
          *(undefined8 *)(puVar10 + -0x82) = *(undefined8 *)(puVar10 + -0x2a);
          *(undefined8 *)(puVar10 + -0xa0) = *(undefined8 *)(puVar10 + -0x48);
          *(undefined8 *)(puVar10 + -0x98) = *(undefined8 *)(puVar10 + -0x40);
          *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x20);
          *(undefined8 *)(puVar10 + -0x70) = *(undefined8 *)(puVar10 + -0x18);
          *(undefined4 *)(puVar10 + -0x68) = *(undefined4 *)(puVar10 + -0x10);
          if ((*(long *)(puVar10 + -0x60) != 0) && (puVar10[-0x58] != '\0')) {
            FUN__text__00400fc0(9);
          }
          uVar5 = *(undefined8 *)(puVar10 + -8);
          *(undefined8 *)(puVar10 + -8) = 0;
          *(undefined8 *)(puVar10 + -0x60) = uVar5;
          puVar8 = (uint *)(puVar10 + -0x50);
          puVar10[-0x58] = *puVar10;
          *puVar10 = 0;
          puVar10 = puVar10 + 0x58;
        } while (puVar8 < (uint *)(lVar9 + -0x58));
      }
      if ((*(long *)(lVar9 + -0x10) != 0) && (*(char *)(lVar9 + -8) != '\0')) {
        FUN__text__00400fc0(9);
        *(undefined1 *)(lVar9 + -8) = 0;
      }
      *(undefined8 *)(lVar9 + -0x10) = 0;
      *(int *)(param_1 + 1) = (int)param_1[1] + -1;
      return 1;
    }
    if (uVar3 < param_2) {
      iVar6 = iVar1 + 1;
    }
    uVar3 = uVar7 - (uVar3 < param_2);
    uVar7 = uVar3 >> 1;
  } while (1 < uVar3);
  return 0;
}


