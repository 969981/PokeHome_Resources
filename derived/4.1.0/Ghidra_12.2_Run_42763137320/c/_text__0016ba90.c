/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016ba90; name: FUN_.text__0016ba90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0016ba90(void)

{
  long lVar1;
  long local_28;
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(*_DAT_0089f3d8 + 8);
  lVar1 = *(long *)(*_DAT_0089f4f0 + 0x68);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN__text__0016bb1c(&local_28,lVar1,&local_8);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


