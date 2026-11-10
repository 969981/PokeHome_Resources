/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1de4; name: FUN_.text__006c1de4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c1de4(float param_1,float param_2,long *param_3,undefined8 param_4,
                        undefined8 param_5,int param_6)

{
  long lVar1;
  
  FUN__text__006eb75c();
  lVar1 = _DAT_008a6a80;
  *(int *)(param_3 + 9) = param_6;
  *(float *)(param_3 + 8) = param_1 + param_1;
  *(float *)((long)param_3 + 0x44) = param_2 + param_2;
  *param_3 = lVar1 + 0x10;
  FUN__text__006eb818(param_3,param_6 * 4 + 0x14);
  FUN__text__006eb850(param_3,(int)param_3[9] * 0xc + 0x12);
  return;
}


