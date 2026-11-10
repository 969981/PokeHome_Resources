/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ac014; name: FUN_.text__006ac014
 */


void FUN__text__006ac014(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 0xc00) == 0) {
    uVar6 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),DAT_00c5fb70);
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    return;
  }
  uVar2 = ((ulong)(uVar3 >> 2) & 3) << 2 | ((ulong)(uVar3 >> 2) & 3) << 4;
  lVar4 = ((ulong)uVar3 & 3) * 0x10;
  uVar7 = (ulong)(uVar3 >> 6) & 8;
  lVar1 = *(long *)(param_1 + 0x18) + (lVar4 + ((ulong)uVar3 & 0x30) | uVar7) + uVar2;
  lVar4 = *(long *)(param_1 + 0x18) +
          (ulong)((int)uVar2 + ((int)lVar4 + (int)((ulong)uVar3 & 0x30) | (uint)uVar7) + 4);
  if ((uVar3 & 0xc00) != 0x800) {
    lVar4 = lVar1;
  }
  uVar5 = FUN__text__006d5734(lVar1,lVar4);
  uVar6 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),uVar5);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  return;
}


