/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c3590; name: FUN_.text__004c3590
 */


void FUN__text__004c3590(undefined8 *param_1,undefined8 param_2,undefined8 param_3,
                        undefined8 param_4,undefined8 param_5,undefined4 param_6,byte param_7)

{
  FUN__text__00446d98(param_1,param_3,param_4,param_5,param_6);
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = 0x88c548;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xf8 | param_7;
  return;
}


