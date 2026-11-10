/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00379828; name: FUN_.text__00379828
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00379828(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  long lStack_38;
  undefined4 local_14;
  
  lVar2 = *(long *)(*_DAT_0089f4f0 + 0x80);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__0063afe4(lVar3,param_1 + 0x60);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  local_14 = 0;
  uVar1 = FUN__text__00371260(*_DAT_0089f448,&local_14);
  local_40 = 0x814;
  lStack_38 = param_1 + 0x60;
  FUN__text__003794c0(uVar1,_DAT_008a3060,&lStack_38,&local_40);
  return;
}


