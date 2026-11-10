/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016caa4; name: FUN_.text__0016caa4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0016caa4(void)

{
  long lVar1;
  undefined8 uVar2;
  long local_30;
  undefined8 local_28;
  
  uVar2 = *(undefined8 *)(*_DAT_0089f3d8 + 0x68);
  local_28 = *(undefined8 *)(*_DAT_0089f3d8 + 0x48);
  lVar1 = *(long *)(*_DAT_0089f4f0 + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN__text__0016f86c(&local_30,lVar1,uVar2,&local_28);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


