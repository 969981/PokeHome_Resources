/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048cb20; name: FUN_.text__0048cb20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__0048cb20(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  nn::os::InitializeEvent((EventType *)(param_1 + 0x38),0,0);
  nn::os::SignalEvent((EventType *)(param_1 + 0x38));
  *_DAT_008a4678 = param_1 + 0x68;
  uVar1 = FUN__text__0048cb80(param_1,0xb);
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}


