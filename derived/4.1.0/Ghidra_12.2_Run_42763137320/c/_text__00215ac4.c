/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00215ac4; name: FUN_.text__00215ac4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00215ac4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_0089f7a8;
  lVar2 = param_1[0xc];
  param_1[0xc] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[9] = lVar1 + 0x158;
  param_1[10] = lVar1 + 0x198;
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0xe8);
    *(undefined8 *)(lVar2 + 0xe8) = 0;
    if (lVar1 != 0) {
      (**(code **)(**(long **)(lVar2 + 0xf0) + 0x18))
                (*(long **)(lVar2 + 0xf0),lVar1,*(undefined8 *)(lVar2 + 0xf8),
                 *(undefined8 *)(lVar2 + 0x100));
    }
    lVar1 = *(long *)(lVar2 + 0x48);
    *(undefined8 *)(lVar2 + 0x48) = 0;
    if (lVar1 != 0) {
      (**(code **)(**(long **)(lVar2 + 0x50) + 0x18))
                (*(long **)(lVar2 + 0x50),lVar1,*(undefined8 *)(lVar2 + 0x58),
                 *(undefined8 *)(lVar2 + 0x60));
    }
    lVar1 = *(long *)(lVar2 + 8);
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar1 != 0) {
      (**(code **)(**(long **)(lVar2 + 0x10) + 0x18))
                (*(long **)(lVar2 + 0x10),lVar1,*(undefined8 *)(lVar2 + 0x18),
                 *(undefined8 *)(lVar2 + 0x20));
    }
    (**(code **)(*(long *)param_1[0xd] + 0x18))
              ((long *)param_1[0xd],lVar2,param_1[0xe],param_1[0xf]);
  }
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


