/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00216e04; name: FUN_.text__00216e04
 */


undefined8 FUN__text__00216e04(long param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = FUN__text__00217660(param_2);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  uVar5 = FUN__text__002155e0(param_1);
  if ((uVar5 & 1) != 0) {
    uVar3 = (int)uVar4 - 1;
    uVar5 = (ulong)(uVar3 >> 3);
    uVar2 = 1 << (ulong)(uVar3 & 7);
    lVar1 = *(long *)(param_1 + 0x80) + uVar5;
    uVar3 = uVar2 & *(byte *)(lVar1 + 0x28);
    if ((((uVar3 != 0) && (uVar3 == (uVar2 & *(byte *)(lVar1 + 0x5c)))) &&
        (uVar3 == (uVar2 & *(byte *)(*(long *)(param_1 + 0x88) + uVar5 + 0x5f8)))) &&
       (uVar3 == (uVar2 & *(byte *)(*(long *)(param_1 + 0x88) + 0x3a18 + uVar5)))) {
      return 1;
    }
  }
  return 0;
}


