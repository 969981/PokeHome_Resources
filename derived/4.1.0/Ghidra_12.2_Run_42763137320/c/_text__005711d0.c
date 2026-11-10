/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005711d0; name: FUN_.text__005711d0
 */


undefined8 FUN__text__005711d0(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  
  pcVar1 = (char *)((long)param_2 + 0x16);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 5);
  uVar4 = strlen(pcVar1);
  if (0x102 < uVar4) {
    uVar4 = 0x103;
  }
  if (uVar4 != 0) {
    uVar6 = uVar4 & 3;
    if (uVar4 < 4) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        pcVar2 = pcVar1 + uVar7;
        pcVar3 = (char *)(param_1 + 0x20 + uVar7);
        uVar7 = uVar7 + 4;
        *pcVar3 = *pcVar2;
        pcVar3[1] = pcVar2[1];
        pcVar3[2] = pcVar2[2];
        pcVar3[3] = pcVar2[3];
      } while ((uVar4 & 0x1fc) != uVar7);
    }
    if (uVar6 != 0) {
      puVar8 = (undefined1 *)((long)param_2 + uVar7 + 0x16);
      puVar9 = (undefined1 *)(uVar7 + param_1 + 0x20);
      do {
        uVar6 = uVar6 - 1;
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar6 != 0);
    }
  }
  *(undefined1 *)(param_1 + 0x20 + uVar4) = 0;
  sVar5 = strlen(pcVar1);
  *(undefined1 *)(param_1 + 0x123) = 0;
  pcVar1 = pcVar1 + ((int)sVar5 + 1);
  *(char *)(param_1 + 0x124) = *pcVar1;
  *(char *)(param_1 + 0x125) = pcVar1[1];
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(pcVar1 + 2);
  return 1;
}


