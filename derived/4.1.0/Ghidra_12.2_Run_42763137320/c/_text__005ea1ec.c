/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ea1ec; name: FUN_.text__005ea1ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005ea1ec(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long local_8;
  
  param_1[7] = 0;
  lVar3 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar3 + 0x10;
  if ((uVar2 == 0) || (*(long *)(uVar2 + 0x98) == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x10);
  }
  *_DAT_008a5ae0 = 1;
  lVar1 = _DAT_008a5af0 + 0x40;
  *param_1 = _DAT_008a5af0 + 0x10;
  param_1[1] = lVar3;
  param_1[9] = lVar1;
  param_1[10] = 0;
  FUN__text__005ea2b8(&local_8,lVar3,_DAT_008a5ae8);
  if (param_1[10] != 0) {
    (**(code **)(*(long *)(param_1[10] + 0x48) + 0x18))();
  }
  param_1[10] = local_8;
  FUN__text__005e896c(local_8,0x70e821,0xffffffff,0x10);
  return;
}


