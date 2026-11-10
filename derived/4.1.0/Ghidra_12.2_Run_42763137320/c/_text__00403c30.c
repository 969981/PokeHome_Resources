/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00403c30; name: FUN_.text__00403c30
 */


long FUN__text__00403c30(int param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = *(ulong *)(&DAT_00ae8a50 + (long)param_1 * 0x638) & param_2;
  if (0x7d < *(uint *)(uVar3 + 0xc)) {
    if (*(uint *)(uVar3 + 0xc) == 0x7e) {
      return (uVar3 - param_2) +
             (&DAT_00ae8a40)[(long)param_1 * 199] * (ulong)*(uint *)(uVar3 + 0x2c);
    }
    return (uVar3 - param_2) +
           *(long *)(&DAT_00ae8a28 + (long)param_1 * 0x638) * (ulong)*(uint *)(uVar3 + 0x2c);
  }
  uVar1 = (ulong)*(uint *)(uVar3 + 0x24);
  uVar2 = (param_2 - uVar3) - 0x80;
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar2 / uVar1;
  }
  return uVar1 + (uVar3 * uVar1 - uVar2);
}


