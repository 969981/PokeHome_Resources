/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00117290; name: FUN_.text__00117290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00117290(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long local_28;
  
  lVar2 = *(long *)(*_DAT_0089f4f0 + 0x70);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    FUN__text__0011c690(lVar2);
  }
  if (DAT_008e15d0 != 0) {
    FUN__text__0010de28();
  }
  if (DAT_008e15e0 != 0) {
    FUN__text__00154864();
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  FUN__text__005d8504(param_1);
  iVar1 = FUN__text__005d84b0(param_1);
  if (iVar1 == 2) {
    FUN__text__005d84d4(&local_28,param_1);
    if (local_28 != 0) {
      *(undefined1 *)(local_28 + 0x80) = 1;
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  FUN__text__005d8410(param_1);
  FUN__text__005d862c(param_1);
  return;
}


