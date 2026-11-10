/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003684fc; name: FUN_.text__003684fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003684fc(long param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  ulong local_28;
  undefined4 local_4;
  
  local_28 = local_28 & 0xffffffff00000000;
  uVar1 = FUN__text__00371260(*_DAT_0089f448,&local_28);
  local_4 = 0x8cbbfd90;
  local_28 = param_1 + 0x60;
  local_30 = 8;
  FUN__text__00368230(uVar1,&local_4,&local_28,&local_30);
  return;
}


