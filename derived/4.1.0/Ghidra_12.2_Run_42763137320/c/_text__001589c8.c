/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001589c8; name: FUN_.text__001589c8
 */


undefined8 FUN__text__001589c8(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  if (uVar1 - 0x60 < 0x1b) {
    uVar2 = 1;
    *param_2 = uVar1 - 0x20;
  }
  else {
    uVar2 = 0;
    if (uVar1 - 0xe0 < 0x74) {
                    /* WARNING: Could not emulate address calculation at 0x001589f4 */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)((ulong)*(byte *)((ulong)(uVar1 - 0xe0) + 0x724d79) * 4 + 0x158a04))(0);
      return uVar2;
    }
  }
  return uVar2;
}


