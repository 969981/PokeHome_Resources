/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00436bf0; name: FUN_.text__00436bf0
 */


undefined8 FUN__text__00436bf0(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
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
  puVar3 = (ushort *)FUN__text__00438880(param_1 + 0x40,&local_60);
  if ((puVar3 == (ushort *)0x0) || (*(long *)(param_1 + 0x28) == 0)) {
    puVar5 = *(undefined8 **)(param_1 + 0x58);
    uVar10 = *(uint *)(param_1 + 0x60);
    puVar2 = puVar5;
    if (uVar10 == 0) {
LAB__text__00436ccc:
      if (puVar2 != puVar5 + (ulong)uVar10 * 2) {
        return 1;
      }
    }
    else {
      lVar8 = (ulong)uVar10 << 4;
      do {
        if ((undefined8 *)*puVar2 == param_2) goto LAB__text__00436ccc;
        puVar2 = puVar2 + 2;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x69);
    if (*(uint *)(param_1 + 100) <= uVar10) {
      uVar4 = FUN__text__00438430();
      if ((uVar4 & 1) == 0) {
        return 0x34;
      }
      if (*(uint *)(param_1 + 100) <= uVar10) {
        return 0x34;
      }
      uVar10 = *(uint *)(param_1 + 0x60);
      puVar5 = *(undefined8 **)(param_1 + 0x58);
    }
    *(uint *)(param_1 + 0x60) = uVar10 + 1;
    if (puVar5 == (undefined8 *)0x0) {
      return 0x34;
    }
    puVar5[(ulong)uVar10 * 2] = param_2;
    *(undefined1 *)(puVar5 + (ulong)uVar10 * 2 + 1) = uVar1;
    pbVar6 = (byte *)(param_1 + 0x68);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x28) + (ulong)*puVar3 * 0x28;
    puVar9 = (undefined8 *)(lVar8 + 8);
    puVar5 = (undefined8 *)*puVar9;
    uVar10 = *(uint *)(lVar8 + 0x10);
    puVar2 = puVar5;
    if (uVar10 == 0) {
LAB__text__00436d2c:
      if (puVar2 != puVar5 + (ulong)uVar10 * 2) {
        return 1;
      }
    }
    else {
      lVar7 = (ulong)uVar10 << 4;
      do {
        if ((undefined8 *)*puVar2 == param_2) goto LAB__text__00436d2c;
        puVar2 = puVar2 + 2;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
    uVar1 = *(undefined1 *)(lVar8 + 0x19);
    if (*(uint *)(lVar8 + 0x14) <= uVar10) {
      uVar4 = FUN__text__00438430(puVar9);
      if ((uVar4 & 1) == 0) {
        return 0x34;
      }
      if (*(uint *)(lVar8 + 0x14) <= uVar10) {
        return 0x34;
      }
      uVar10 = *(uint *)(lVar8 + 0x10);
      puVar5 = (undefined8 *)*puVar9;
    }
    *(uint *)(lVar8 + 0x10) = uVar10 + 1;
    if (puVar5 == (undefined8 *)0x0) {
      return 0x34;
    }
    puVar5[(ulong)uVar10 * 2] = param_2;
    *(undefined1 *)(puVar5 + (ulong)uVar10 * 2 + 1) = uVar1;
    pbVar6 = (byte *)(lVar8 + 0x18);
  }
  *pbVar6 = *pbVar6 & 0xfe | 3 < *pbVar6;
  return 1;
}


