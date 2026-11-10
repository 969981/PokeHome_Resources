/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b8858; name: FUN_.text__004b8858
 */


void FUN__text__004b8858(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  FUN__text__004b9658();
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = 0x88b740;
  lVar1 = *param_3;
  param_1[0xc] = lVar1;
  if (lVar1 != 0) {
    FUN__text__0049dbd4();
  }
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined2 *)((long)param_1 + 0xc4) = 1;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x400000000;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)((long)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(byte *)((long)param_1 + 0xcc) = *(byte *)((long)param_1 + 0xcc) & 0xfe;
  *(undefined2 *)(param_1 + 0x20) = 0xff00;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x22] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return;
}


