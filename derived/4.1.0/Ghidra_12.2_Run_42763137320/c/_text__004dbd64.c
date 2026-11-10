/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dbd64; name: FUN_.text__004dbd64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004dbd64(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = _DAT_008a4820;
  lVar1 = _DAT_008a4820 + 0x10;
  *param_1 = _DAT_008a4ed8 + 0x10;
  param_1[7] = lVar1;
  pcVar3 = *(code **)(lVar2 + 0x38);
  param_1[8] = lVar2 + 0x58;
  (*pcVar3)();
  if (param_1[0x16] != 0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    FUN__text__00400fc0(0);
    param_1[0x16] = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0;
  }
  FUN__text__004335d0(param_1 + 8);
  FUN__text__004d8e04(param_1 + 2);
  operator_delete(param_1);
  return;
}


