/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ee5ac; name: FUN_.text__006ee5ac
 */


void FUN__text__006ee5ac(long param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (*(long *)(param_1 + 0x10) +
           *(long *)((ulong)*(byte *)(param_1 + 1) * 8 + 0x77ebc0) * (long)param_2);
  uVar1 = FUN__text__006f23c4(*param_3,param_3[1]);
  *puVar2 = uVar1;
  puVar2[1] = param_4;
  return;
}


