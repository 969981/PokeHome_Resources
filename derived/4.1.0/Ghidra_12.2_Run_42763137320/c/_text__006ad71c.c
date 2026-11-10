/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ad71c; name: FUN_.text__006ad71c
 */


void FUN__text__006ad71c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 0xc00) == 0) {
    uVar5 = (ulong)DAT_00c5fb70;
    uVar4 = DAT_00c5fb70;
  }
  else {
    uVar5 = ((ulong)(uVar4 >> 2) & 3) << 2 | ((ulong)(uVar4 >> 2) & 3) << 4;
    lVar3 = ((ulong)uVar4 & 3) * 0x10;
    uVar6 = (ulong)(uVar4 >> 6) & 8;
    lVar1 = *(long *)(param_1 + 0x18) + (lVar3 + ((ulong)uVar4 & 0x30) | uVar6) + uVar5;
    lVar3 = *(long *)(param_1 + 0x18) +
            (ulong)((int)uVar5 + ((int)lVar3 + (int)((ulong)uVar4 & 0x30) | (uint)uVar6) + 4);
    if ((uVar4 & 0xc00) != 0x800) {
      lVar3 = lVar1;
    }
    uVar5 = FUN__text__006d5734(lVar1,lVar3);
    uVar4 = (uint)uVar5;
  }
  if (uVar4 == 7) {
    uVar4 = *(uint *)(param_1 + 0x10);
    uVar6 = (ulong)uVar4 & 0x30;
    lVar1 = ((ulong)uVar4 & 3) * 0x10;
    uVar7 = (ulong)(uVar4 >> 6) & 8;
    uVar5 = ((ulong)(uVar4 >> 2) & 3) << 2 | ((ulong)(uVar4 >> 2) & 3) << 4;
    local_14 = *(undefined4 *)(*(long *)(param_1 + 0x18) + (lVar1 + uVar6 | uVar7) + uVar5);
    puVar2 = (undefined4 *)
             (*(long *)(param_1 + 0x18) +
             (ulong)((int)uVar5 + ((int)lVar1 + (int)uVar6 | (uint)uVar7) + 4));
    if ((uVar4 & 0xc00) != 0x800) {
      puVar2 = &local_14;
    }
    local_18 = *puVar2;
  }
  else {
    local_14 = 0x50400;
    local_18 = 0x50400;
    FUN__text__006d5ad8(uVar5,&local_14,&local_18);
  }
  FUN__text__006d53d4(param_2,param_3,&local_14,&local_18);
  return;
}


