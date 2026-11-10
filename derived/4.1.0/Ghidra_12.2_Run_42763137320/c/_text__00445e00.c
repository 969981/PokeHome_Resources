/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00445e00; name: FUN_.text__00445e00
 */


bool FUN__text__00445e00(long param_1,char *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  bVar8 = *(byte *)(param_1 + 0x38);
  bVar1 = bVar8 & 0xfd;
  *(byte *)(param_1 + 0x38) = bVar1;
  cVar3 = *param_2;
  if ((cVar3 == -0x70 && param_2[5] != '\0') || ((cVar3 == -2 && (*(ushort *)(param_2 + 4) == 0))))
  {
    puVar6 = (undefined4 *)FUN__text__00400f80(0,0x98);
    if (puVar6 == (undefined4 *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      bVar5 = false;
      goto LAB__text__00445f84;
    }
    uVar10 = *(undefined8 *)param_2;
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    *puVar6 = 1;
    *(undefined8 *)(puVar6 + 1) = uVar10;
    puVar6[3] = uVar2;
    *(undefined8 *)(puVar6 + 8) = 0;
    *(undefined8 *)(puVar6 + 10) = 0;
    *(undefined8 *)(puVar6 + 0x24) = 0;
    *(undefined8 *)(puVar6 + 0xc) = 0;
    *(undefined8 *)(puVar6 + 0xe) = 0;
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x12) = 0;
    *(undefined8 *)(puVar6 + 0x14) = 0;
    *(undefined8 *)(puVar6 + 0x16) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined8 *)(puVar6 + 0x1a) = 0;
    *(undefined8 *)(puVar6 + 4) = uVar11;
    *(undefined8 *)(puVar6 + 6) = 0;
    *(undefined8 *)(puVar6 + 0x1c) = 0;
    *(undefined8 *)(puVar6 + 0x1e) = 0;
    *(undefined8 *)(puVar6 + 0x20) = 0;
    *(undefined8 *)(puVar6 + 0x22) = 0;
    *(undefined4 **)(param_1 + 0x10) = puVar6;
    puVar7 = (undefined8 *)FUN__text__00400f80(0,0x80);
    *(undefined8 **)(puVar6 + 0xe) = puVar7;
    bVar5 = false;
    if (puVar7 == (undefined8 *)0x0) goto LAB__text__00445f84;
    uVar9 = 0;
    *(undefined8 **)(puVar6 + 0xc) = puVar7;
    puVar6[0x10] = 4;
    do {
      puVar4 = puVar7;
      puVar4[2] = 0;
      uVar9 = uVar9 + 1;
      *(undefined2 *)(puVar4 + 3) = 0xffff;
      *puVar4 = puVar4 + 4;
      puVar7 = puVar4 + 4;
    } while (uVar9 < (uint)puVar6[0x10]);
    *puVar4 = 0;
    puVar7 = (undefined8 *)FUN__text__00400f80(0,0x60);
    *(undefined8 **)(puVar6 + 0x18) = puVar7;
    bVar5 = false;
    if (puVar7 == (undefined8 *)0x0) goto LAB__text__00445f84;
    uVar9 = 0;
    *(undefined8 **)(puVar6 + 0x16) = puVar7;
    puVar6[0x1a] = 4;
    do {
      puVar4 = puVar7;
      *puVar4 = puVar4 + 3;
      uVar9 = uVar9 + 1;
      puVar7 = puVar4 + 3;
    } while (uVar9 < (uint)puVar6[0x1a]);
    *puVar4 = 0;
  }
  else {
    if (cVar3 == -0x80) {
LAB__text__00445f5c:
      bVar8 = bVar1 | 4;
    }
    else {
      if (cVar3 == -0x70) {
        if (param_2[5] == '\0') goto LAB__text__00445f5c;
      }
      else if (cVar3 == -2) {
        bVar5 = *(ushort *)(param_2 + 4) < 6;
        goto LAB__text__00445f84;
      }
      bVar8 = bVar8 | 7;
    }
    *(byte *)(param_1 + 0x38) = bVar8;
  }
  bVar5 = true;
LAB__text__00445f84:
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)param_2;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  return bVar5;
}


