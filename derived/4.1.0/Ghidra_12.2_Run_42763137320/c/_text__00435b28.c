/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00435b28; name: FUN_.text__00435b28
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00435b28(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  uint local_14;
  
  if ((param_3 & 0xff00000000) == 0x300000000) {
    uVar2 = FUN__text__004317a0(*_DAT_008a4658,param_3 & 0xffffffff);
    return uVar2;
  }
  iVar1 = FUN__text__00434be0(param_1,param_3 & 0xffffffff | 0x200000000,param_2,&local_14,0);
  if (iVar1 != 1) {
    local_14 = 0;
  }
  return (ulong)local_14;
}


