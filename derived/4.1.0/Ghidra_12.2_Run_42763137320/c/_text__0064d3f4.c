/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064d3f4; name: FUN_.text__0064d3f4
 */


void FUN__text__0064d3f4(long *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != (long *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x30,8);
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    DAT_00c5f5c0 = puVar1;
    puVar1[2] = 0;
    puVar1[3] = param_1;
    FUN__text__0064d450(puVar1,8);
    DAT_00c5f5c8 = param_1;
  }
  return;
}


