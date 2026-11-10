/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049dcc0; name: FUN_.text__0049dcc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0049dcc0(long *param_1,ushort param_2)

{
  long lVar1;
  
  FUN__text__004a1098();
  lVar1 = _DAT_008a4b08;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *param_1 = lVar1 + 0x10;
  param_1[1] = lVar1 + 0x2b8;
  param_1[5] = lVar1 + 0x310;
  param_1[2] = lVar1 + 0x2d0;
  *(undefined2 *)((long)param_1 + 0x134) = 1;
  *(ushort *)((long)param_1 + 0x13d) =
       *(ushort *)((long)param_1 + 0x13d) & 0xfe00 | param_2 & 7 | 0x90;
  *(byte *)((long)param_1 + 0x13c) = *(byte *)((long)param_1 + 0x13c) & 0xc0;
  return;
}


