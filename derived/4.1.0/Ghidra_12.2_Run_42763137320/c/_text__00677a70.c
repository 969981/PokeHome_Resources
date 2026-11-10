/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677a70; name: FUN_.text__00677a70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00677a70(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  void *__s;
  
  lVar2 = _DAT_008b4668;
  lVar4 = param_1 + (long)param_2 * 0x18;
  if ((*(int *)(lVar4 + 0x290) != 2) ||
     (lVar5 = param_1 + (long)param_2 * 0x18, (*(byte *)(lVar5 + 0x2d0) & 1) != 0)) {
    return 0;
  }
  if ((*(byte *)(_DAT_008b4668 + 0x10) >> 4 & 1) == 0) {
    return 4;
  }
  param_1 = param_1 + (long)param_2 * 0x18;
  uVar3 = *(undefined8 *)(lVar4 + 0x290);
  uVar1 = *(undefined8 *)(lVar4 + 0x298);
  *(undefined8 *)(lVar4 + 0x290) = 0;
  *(undefined8 *)(lVar4 + 0x298) = 0;
  __s = *(void **)(param_1 + 0x2c8);
  *(undefined8 *)(lVar5 + 0x2c0) = uVar3;
  *(undefined8 *)(lVar5 + 0x2c8) = uVar1;
  uVar3 = *(undefined8 *)(lVar4 + 0x2a0);
  *(undefined8 *)(lVar4 + 0x2a0) = 0;
  *(undefined8 *)(lVar5 + 0x2d0) = uVar3;
  memset(__s,0,*(size_t *)(lVar2 + 0x18));
  *(void **)(param_1 + 0x298) = __s;
  return 0;
}


