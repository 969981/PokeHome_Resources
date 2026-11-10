/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00532c30; name: FUN_.text__00532c30
 */


long FUN__text__00532c30(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  
  uVar6 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  param_2 = param_2 & 0xffffffff;
  if (uVar2 <= uVar6) {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar3 = FUN__text__00532df0(param_1,iVar1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar6) {
      return 0;
    }
    uVar6 = *(uint *)(param_1 + 1);
  }
  lVar4 = *param_1;
  *(uint *)(param_1 + 1) = uVar6 + 1;
  puVar7 = (undefined4 *)(lVar4 + (ulong)uVar6 * 0x30);
  lVar5 = 0;
  if (lVar4 != 0) {
    *puVar7 = 0;
    lVar4 = lVar4 + (ulong)uVar6 * 0x30;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined1 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    lVar5 = *param_1;
  }
  if ((undefined4 *)(lVar5 + param_2 * 0x30) < puVar7) {
    do {
      puVar8 = puVar7 + -0xc;
      *puVar7 = *puVar8;
      lVar5 = *(long *)(puVar7 + 2);
      *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(puVar7 + -4);
      puVar7[6] = puVar7[-6];
      *(undefined1 *)(puVar7 + 10) = *(undefined1 *)(puVar7 + -2);
      if (lVar5 != 0) {
        if (puVar7[4] != 0) {
          lVar4 = (ulong)(uint)puVar7[4] * 0x58;
          pcVar9 = (char *)(lVar5 + 0x50);
          do {
            if ((*(long *)(pcVar9 + -8) != 0) && (*pcVar9 != '\0')) {
              FUN__text__00400fc0(9);
              *pcVar9 = '\0';
            }
            pcVar9[-8] = '\0';
            pcVar9[-7] = '\0';
            pcVar9[-6] = '\0';
            pcVar9[-5] = '\0';
            pcVar9[-4] = '\0';
            pcVar9[-3] = '\0';
            pcVar9[-2] = '\0';
            pcVar9[-1] = '\0';
            lVar4 = lVar4 + -0x58;
            pcVar9 = pcVar9 + 0x58;
          } while (lVar4 != 0);
          lVar5 = *(long *)(puVar7 + 2);
        }
        puVar7[4] = 0;
        FUN__text__00400fc0(9,lVar5);
      }
      puVar7[-0xc] = 0;
      *(undefined8 *)(puVar7 + -4) = 0;
      puVar7[-6] = 0;
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + -10);
      puVar7[4] = puVar7[-8];
      puVar7[5] = puVar7[-7];
      *(undefined8 *)(puVar7 + -10) = 0;
      *(undefined8 *)(puVar7 + -8) = 0;
      puVar7 = puVar8;
    } while ((undefined4 *)(*param_1 + param_2 * 0x30) < puVar8);
  }
  FUN__text__00532008();
  lVar5 = 0;
  if (*param_1 != 0) {
    puVar7 = (undefined4 *)(*param_1 + param_2 * 0x30);
    *puVar7 = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined1 *)(puVar7 + 10) = 0;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 2) = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    lVar5 = *param_1;
  }
  return lVar5 + param_2 * 0x30;
}


