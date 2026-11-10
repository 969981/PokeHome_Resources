/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00436de0; name: FUN_.text__00436de0
 */


undefined8 FUN__text__00436de0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)(**(code **)*param_2)(param_2);
  local_50 = *puVar1;
  uStack_48 = puVar1[1];
  local_30 = puVar1[4];
  uStack_28 = puVar1[5];
  local_40 = puVar1[2];
  uStack_38 = puVar1[3];
  puVar2 = (ushort *)FUN__text__00438880(param_1 + 0x40,&local_50);
  if ((puVar2 == (ushort *)0x0) || (*(long *)(param_1 + 0x28) == 0)) {
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    uVar5 = *(uint *)(param_1 + 0x60);
    puVar1 = puVar3;
    if (uVar5 == 0) {
LAB__text__00436eb0:
      if (puVar1 != puVar3 + (ulong)uVar5 * 2) {
        uVar5 = uVar5 - 1;
        if (puVar1 < puVar3 + (ulong)uVar5 * 2) {
          memmove(puVar1,puVar1 + 2,
                  (ulong)(uint)((int)(puVar3 + (ulong)uVar5 * 2) - (int)puVar1) & 0xfffffff0);
          uVar5 = *(int *)(param_1 + 0x60) - 1;
        }
        pbVar4 = (byte *)(param_1 + 0x68);
        *(uint *)(param_1 + 0x60) = uVar5;
        goto LAB__text__00436f30;
      }
    }
    else {
      lVar7 = (ulong)uVar5 << 4;
      do {
        if ((undefined8 *)*puVar1 == param_2) goto LAB__text__00436eb0;
        puVar1 = puVar1 + 2;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28) + (ulong)*puVar2 * 0x28;
    puVar3 = *(undefined8 **)(lVar7 + 8);
    uVar5 = *(uint *)(lVar7 + 0x10);
    puVar1 = puVar3;
    if (uVar5 == 0) {
LAB__text__00436ef4:
      if (puVar1 != puVar3 + (ulong)uVar5 * 2) {
        uVar5 = uVar5 - 1;
        if (puVar1 < puVar3 + (ulong)uVar5 * 2) {
          memmove(puVar1,puVar1 + 2,
                  (ulong)(uint)((int)(puVar3 + (ulong)uVar5 * 2) - (int)puVar1) & 0xfffffff0);
          uVar5 = *(int *)(lVar7 + 0x10) - 1;
        }
        *(uint *)(lVar7 + 0x10) = uVar5;
        pbVar4 = (byte *)(lVar7 + 0x18);
LAB__text__00436f30:
        *pbVar4 = *pbVar4 & 0xfe | 3 < *pbVar4;
        return 1;
      }
    }
    else {
      lVar6 = (ulong)uVar5 << 4;
      do {
        if ((undefined8 *)*puVar1 == param_2) goto LAB__text__00436ef4;
        puVar1 = puVar1 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
  }
  return 2;
}


