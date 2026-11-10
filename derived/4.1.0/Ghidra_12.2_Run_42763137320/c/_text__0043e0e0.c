/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043e0e0; name: FUN_.text__0043e0e0
 */


undefined8 FUN__text__0043e0e0(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = (undefined8 *)(**(code **)*param_2)(param_2);
  local_60 = *puVar2;
  uStack_58 = puVar2[1];
  local_40 = puVar2[4];
  uStack_38 = puVar2[5];
  local_50 = puVar2[2];
  uStack_48 = puVar2[3];
  plVar3 = (long *)FUN__text__0043e2c0(param_1 + 0x58,&local_60);
  if ((plVar3 == (long *)0x0) || (lVar9 = *plVar3, lVar9 == 0)) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    uVar8 = *(uint *)(param_1 + 0x20);
    puVar2 = puVar5;
    if (uVar8 == 0) {
LAB__text__0043e1bc:
      if (puVar2 != puVar5 + (ulong)uVar8 * 2) {
        return 1;
      }
    }
    else {
      lVar9 = (ulong)uVar8 << 4;
      do {
        if ((undefined8 *)*puVar2 == param_2) goto LAB__text__0043e1bc;
        puVar2 = puVar2 + 2;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x29);
    if (*(uint *)(param_1 + 0x24) <= uVar8) {
      uVar4 = FUN__text__00438430();
      if ((uVar4 & 1) == 0) {
        return 0x34;
      }
      if (*(uint *)(param_1 + 0x24) <= uVar8) {
        return 0x34;
      }
      uVar8 = *(uint *)(param_1 + 0x20);
      puVar5 = *(undefined8 **)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x20) = uVar8 + 1;
    if (puVar5 == (undefined8 *)0x0) {
      return 0x34;
    }
    puVar5[(ulong)uVar8 * 2] = param_2;
    *(undefined1 *)(puVar5 + (ulong)uVar8 * 2 + 1) = uVar1;
    pbVar6 = (byte *)(param_1 + 0x28);
  }
  else {
    puVar5 = *(undefined8 **)(lVar9 + 0x48);
    uVar8 = *(uint *)(lVar9 + 0x50);
    puVar2 = puVar5;
    if (uVar8 == 0) {
LAB__text__0043e21c:
      if (puVar2 != puVar5 + (ulong)uVar8 * 2) {
        return 1;
      }
    }
    else {
      lVar7 = (ulong)uVar8 << 4;
      do {
        if ((undefined8 *)*puVar2 == param_2) goto LAB__text__0043e21c;
        puVar2 = puVar2 + 2;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
    uVar1 = *(undefined1 *)(lVar9 + 0x59);
    if (*(uint *)(lVar9 + 0x54) <= uVar8) {
      uVar4 = FUN__text__00438430();
      if ((uVar4 & 1) == 0) {
        return 0x34;
      }
      if (*(uint *)(lVar9 + 0x54) <= uVar8) {
        return 0x34;
      }
      uVar8 = *(uint *)(lVar9 + 0x50);
      puVar5 = *(undefined8 **)(lVar9 + 0x48);
    }
    *(uint *)(lVar9 + 0x50) = uVar8 + 1;
    if (puVar5 == (undefined8 *)0x0) {
      return 0x34;
    }
    puVar5[(ulong)uVar8 * 2] = param_2;
    *(undefined1 *)(puVar5 + (ulong)uVar8 * 2 + 1) = uVar1;
    pbVar6 = (byte *)(lVar9 + 0x58);
  }
  *pbVar6 = *pbVar6 & 0xfe | 3 < *pbVar6;
  return 1;
}


