/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0035d2c0; name: FUN_.text__0035d2c0
 */


undefined8 FUN__text__0035d2c0(long param_1,uint param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  
  if (((param_2 < 0x20) && (param_3 < 0x1e)) && (param_4 < 6)) {
    uVar1 = *(ushort *)(param_1 + (ulong)param_4 * 0xc + 0x524);
    if ((param_2 == uVar1 >> 8) && (param_3 == (uVar1 & 0xff))) {
      return 1;
    }
    uVar1 = *(ushort *)(param_1 + (ulong)param_4 * 0xc + 0x526);
    if ((param_2 == uVar1 >> 8) && (param_3 == (uVar1 & 0xff))) {
      return 1;
    }
    uVar1 = *(ushort *)(param_1 + (ulong)param_4 * 0xc + 0x528);
    if ((param_2 == uVar1 >> 8) && (param_3 == (uVar1 & 0xff))) {
      return 1;
    }
    uVar1 = *(ushort *)(param_1 + (ulong)param_4 * 0xc + 0x52a);
    if ((param_2 == uVar1 >> 8) && (param_3 == (uVar1 & 0xff))) {
      return 1;
    }
    uVar1 = *(ushort *)(param_1 + (ulong)param_4 * 0xc + 0x52c);
    if ((param_2 == uVar1 >> 8) && (param_3 == (uVar1 & 0xff))) {
      return 1;
    }
    uVar1 = *(ushort *)(param_1 + (ulong)param_4 * 0xc + 0x52e);
    if ((param_2 == uVar1 >> 8) && (param_3 == (uVar1 & 0xff))) {
      return 1;
    }
  }
  return 0;
}


