/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e9d8c; name: FUN_.text__003e9d8c
 */


void FUN__text__003e9d8c(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 < *(uint *)(param_1 + 0x2b8)) {
    uVar3 = (ulong)param_2;
    uVar1 = FUN__text__003eb460(*(long *)(param_1 + 0x298) + uVar3 * 0x40);
    if ((((uVar1 & 1) != 0) &&
        (FUN__text__003eb584(*(long *)(param_1 + 0x298) + uVar3 * 0x40,0),
        param_2 < *(uint *)(param_1 + 0x2b8))) &&
       (uVar1 = FUN__text__003eb460(*(long *)(param_1 + 0x298) + uVar3 * 0x40), (uVar1 & 1) != 0)) {
      FUN__text__003eb744(*(long *)(param_1 + 0x298) + uVar3 * 0x40);
      FUN__text__00697398();
      lVar2 = FUN__text__003eb744(*(long *)(param_1 + 0x298) + uVar3 * 0x40);
      *(undefined4 *)(lVar2 + 0x20) = 0;
    }
  }
  return;
}


