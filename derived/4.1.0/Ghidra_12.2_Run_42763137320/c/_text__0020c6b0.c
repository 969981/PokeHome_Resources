/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020c6b0; name: FUN_.text__0020c6b0
 */


void FUN__text__0020c6b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 local_38 [2];
  
  local_38[0] = 0;
  FUN__text__00603424(local_38);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = local_38[0];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0x40300000000;
  param_1[1] = 0x300000000;
  *(undefined1 *)param_1 = 1;
  uVar1 = param_3[1];
  *(undefined8 *)((long)param_1 + 0x14) = *param_3;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar1;
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  uVar3 = param_3[5];
  bVar5 = 2;
  *(undefined8 *)((long)param_1 + 0x34) = param_3[4];
  *(undefined8 *)((long)param_1 + 0x3c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar2;
  uVar8 = FUN__text__00633b34(*param_2,2);
  if ((uVar8 & 1) == 0) {
    uVar7 = FUN__text__00631008(*param_2);
    *(undefined4 *)((long)param_1 + 4) = uVar7;
    uVar6 = FUN__text__00631010(*param_2);
    *(undefined2 *)(param_1 + 1) = uVar6;
    bVar5 = FUN__text__00634538(*param_2);
    *(byte *)(param_1 + 2) = bVar5 & 1;
    uVar7 = FUN__text__0063378c(*param_2);
    *(undefined4 *)((long)param_1 + 0xc) = uVar7;
    if (*(char *)((long)param_1 + 0x15) != '\0') {
      *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 8;
    }
    if (*(char *)((long)param_1 + 0x14) != '\0') {
      *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 4;
    }
    lVar9 = FUN__text__00321ac0();
    uVar4 = *(uint *)((long)param_1 + 4);
    uVar8 = (ulong)*(ushort *)(param_1 + 1);
    if (*(char *)(lVar9 + (ulong)uVar4 * 0x150 + uVar8 * 0xc + 0x1ae628) == '\0') {
      return;
    }
    if (*(char *)(param_1 + 2) == '\0') {
      if (*(int *)(lVar9 + (ulong)uVar4 * 0x150 + uVar8 * 0xc + 0x1ae62c) != 0) {
        return;
      }
      bVar5 = 0x20;
    }
    else {
      if (*(int *)(lVar9 + (ulong)uVar4 * 0x150 + uVar8 * 0xc + 0x1ae630) != 0) {
        return;
      }
      bVar5 = 0x40;
    }
  }
  *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | bVar5;
  return;
}


