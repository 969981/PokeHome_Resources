/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004078fc; name: FUN_.text__004078fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004078fc(float param_1,float param_2,long param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  float local_38;
  float fStack_34;
  
  local_38 = *(float *)(param_3 + 0x4c8) * param_1 * *_DAT_008a49c8;
  fStack_34 = *(float *)(param_3 + 0x4cc) * param_2 * _DAT_008a49c8[1];
  FUN__text__004079cc();
  if (*(long *)(param_3 + 0x88) != 0) {
    FUN__text__00407430(param_3,param_4,param_5,param_6,&local_38);
  }
  plVar1 = *(long **)(param_3 + 0x4c0);
  if (*(char *)(param_3 + 0x559) == '\0') {
    (**(code **)(*plVar1 + 0x68))(local_38,fStack_34,plVar1,param_4);
    return;
  }
  (**(code **)(*plVar1 + 0x70))(plVar1,param_4,param_5,param_6);
  return;
}


