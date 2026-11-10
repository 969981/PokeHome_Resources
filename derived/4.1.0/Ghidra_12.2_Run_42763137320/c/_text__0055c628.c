/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055c628; name: FUN_.text__0055c628
 */


undefined8 FUN__text__0055c628(undefined8 param_1,ushort param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    return 0x1f;
  }
  uVar1 = (uint)(short)param_2;
  if ((int)uVar1 < 0x3c) {
    uVar2 = (uint)((short)param_2 % 10);
    if (param_2 < 0x1e) {
      if (uVar2 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0055c690 */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(&UNK__text__0055c6a0 + (ulong)*(byte *)((ulong)uVar2 + 0x73e3d3) * 4))
                          ((ulong)uVar1 / 10);
        return uVar3;
      }
    }
    else if ((0x1d < (int)uVar1) && (uVar2 < 5)) {
                    /* WARNING: Could not emulate address calculation at 0x0055c734 */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&UNK__text__0055c740 + (ulong)*(byte *)((ulong)uVar2 + 0x73e3ce) * 4))();
      return uVar3;
    }
  }
  else if (uVar1 - 0x3c < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0055c6dc */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&UNK__text__0055c6e8 + (ulong)*(byte *)((ulong)(uVar1 - 0x3c) + 0x73e3c8) * 4
                      ))();
    return uVar3;
  }
  return 0x1f;
}


