/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016be00; name: FUN_.text__0016be00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0016be00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = _DAT_0089f7b0 + 0x50;
  lVar1 = _DAT_0089f7b0 + 0x90;
  *(long *)(param_1 + 0x458) = _DAT_0089f7b0 + 0x10;
  *(long *)(param_1 + 0x4a0) = lVar2;
  *(long *)(param_1 + 0x4a8) = lVar1;
  if (*(long *)(param_1 + 0x4b0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x4b0) = 0;
  }
  if (*(long *)(param_1 + 0x428) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x428) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x428) = 0;
  }
  if (*(long *)(param_1 + 0x420) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x420) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x420) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x400);
  *(undefined8 *)(param_1 + 0x400) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x408) + 0x18))
              (*(long **)(param_1 + 0x408),lVar2,*(undefined8 *)(param_1 + 0x410),
               *(undefined8 *)(param_1 + 0x418));
  }
  lVar2 = *(long *)(param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  if (lVar2 != 0) {
    FUN__text__0016f2b4(lVar2);
    (**(code **)(**(long **)(param_1 + 1000) + 0x18))
              (*(long **)(param_1 + 1000),lVar2,*(undefined8 *)(param_1 + 0x3f0),
               *(undefined8 *)(param_1 + 0x3f8));
  }
  FUN__text__001167a0(param_1);
  return;
}


