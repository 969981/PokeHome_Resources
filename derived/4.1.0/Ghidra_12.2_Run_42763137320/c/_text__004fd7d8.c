/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fd7d8; name: FUN_.text__004fd7d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004fd7d8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  *param_1 = _DAT_008a50c0 + 0x10;
  if ((param_1[8] != 0) && (lVar1 = *(long *)(param_1[8] + 0x78), lVar1 != 0)) {
    if ((*(long *)(lVar1 + 0x178) == 0) || (*(long *)(lVar1 + 0x170) == 0)) {
      uVar2 = 0;
      uVar3 = 0x800000000;
    }
    else {
      uVar2 = (ulong)*(uint *)(*(long *)(lVar1 + 0x170) + (ulong)*(uint *)((long)param_1 + 0xc) * 4)
      ;
      uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + 0x178) + (ulong)*(uint *)((long)param_1 + 0xc)) <<
              0x20;
    }
    FUN__text__00434930(DAT_00ae9a70,uVar2 | uVar3,param_1);
  }
  operator_delete(param_1);
  return;
}


