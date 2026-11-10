/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003681bc; name: FUN_.text__003681bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003681bc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 *local_28;
  undefined4 local_4;
  
  puVar1 = _DAT_0089f448;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  local_28 = (undefined8 *)((ulong)local_28 & 0xffffffff00000000);
  uVar2 = FUN__text__00371260(*puVar1,&local_28);
  local_4 = 0x8cbbfd90;
  local_30 = 8;
  local_28 = (undefined8 *)(param_1 + 0x60);
  FUN__text__00368230(uVar2,&local_4,&local_28,&local_30);
  return;
}


