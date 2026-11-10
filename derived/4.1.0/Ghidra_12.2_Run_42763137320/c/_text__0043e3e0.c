/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043e3e0; name: FUN_.text__0043e3e0
 */


undefined8 FUN__text__0043e3e0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)(**(code **)*param_2)(param_2);
  local_60 = *puVar1;
  uStack_58 = puVar1[1];
  local_40 = puVar1[4];
  uStack_38 = puVar1[5];
  local_50 = puVar1[2];
  uStack_48 = puVar1[3];
  plVar2 = (long *)FUN__text__0043e2c0(param_1 + 0x58,&local_60);
  if ((plVar2 == (long *)0x0) || (lVar7 = *plVar2, lVar7 == 0)) {
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    uVar5 = *(uint *)(param_1 + 0x20);
    puVar1 = puVar3;
    if (uVar5 == 0) {
LAB__text__0043e4a0:
      if (puVar1 != puVar3 + (ulong)uVar5 * 2) {
        uVar5 = uVar5 - 1;
        if (puVar1 < puVar3 + (ulong)uVar5 * 2) {
          memmove(puVar1,puVar1 + 2,
                  (ulong)(uint)((int)(puVar3 + (ulong)uVar5 * 2) - (int)puVar1) & 0xfffffff0);
          uVar5 = *(int *)(param_1 + 0x20) - 1;
        }
        pbVar4 = (byte *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x20) = uVar5;
        goto LAB__text__0043e520;
      }
    }
    else {
      lVar7 = (ulong)uVar5 << 4;
      do {
        if ((undefined8 *)*puVar1 == param_2) goto LAB__text__0043e4a0;
        puVar1 = puVar1 + 2;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
  }
  else {
    puVar3 = *(undefined8 **)(lVar7 + 0x48);
    uVar5 = *(uint *)(lVar7 + 0x50);
    puVar1 = puVar3;
    if (uVar5 == 0) {
LAB__text__0043e4e4:
      if (puVar1 != puVar3 + (ulong)uVar5 * 2) {
        uVar5 = uVar5 - 1;
        if (puVar1 < puVar3 + (ulong)uVar5 * 2) {
          memmove(puVar1,puVar1 + 2,
                  (ulong)(uint)((int)(puVar3 + (ulong)uVar5 * 2) - (int)puVar1) & 0xfffffff0);
          uVar5 = *(int *)(lVar7 + 0x50) - 1;
        }
        *(uint *)(lVar7 + 0x50) = uVar5;
        pbVar4 = (byte *)(lVar7 + 0x58);
LAB__text__0043e520:
        *pbVar4 = *pbVar4 & 0xfe | 3 < *pbVar4;
        return 1;
      }
    }
    else {
      lVar6 = (ulong)uVar5 << 4;
      do {
        if ((undefined8 *)*puVar1 == param_2) goto LAB__text__0043e4e4;
        puVar1 = puVar1 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
  }
  return 2;
}


