/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c4594; name: FUN_.text__003c4594
 */


ulong FUN__text__003c4594(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (**(code **)(*(long *)param_1[0x14] + 0x50))();
  if ((char)param_1[0x1c] != '\0') {
    if (uVar1 == 2) {
      lVar3 = FUN__text__003e9680(param_1[0x18],0x71f5ee);
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x58) & 1) == 0)) {
        *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
        (**(code **)(*param_1 + 0xa8))(param_1);
      }
    }
    else if (uVar1 == 0) {
      if (*(uint *)((long)param_1 + 0xe4) < 4) {
                    /* WARNING: Could not emulate address calculation at 0x003c45ec */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)((ulong)*(byte *)((ulong)*(uint *)((long)param_1 + 0xe4) + 0x73a7c5) * 4 +
                          0x3c45f8))();
        return uVar2;
      }
    }
    else {
      lVar3 = FUN__text__003e9680(param_1[0x18],0x71f5ee);
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
        return (ulong)uVar1;
      }
    }
  }
  return (ulong)uVar1;
}


